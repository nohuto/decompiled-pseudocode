/*
 * XREFs of __lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::dtor$10 @ 0x1800D5599
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002C6A8 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 144));
  }
}
