/*
 * XREFs of RtlDownlevelGetNtSystemRoot @ 0x1800A69FC
 * Callers:
 *     SdbpGetProcessHistory @ 0x1800963E8 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x1800A35BC (AslEnvVarQuery.c)
 *     AslPathToSystemPathBuf @ 0x1800A41F0 (AslPathToSystemPathBuf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 RtlDownlevelGetNtSystemRoot()
{
  __int64 v0; // rbx
  HMODULE Library; // rax
  HMODULE v2; // rdi
  __int64 (*ProcAddress)(void); // rax

  v0 = qword_1800DE630;
  if ( !qword_1800DE630 )
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
    qword_1800DE630 = v0;
  }
  return v0;
}
