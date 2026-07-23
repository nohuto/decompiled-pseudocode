/*
 * XREFs of LdrpLoadDllInternal @ 0x18003B940
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpBuildForwarderLink @ 0x18003FB90 (LdrpBuildForwarderLink.c)
 *     LdrpPrepareModuleForExecution @ 0x18004DB8C (LdrpPrepareModuleForExecution.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004DD44 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180052674 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpLogError @ 0x180053F2C (LdrpLogError.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x180054278 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800542D4 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpFreeReplacedModule @ 0x18006B238 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B270 (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x18006B3E0 (LdrpHandleReplacedModule.c)
 *     LdrpDetectDetour @ 0x180074E0C (LdrpDetectDetour.c)
 *     LdrpCondenseGraph @ 0x1800757A4 (LdrpCondenseGraph.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA4E0 (LdrpQueryCurrentPatch.c)
 *     LdrpApplyPatchImage @ 0x1800E1480 (LdrpApplyPatchImage.c)
 *     LdrpUndoPatchImage @ 0x1800E1A40 (LdrpUndoPatchImage.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        PVOID *a7,
        int *a8,
        unsigned __int64 a9)
{
  unsigned int v10; // edi
  int v11; // esi
  PVOID *v13; // r13
  int v14; // eax
  int *v15; // rbx
  char v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  PVOID v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int LoadedDllByHandle; // esi
  _DWORD *v25; // rdi
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27[4]; // [rsp+50h] [rbp-48h] BYREF

  v10 = a3;
  v11 = a2;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    889,
    (unsigned int)"LdrpLoadDllInternal",
    3,
    "DLL name: %wZ\n",
    a1);
  v13 = a7;
  *a7 = 0LL;
  BaseAddress[0] = 0LL;
  if ( a4 != 9 )
  {
    v14 = LdrpFastpthReloadedDll(a1, v10, a6, v13);
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -1073740608 )
    {
      v15 = a8;
      *a8 = v14;
      goto LABEL_4;
    }
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v17 = 1;
  }
  else
  {
    v17 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  if ( a4 != 9 )
    goto LABEL_10;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, (__int64 *)&a5, 0LL);
  if ( LoadedDllByHandle < 0 )
  {
LABEL_51:
    if ( *(_QWORD *)(a1 + 8) )
      LdrpFreeUnicodeString(a1);
    v15 = a8;
    *a8 = LoadedDllByHandle;
    goto LABEL_45;
  }
  if ( a5[76] == 4 )
  {
    LoadedDllByHandle = -1073740628;
    goto LABEL_51;
  }
  v25 = a5;
  a6 = a5;
  LoadedDllByHandle = LdrpQueryCurrentPatch((unsigned int)a5[72], (unsigned int)a5[32], a1);
  if ( LoadedDllByHandle < 0 )
    goto LABEL_51;
  if ( !*(_WORD *)a1 )
  {
    if ( *((_QWORD *)v25 + 37) )
      LoadedDllByHandle = LdrpUndoPatchImage(v25);
    goto LABEL_51;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1018,
    (unsigned int)"LdrpLoadDllInternal",
    2,
    "Loading patch image: %wZ\n",
    a1);
  v10 = a3;
  v11 = a2;
LABEL_10:
  LdrpThreadTokenSetMainThreadToken();
  if ( !a6 || v17 || *(_DWORD *)(*((_QWORD *)a6 + 19) + 24LL) )
  {
    LdrpDetectDetour();
    v15 = a8;
    v18 = LdrpFindOrPrepareLoadingModule(a1, v11, v10, a4, (__int64)a5, (__int64)BaseAddress, (__int64)a8);
    if ( v18 == -1073741515 )
    {
      LOBYTE(v19) = 1;
      LdrpProcessWork(*((_QWORD *)BaseAddress[0] + 22), v19);
    }
    else if ( v18 != -1073741267 && v18 < 0 )
    {
      *v15 = v18;
    }
  }
  else
  {
    v15 = a8;
    *a8 = -1073741515;
  }
  LdrpDrainWorkQueue(1LL);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  if ( BaseAddress[0] )
  {
    v20 = (PVOID)LdrpHandleReplacedModule();
    *v13 = v20;
    if ( BaseAddress[0] != v20 )
    {
      LdrpFreeReplacedModule(BaseAddress[0]);
      BaseAddress[0] = *v13;
      if ( *((_DWORD *)BaseAddress[0] + 67) == 9 && a4 != 9 )
        *v15 = -1073740608;
    }
    if ( *((_QWORD *)BaseAddress[0] + 22) )
      LdrpCondenseGraph(*((_QWORD *)BaseAddress[0] + 19));
    if ( *v15 >= 0 )
    {
      v21 = LdrpPrepareModuleForExecution(BaseAddress[0], v15);
      *v15 = v21;
      if ( v21 >= 0 )
      {
        v22 = LdrpBuildForwarderLink(a6, BaseAddress[0]);
        *v15 = v22;
        if ( v22 >= 0 && !LdrInitState )
          LdrpPinModule((__int64)BaseAddress[0]);
      }
      if ( a4 == 9 && *((_QWORD *)a5 + 37) != *((_QWORD *)BaseAddress[0] + 6) )
      {
        if ( *((_DWORD *)BaseAddress[0] + 76) == 4 )
        {
          *v15 = -1073741502;
        }
        else
        {
          v23 = LdrpApplyPatchImage(BaseAddress[0]);
          *v15 = v23;
          if ( v23 < 0 )
          {
            v27[0] = *(_OWORD *)((char *)BaseAddress[0] + 72);
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrapi.c",
              1199,
              (unsigned int)"LdrpLoadDllInternal",
              0,
              "Applying patch \"%wZ\" failed\n",
              v27);
          }
        }
      }
    }
    LdrpFreeLoadContextOfNode(*((_QWORD *)BaseAddress[0] + 19), v15);
    if ( *v15 < 0 && (a4 != 9 || *((_DWORD *)BaseAddress[0] + 76) != 2) )
    {
      *v13 = 0LL;
      LdrpDecrementModuleLoadCountEx(BaseAddress[0], 0LL);
      LdrpDereferenceModule((char *)BaseAddress[0]);
    }
  }
  else
  {
    *v15 = -1073741801;
  }
LABEL_45:
  if ( !v17 )
    LdrpDropLastInProgressCount();
LABEL_4:
  if ( a4 == 9 && a5 )
    LdrpDereferenceModule((char *)a5);
  return LdrpLogInternal(
           (unsigned int)"minkernel\\ntdll\\ldrapi.c",
           1326,
           (unsigned int)"LdrpLoadDllInternal",
           4,
           "Status: 0x%08lx\n",
           *v15);
}
