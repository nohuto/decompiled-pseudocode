/*
 * XREFs of _CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor$2 @ 0x180078D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::QueueWaitItemInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_WaitTask>::~unique_ptr<_WaitTask>(a2 + 176);
}
