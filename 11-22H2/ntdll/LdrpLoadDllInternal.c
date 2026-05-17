/*
 * XREFs of LdrpLoadDllInternal @ 0x180028E74
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180019000 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180029B58 (LdrpFastpthReloadedDll.c)
 *     LdrpBuildForwarderLink @ 0x18002A5C8 (LdrpBuildForwarderLink.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D65C (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DCA8 (LdrpPrepareModuleForExecution.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18002E43C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     LdrpFreeReplacedModule @ 0x180067B44 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180067B7C (LdrpFreeLoadContextOfNode.c)
 *     LdrpHandleReplacedModule @ 0x180067CEC (LdrpHandleReplacedModule.c)
 *     LdrpCondenseGraph @ 0x18006F394 (LdrpCondenseGraph.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x18007763C (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x180077698 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpPinModule @ 0x180079308 (LdrpPinModule.c)
 *     LdrpLogError @ 0x1800824EC (LdrpLogError.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA5D0 (LdrpQueryCurrentPatch.c)
 *     LdrpApplyPatchImage @ 0x1800DFC84 (LdrpApplyPatchImage.c)
 *     LdrpUndoPatchImage @ 0x1800E0250 (LdrpUndoPatchImage.c)
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
        __int64 a9)
{
  unsigned int v10; // esi
  __int64 *v12; // r13
  __int64 v13; // rdi
  int v14; // eax
  int *v15; // rbx
  char v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int LoadedDllByHandle; // esi
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  __int128 v28[4]; // [rsp+50h] [rbp-48h] BYREF

  v10 = a3;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    889LL,
    (__int64)"LdrpLoadDllInternal",
    3LL,
    "DLL name: %wZ\n",
    a1);
  v12 = a7;
  *a7 = 0LL;
  v27 = 0LL;
  v13 = a6;
  if ( a4 != 9 )
  {
    v14 = LdrpFastpthReloadedDll(a1, v10, a6, v12);
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
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL);
  if ( LoadedDllByHandle < 0 )
  {
LABEL_51:
    if ( *(_QWORD *)(a1 + 8) )
      LdrpFreeUnicodeString(a1);
    v15 = a8;
    *a8 = LoadedDllByHandle;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(a5 + 304) == 4 )
  {
    LoadedDllByHandle = -1073740628;
    goto LABEL_51;
  }
  v13 = a5;
  LoadedDllByHandle = LdrpQueryCurrentPatch(*(unsigned int *)(a5 + 288), *(unsigned int *)(a5 + 128), a1);
  if ( LoadedDllByHandle < 0 )
    goto LABEL_51;
  if ( !*(_WORD *)a1 )
  {
    if ( *(_QWORD *)(v13 + 296) )
      LoadedDllByHandle = LdrpUndoPatchImage(v13);
    goto LABEL_51;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrapi.c",
    1018LL,
    (__int64)"LdrpLoadDllInternal",
    2LL,
    "Loading patch image: %wZ\n",
    a1);
  v10 = a3;
LABEL_10:
  LdrpThreadTokenSetMainThreadToken();
  if ( !v13 || v17 || *(_DWORD *)(*(_QWORD *)(v13 + 152) + 24LL) )
  {
    LdrpDetectDetour();
    v15 = a8;
    v18 = LdrpFindOrPrepareLoadingModule(a1, a2, v10, a4, a5, (__int64)&v27, (__int64)a8);
    if ( v18 == -1073741515 )
    {
      LdrpProcessWork(*(_QWORD *)(v27 + 176), 1);
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
  v20 = v27;
  if ( v27 )
  {
    v21 = LdrpHandleReplacedModule();
    *v12 = v21;
    if ( v27 != v21 )
    {
      LdrpFreeReplacedModule(v27, v27, v22);
      v27 = *v12;
      if ( *(_DWORD *)(v27 + 268) == 9 && a4 != 9 )
        *v15 = -1073740608;
    }
    if ( *(_QWORD *)(v27 + 176) )
      LdrpCondenseGraph(*(_QWORD *)(v27 + 152));
    if ( *v15 >= 0 )
    {
      v23 = LdrpPrepareModuleForExecution(v27, v15);
      *v15 = v23;
      if ( v23 >= 0 )
      {
        v24 = LdrpBuildForwarderLink(v13, v27);
        *v15 = v24;
        if ( v24 >= 0 && !LdrInitState )
          LdrpPinModule(v27);
      }
      if ( a4 == 9 && *(_QWORD *)(a5 + 296) != *(_QWORD *)(v27 + 48) )
      {
        if ( *(_DWORD *)(v27 + 304) == 4 )
        {
          *v15 = -1073741502;
        }
        else
        {
          v25 = LdrpApplyPatchImage(v27);
          *v15 = v25;
          if ( v25 < 0 )
          {
            v28[0] = *(_OWORD *)(v27 + 72);
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrapi.c",
              1199LL,
              (__int64)"LdrpLoadDllInternal",
              0LL,
              "Applying patch \"%wZ\" failed\n",
              v28);
          }
        }
      }
    }
    LdrpFreeLoadContextOfNode(*(_QWORD *)(v27 + 152), v15);
    if ( *v15 < 0 && (a4 != 9 || *(_DWORD *)(v27 + 304) != 2) )
    {
      *v12 = 0LL;
      LdrpDecrementModuleLoadCountEx(v27, 0LL);
      LdrpDereferenceModule(v27);
    }
  }
  else
  {
    *v15 = -1073741801;
  }
LABEL_45:
  if ( !v17 )
    LdrpDropLastInProgressCount(v20, v19);
LABEL_4:
  if ( a4 == 9 && a5 )
    LdrpDereferenceModule(a5);
  return LdrpLogInternal(
           (unsigned int)"minkernel\\ntdll\\ldrapi.c",
           1326LL,
           (__int64)"LdrpLoadDllInternal",
           4LL,
           "Status: 0x%08lx\n",
           *v15);
}
