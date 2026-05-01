/*
 * XREFs of sub_18000BD28 @ 0x18000BD28
 * Callers:
 *     sub_18000AAC4 @ 0x18000AAC4 (sub_18000AAC4.c)
 * Callees:
 *     sub_180002A90 @ 0x180002A90 (sub_180002A90.c)
 *     sub_180009000 @ 0x180009000 (sub_180009000.c)
 *     sub_1800161C0 @ 0x1800161C0 (sub_1800161C0.c)
 */

__int64 __fastcall sub_18000BD28(HMODULE hLibModule, int a2)
{
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_180009000((ULONGLONG *)&dword_180032000);
      sub_180009000((ULONGLONG *)&dword_180032038);
      DisableThreadLibraryCalls(hLibModule);
      sub_1800161C0();
    }
  }
  else
  {
    sub_180002A90();
    v3 = RegHandle;
    RegHandle = 0LL;
    dword_180032000 = 0;
    EventUnregister(v3);
    v4 = qword_180032058;
    qword_180032058 = 0LL;
    dword_180032038 = 0;
    EventUnregister(v4);
  }
  return 1LL;
}
