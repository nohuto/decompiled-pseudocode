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
        unsigned int a3,
        int a4,
        __int64 a5,
        char **a6,
        __int64 a7)
{
  char **v7; // rbx
  unsigned __int16 *v11; // rbp
  __int64 v12; // rdx
  int LoadedDllByName; // edi
  char *v15; // rcx
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF

  v7 = a6;
  v17 = 0;
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
    v12 = (__int64)v11;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v12, a3, (__int64)v7, &v17);
  if ( LoadedDllByName != -1073741515 )
  {
    v15 = *v7;
    if ( v17 < 0 )
    {
      v16 = *(_OWORD *)(v15 + 72);
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3049,
        (__int64)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v16,
        v17);
      LoadedDllByName = -1073741595;
      LdrpDereferenceModule(*v7);
      *v7 = 0LL;
    }
    else
    {
      LdrpIncrementModuleLoadCount((__int64)v15);
    }
    return (unsigned int)LoadedDllByName;
  }
LABEL_5:
  LoadedDllByName = LdrpAllocatePlaceHolder((_DWORD)v11, a2, a3, a4, a5, (__int64)v7, a7);
  if ( LoadedDllByName >= 0 )
    return (unsigned int)LdrpLoadKnownDll(*((_BYTE **)*v7 + 22));
  return (unsigned int)LoadedDllByName;
}
