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

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  NTSTATUS LoadedDllByMapping; // ebx
  PVOID v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  LoadedDllByMapping = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(
                           BaseAddress,
                           OutHeaders,
                           (volatile signed __int32 **)&BaseAddressa,
                           &v8);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v8 < 7 )
      {
        LoadedDllByMapping = -1073741515;
        v5 = BaseAddressa;
      }
      else
      {
        v5 = BaseAddressa;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount((__int64)BaseAddressa);
        if ( LoadedDllByMapping >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)v5 + 6);
      }
      LdrpDereferenceModule((char *)v5);
    }
  }
  return LoadedDllByMapping;
}
