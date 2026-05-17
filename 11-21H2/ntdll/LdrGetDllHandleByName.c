/*
 * XREFs of LdrGetDllHandleByName @ 0x18007ED20
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpFatalExceptionFilter @ 0x1800E1D80 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rdx
  int LoadedDllByName; // ebx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0LL, (unsigned __int64)&v10, &v11);
  if ( LoadedDllByName >= 0 )
  {
    if ( v11 < 7 )
    {
      LoadedDllByName = -1073741515;
      v8 = v10;
    }
    else
    {
      v8 = v10;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v10, v4, v6, v7);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v8 + 48);
    }
    LdrpDereferenceModule(v8, v4, v6, v7);
  }
  return (unsigned int)LoadedDllByName;
}
