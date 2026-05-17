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
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8,
        unsigned __int64 a9)
{
  unsigned int v10; // edi
  int v11; // esi
  unsigned __int64 v13; // r9
  __int64 *v14; // r13
  int v15; // eax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  int *v18; // rbx
  char v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  int v32; // eax
  int LoadedDllByHandle; // esi
  __int64 v34; // rdi
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36[4]; // [rsp+50h] [rbp-48h] BYREF

  v10 = a3;
  v11 = a2;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    889,
    (unsigned int)"LdrpLoadDllInternal",
    3,
    "DLL name: %wZ\n",
    a1);
  v14 = a7;
  *a7 = 0LL;
  v35 = 0LL;
  if ( a4 != 9 )
  {
    v15 = LdrpFastpthReloadedDll(a1, v10, a6, v14);
    v17 = 0x80000000LL;
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073740608 )
    {
      v18 = a8;
      *a8 = v15;
      goto LABEL_4;
    }
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v20 = 1;
  }
  else
  {
    v20 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  if ( a4 != 9 )
    goto LABEL_10;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL, v13);
  if ( LoadedDllByHandle < 0 )
  {
LABEL_51:
    if ( *(_QWORD *)(a1 + 8) )
      LdrpFreeUnicodeString(a1);
    v18 = a8;
    *a8 = LoadedDllByHandle;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(a5 + 304) == 4 )
  {
    LoadedDllByHandle = -1073740628;
    goto LABEL_51;
  }
  v34 = a5;
  a6 = a5;
  LoadedDllByHandle = LdrpQueryCurrentPatch(*(unsigned int *)(a5 + 288), *(unsigned int *)(a5 + 128), a1);
  if ( LoadedDllByHandle < 0 )
    goto LABEL_51;
  if ( !*(_WORD *)a1 )
  {
    if ( *(_QWORD *)(v34 + 296) )
      LoadedDllByHandle = LdrpUndoPatchImage(v34);
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
  if ( !a6 || v20 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
  {
    LdrpDetectDetour();
    v18 = a8;
    v21 = LdrpFindOrPrepareLoadingModule(a1, v11, v10, a4, a5, (__int64)&v35, (__int64)a8);
    if ( v21 == -1073741515 )
    {
      LOBYTE(v22) = 1;
      LdrpProcessWork(*(_QWORD *)(v35 + 176), v22);
    }
    else if ( v21 != -1073741267 && v21 < 0 )
    {
      *v18 = v21;
    }
  }
  else
  {
    v18 = a8;
    *a8 = -1073741515;
  }
  LdrpDrainWorkQueue(1LL);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  if ( v35 )
  {
    v23 = LdrpHandleReplacedModule();
    *v14 = v23;
    if ( v35 != v23 )
    {
      LdrpFreeReplacedModule(v35);
      v35 = *v14;
      if ( *(_DWORD *)(v35 + 268) == 9 && a4 != 9 )
        *v18 = -1073740608;
    }
    if ( *(_QWORD *)(v35 + 176) )
      LdrpCondenseGraph(*(_QWORD *)(v35 + 152));
    if ( *v18 >= 0 )
    {
      v24 = LdrpPrepareModuleForExecution(v35, v18);
      *v18 = v24;
      if ( v24 >= 0 )
      {
        v25 = LdrpBuildForwarderLink(a6, v35);
        *v18 = v25;
        if ( v25 >= 0 && !LdrInitState )
          LdrpPinModule(v35, v26, v27, v28);
      }
      if ( a4 == 9 && *(_QWORD *)(a5 + 296) != *(_QWORD *)(v35 + 48) )
      {
        if ( *(_DWORD *)(v35 + 304) == 4 )
        {
          *v18 = -1073741502;
        }
        else
        {
          v32 = LdrpApplyPatchImage(v35);
          *v18 = v32;
          if ( v32 < 0 )
          {
            v36[0] = *(_OWORD *)(v35 + 72);
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrapi.c",
              1199,
              (unsigned int)"LdrpLoadDllInternal",
              0,
              "Applying patch \"%wZ\" failed\n",
              v36);
          }
        }
      }
    }
    LdrpFreeLoadContextOfNode(*(_QWORD *)(v35 + 152), v18);
    if ( *v18 < 0 && (a4 != 9 || *(_DWORD *)(v35 + 304) != 2) )
    {
      *v14 = 0LL;
      LdrpDecrementModuleLoadCountEx(v35, 0LL);
      LdrpDereferenceModule(v35, v29, v30, v31);
    }
  }
  else
  {
    *v18 = -1073741801;
  }
LABEL_45:
  if ( !v20 )
    LdrpDropLastInProgressCount();
LABEL_4:
  if ( a4 == 9 && a5 )
    LdrpDereferenceModule(a5, v17, v16, v13);
  return LdrpLogInternal(
           (unsigned int)"minkernel\\ntdll\\ldrapi.c",
           1326,
           (unsigned int)"LdrpLoadDllInternal",
           4,
           "Status: 0x%08lx\n",
           *v18);
}
