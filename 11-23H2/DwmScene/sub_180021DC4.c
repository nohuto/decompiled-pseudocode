/*
 * XREFs of sub_180021DC4 @ 0x180021DC4
 * Callers:
 *     sub_180021F60 @ 0x180021F60 (sub_180021F60.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180021D9C @ 0x180021D9C (sub_180021D9C.c)
 *     sub_180021E50 @ 0x180021E50 (sub_180021E50.c)
 *     sub_180021EF0 @ 0x180021EF0 (sub_180021EF0.c)
 */

__int64 __fastcall sub_180021DC4(_QWORD *a1)
{
  REGHANDLE v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  if ( !sub_180021EF0() )
  {
    v2 = qword_1801C81E0;
    qword_1801C81E0 = 0LL;
    dword_1801C81C0 = 0;
    EventUnregister(v2);
  }
  sub_180021D9C(a1 + 14);
  sub_180011B24((__int64)(a1 + 10));
  sub_180011B24((__int64)(a1 + 6));
  v3 = a1[5];
  if ( v3 )
    sub_180010530(v3);
  sub_180021E50();
  sub_180021E50();
  return sub_180021E50();
}
