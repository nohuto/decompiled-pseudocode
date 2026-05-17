/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18002DCF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002A380 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByMapping @ 0x18002DBFC (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800E18C0 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int LoadedDllByMapping; // ebx
  volatile signed __int32 *v5; // rdi
  _DWORD *v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v9; // [rsp+58h] [rbp+20h] BYREF

  LoadedDllByMapping = RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(a1, v7, &v9, &v8);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = v9;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount((__int64)v9);
        if ( LoadedDllByMapping >= 0 )
          *a2 = *((_QWORD *)v5 + 6);
      }
      else
      {
        LoadedDllByMapping = -1073741515;
        v5 = v9;
      }
      LdrpDereferenceModule((__int64)v5);
    }
  }
  return (unsigned int)LoadedDllByMapping;
}
