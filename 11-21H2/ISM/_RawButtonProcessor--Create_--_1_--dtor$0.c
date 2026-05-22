/*
 * XREFs of _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x1801B4642
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RawButtonProcessor::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<RawButtonProcessor>::~unique_ptr<RawButtonProcessor>((_QWORD *)(a2 + 64));
}
