/*
 * XREFs of _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x180045007
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::QueueWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>((__int64 *)(a2 + 176));
}
