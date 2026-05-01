/*
 * XREFs of RtlDownlevelGetNtSystemRoot @ 0x1800A14E4
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetProcessHistory @ 0x180091548 (SdbpGetProcessHistory.c)
 *     AslPathToSystemPathBuf @ 0x18009DEE8 (AslPathToSystemPathBuf.c)
 *     AslEnvVarQuery @ 0x1800A077C (AslEnvVarQuery.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 RtlDownlevelGetNtSystemRoot()
{
  __int64 v0; // rbx
  HMODULE Library; // rax
  HMODULE v2; // rdi
  __int64 (*ProcAddress)(void); // rax

  v0 = qword_1800DD820;
  if ( !qword_1800DD820 )
  {
    v0 = 2147352624LL;
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v2 = Library;
    if ( Library )
    {
      ProcAddress = GetProcAddress(Library, "RtlGetNtSystemRoot");
      if ( ProcAddress )
        v0 = ProcAddress();
      FreeLibrary(v2);
    }
    qword_1800DD820 = v0;
  }
  return v0;
}
