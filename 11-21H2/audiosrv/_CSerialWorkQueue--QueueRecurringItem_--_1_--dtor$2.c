/*
 * XREFs of _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$2 @ 0x1800CAE8D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::QueueRecurringItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>((_RecurringTask **)(a2 + 32));
}
