/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C02331F0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C02956A0 )
    return qword_1C02956A0();
  else
    return 3221225659LL;
}
