/*
 * XREFs of LdrGetDllHandleByName @ 0x180077840
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A380 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFatalExceptionFilter @ 0x1800E18C0 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v7, &v8);
  if ( LoadedDllByName >= 0 )
  {
    if ( v8 < 7 )
    {
      LoadedDllByName = -1073741515;
      v5 = v7;
    }
    else
    {
      v5 = v7;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v7);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v5 + 48);
    }
    LdrpDereferenceModule(v5);
  }
  return (unsigned int)LoadedDllByName;
}
