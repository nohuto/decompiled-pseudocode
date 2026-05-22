/*
 * XREFs of _DockProcessor::Create_::_1_::dtor$0 @ 0x1801E6541
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockProcessor::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<DockProcessor>::~unique_ptr<DockProcessor>((_QWORD *)(a2 + 64));
}
