/*
 * XREFs of _TsSessionCreate_::_1_::dtor$0 @ 0x180045FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TsSessionCreate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<TSSession>::~unique_ptr<TSSession>((TSSession **)(a2 + 72));
}
