/*
 * XREFs of RtlDownlevelGetNtSystemRoot @ 0x1800A1174
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180051E70 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetProcessHistory @ 0x1800911E8 (SdbpGetProcessHistory.c)
 *     AslPathToSystemPathBuf @ 0x18009DB78 (AslPathToSystemPathBuf.c)
 *     AslEnvVarQuery @ 0x1800A040C (AslEnvVarQuery.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 RtlDownlevelGetNtSystemRoot()
{
  __int64 v0; // rbx
  HMODULE Library; // rax
  HMODULE v2; // rdi
  __int64 (*ProcAddress)(void); // rax

  v0 = qword_1800DD7E0;
  if ( !qword_1800DD7E0 )
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
    qword_1800DD7E0 = v0;
  }
  return v0;
}
