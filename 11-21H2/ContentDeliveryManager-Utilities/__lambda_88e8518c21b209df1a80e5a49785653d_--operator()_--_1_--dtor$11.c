/*
 * XREFs of __lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::dtor$11 @ 0x1800EE59B
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180029664 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 168));
  }
}
