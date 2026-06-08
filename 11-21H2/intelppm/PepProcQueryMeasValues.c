/*
 * XREFs of PepProcQueryMeasValues @ 0x1C002DDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepProcQueryMeasValues(int a1, __int64 a2)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( qword_1C001DFC8 )
    return qword_1C001DFC8();
  return 3221225474LL;
}
