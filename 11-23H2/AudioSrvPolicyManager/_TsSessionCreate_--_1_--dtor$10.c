/*
 * XREFs of _TsSessionCreate_::_1_::dtor$10 @ 0x180049A22
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TsSessionCreate_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>((DuckingDescriptorAndId **)(a2 + 64));
}
