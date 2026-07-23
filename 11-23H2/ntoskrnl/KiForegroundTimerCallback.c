/*
 * XREFs of KiForegroundTimerCallback @ 0x1403D58C0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C424A8, 0LL, 0LL, 0LL, 0);
}
