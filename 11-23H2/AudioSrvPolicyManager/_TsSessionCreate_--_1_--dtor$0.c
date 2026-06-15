/*
 * XREFs of _TsSessionCreate_::_1_::dtor$0 @ 0x1800499FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionCreate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<TSSession>::~unique_ptr<TSSession>((_QWORD *)(a2 + 56));
}
