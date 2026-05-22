/*
 * XREFs of _ComboButtonProcessor::Create_::_1_::dtor$0 @ 0x1801A6423
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>((_QWORD *)(a2 + 64));
}
