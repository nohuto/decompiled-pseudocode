/*
 * XREFs of PepProcQueryMeasValues @ 0x1C003BD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepProcQueryMeasValues(int a1, __int64 a2)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( qword_1C00127B0 )
    return qword_1C00127B0();
  return 3221225474LL;
}
