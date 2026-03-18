/*
 * XREFs of IsDestroyThreadsMessagesSupported @ 0x1C00A7D38
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDestroyThreadsMessagesSupported()
{
  if ( qword_1C02954E8 )
    return qword_1C02954E8();
  else
    return 3221225659LL;
}
