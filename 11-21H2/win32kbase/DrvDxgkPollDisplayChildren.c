/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0174150
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C02966E0 )
    return qword_1C02966E0(a1, 0LL);
  else
    return 3221225659LL;
}
