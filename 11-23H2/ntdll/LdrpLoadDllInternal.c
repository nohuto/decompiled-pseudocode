/*
 * XREFs of LdrpLoadDllInternal @ 0x180028CA4
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180018DF0 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029988 (LdrpFastpthReloadedDll.c)
 *     LdrpBuildForwarderLink @ 0x18002A3F8 (LdrpBuildForwarderLink.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D48C (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DAD8 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E26C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     LdrpFreeReplacedModule @ 0x180067B24 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B5C (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x180067CCC (LdrpHandleReplacedModule.c)
 *     LdrpCondenseGraph @ 0x18006F394 (LdrpCondenseGraph.c)
 *     LdrpDetectDetour @ 0x180071780 (LdrpDetectDetour.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x180077CAC (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077D08 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpPinModule @ 0x180079978 (LdrpPinModule.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     LdrpQueryCurrentPatch @ 0x1800D9F80 (LdrpQueryCurrentPatch.c)
 *     LdrpApplyPatchImage @ 0x1800E0FB4 (LdrpApplyPatchImage.c)
 *     LdrpUndoPatchImage @ 0x1800E1580 (LdrpUndoPatchImage.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        PVOID *a7,
        int *a8,
        __int64 a9)
{
  PVOID *v11; // r13
  _DWORD *v12; // rdi
  int v13; // eax
  int *v14; // rbx
  char v16; // r15
  int v17; // eax
  __int64 v18; // rdx
  PVOID v19; // rcx
  PVOID v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int LoadedDllByHandle; // esi
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26[4]; // [rsp+50h] [rbp-48h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    889,
    (__int64)"LdrpLoadDllInternal",
    3u,
    "DLL name: %wZ\n",
    a1);
  v11 = a7;
  *a7 = 0LL;
  BaseAddress[0] = 0LL;
  v12 = a6;
  if ( a4 != 9 )
  {
    v13 = LdrpFastpthReloadedDll(a1);
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -1073740608 )
    {
      v14 = a8;
      *a8 = v13;
      goto LABEL_4;
    }
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  if ( a4 != 9 )
    goto LABEL_10;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL);
  if ( LoadedDllByHandle < 0 )
  {
LABEL_51:
    if ( a1->Buffer )
      LdrpFreeUnicodeString((__int64)a1);
    v14 = a8;
    *a8 = LoadedDllByHandle;
    goto LABEL_45;
  }
  if ( a5[76] == 4 )
  {
    LoadedDllByHandle = -1073740628;
    goto LABEL_51;
  }
  v12 = a5;
  LoadedDllByHandle = LdrpQueryCurrentPatch((unsigned int)a5[72], (unsigned int)a5[32], a1);
  if ( LoadedDllByHandle < 0 )
    goto LABEL_51;
  if ( !a1->Length )
  {
    if ( *((_QWORD *)v12 + 37) )
      LoadedDllByHandle = LdrpUndoPatchImage(v12);
    goto LABEL_51;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1018,
    (__int64)"LdrpLoadDllInternal",
    2u,
    "Loading patch image: %wZ\n",
    a1);
LABEL_10:
  LdrpThreadTokenSetMainThreadToken();
  if ( !v12 || v16 || *(_DWORD *)(*((_QWORD *)v12 + 19) + 24LL) )
  {
    LdrpDetectDetour();
    v14 = a8;
    v17 = LdrpFindOrPrepareLoadingModule(a1, (__int64)a5, (__int64)BaseAddress, (__int64)a8);
    if ( v17 == -1073741515 )
    {
      LdrpProcessWork(*((_QWORD *)BaseAddress[0] + 22), 1);
    }
    else if ( v17 != -1073741267 && v17 < 0 )
    {
      *v14 = v17;
    }
  }
  else
  {
    v14 = a8;
    *a8 = -1073741515;
  }
  LdrpDrainWorkQueue(1LL);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v19 = BaseAddress[0];
  if ( BaseAddress[0] )
  {
    v20 = (PVOID)LdrpHandleReplacedModule();
    *v11 = v20;
    if ( BaseAddress[0] != v20 )
    {
      LdrpFreeReplacedModule(BaseAddress[0]);
      BaseAddress[0] = *v11;
      if ( *((_DWORD *)BaseAddress[0] + 67) == 9 && a4 != 9 )
        *v14 = -1073740608;
    }
    if ( *((_QWORD *)BaseAddress[0] + 22) )
      LdrpCondenseGraph(*((_QWORD *)BaseAddress[0] + 19));
    if ( *v14 >= 0 )
    {
      v21 = LdrpPrepareModuleForExecution(BaseAddress[0], v14);
      *v14 = v21;
      if ( v21 >= 0 )
      {
        v22 = LdrpBuildForwarderLink(v12, BaseAddress[0]);
        *v14 = v22;
        if ( v22 >= 0 && !LdrInitState )
          LdrpPinModule(BaseAddress[0]);
      }
      if ( a4 == 9 && *((_QWORD *)a5 + 37) != *((_QWORD *)BaseAddress[0] + 6) )
      {
        if ( *((_DWORD *)BaseAddress[0] + 76) == 4 )
        {
          *v14 = -1073741502;
        }
        else
        {
          v23 = LdrpApplyPatchImage(BaseAddress[0]);
          *v14 = v23;
          if ( v23 < 0 )
          {
            v26[0] = *(_OWORD *)((char *)BaseAddress[0] + 72);
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrapi.c",
              1199,
              (__int64)"LdrpLoadDllInternal",
              0,
              "Applying patch \"%wZ\" failed\n",
              v26);
          }
        }
      }
    }
    LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress[0] + 19), v14);
    if ( *v14 < 0 && (a4 != 9 || *((_DWORD *)BaseAddress[0] + 76) != 2) )
    {
      *v11 = 0LL;
      LdrpDecrementModuleLoadCountEx(BaseAddress[0], 0LL);
      LdrpDereferenceModule((char *)BaseAddress[0]);
    }
  }
  else
  {
    *v14 = -1073741801;
  }
LABEL_45:
  if ( !v16 )
    LdrpDropLastInProgressCount(v19, v18);
LABEL_4:
  if ( a4 == 9 && a5 )
    LdrpDereferenceModule((char *)a5);
  return LdrpLogInternal(
           (unsigned int)"minkernel\\ntdll\\ldrapi.c",
           1326,
           (__int64)"LdrpLoadDllInternal",
           4u,
           "Status: 0x%08lx\n",
           *v14);
}
