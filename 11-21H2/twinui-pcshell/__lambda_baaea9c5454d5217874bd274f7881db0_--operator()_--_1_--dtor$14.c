/*
 * XREFs of __lambda_baaea9c5454d5217874bd274f7881db0_::operator()_::_1_::dtor$14 @ 0x1804309B6
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _lambda_baaea9c5454d5217874bd274f7881db0_::operator()_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 80));
  }
  return result;
}
