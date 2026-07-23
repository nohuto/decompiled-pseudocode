/*
 * XREFs of BgkDisplayStringEx @ 0x14054F464
 * Callers:
 *     BgkDisplayString @ 0x14054F3B0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1409F8CE0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     HeadlessDispatch @ 0x1403773F0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14054F648 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x140AEF4BC (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_140C6AB81 || byte_140C6AB79 )
  {
    byte_140C6AB81 = 0;
    byte_140C6AB79 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C6AB68 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_140C0BD48);
  return v4;
}
