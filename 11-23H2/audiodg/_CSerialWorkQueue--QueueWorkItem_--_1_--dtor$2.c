/*
 * XREFs of _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x1400702B7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_WorkTask *__fastcall CSerialWorkQueue::QueueWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>((_WorkTask **)(a2 + 128));
}
