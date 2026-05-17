/*
 * XREFs of LdrGetDllHandleByMapping @ 0x180050C70
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003FC24 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByMapping @ 0x180050578 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800E1D80 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int LoadedDllByMapping; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  volatile signed __int32 *v8; // rdi
  _DWORD *v10; // [rsp+28h] [rbp-10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v12; // [rsp+58h] [rbp+20h] BYREF

  LoadedDllByMapping = RtlImageNtHeaderEx(1, a1, 0LL, &v10);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(a1, v10, &v12, &v11);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v11 < 7 )
      {
        LoadedDllByMapping = -1073741515;
        v8 = v12;
      }
      else
      {
        v8 = v12;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount((__int64)v12, v5, v6, v7);
        if ( LoadedDllByMapping >= 0 )
          *a2 = *((_QWORD *)v8 + 6);
      }
      LdrpDereferenceModule((__int64)v8, v5, v6, v7);
    }
  }
  return (unsigned int)LoadedDllByMapping;
}
