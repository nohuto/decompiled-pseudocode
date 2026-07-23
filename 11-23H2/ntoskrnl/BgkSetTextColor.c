/*
 * XREFs of BgkSetTextColor @ 0x14054F580
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14054F648 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140C6AB68 + 16))((char *)Palette + 4 * v1, 0LL);
    ExReleaseRundownProtection_0(&stru_140C0BD48);
  }
  return 0LL;
}
