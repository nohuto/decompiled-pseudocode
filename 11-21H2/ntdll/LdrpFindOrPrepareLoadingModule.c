/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x18004DD44
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x18004DE38 (LdrpAllocatePlaceHolder.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        unsigned __int16 *a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  int v9; // esi
  unsigned __int16 *v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int LoadedDllByName; // edi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int128 v22; // [rsp+40h] [rbp-28h] BYREF
  int v23; // [rsp+80h] [rbp+18h] BYREF

  v7 = a6;
  v23 = 0;
  v9 = a3;
  v11 = a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( (a3 & 0x200) == 0 )
      goto LABEL_5;
    a1 = 0LL;
    v12 = (unsigned __int64)v11;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v12, a3, (unsigned __int64)v7, &v23);
  if ( LoadedDllByName != -1073741515 )
  {
    v18 = *v7;
    if ( v23 < 0 )
    {
      v22 = *(_OWORD *)(v18 + 72);
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3049,
        (__int64)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v22,
        v23);
      LoadedDllByName = -1073741595;
      LdrpDereferenceModule(*v7, v19, v20, v21);
      *v7 = 0LL;
    }
    else
    {
      LdrpIncrementModuleLoadCount(v18, v13, v15, v16);
    }
    return (unsigned int)LoadedDllByName;
  }
LABEL_5:
  LoadedDllByName = LdrpAllocatePlaceHolder((_DWORD)v11, a2, v9, a4, a5, (__int64)v7, a7);
  if ( LoadedDllByName >= 0 )
    return (unsigned int)LdrpLoadKnownDll(*(_BYTE **)(*v7 + 176));
  return (unsigned int)LoadedDllByName;
}
