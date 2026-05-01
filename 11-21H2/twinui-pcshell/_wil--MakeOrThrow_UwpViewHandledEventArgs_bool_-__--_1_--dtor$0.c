/*
 * XREFs of _wil::MakeOrThrow_UwpViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x180408291
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180302FFC (--1-$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_UwpViewHandledEventArgs_bool____::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<UwpViewHandledEventArgs>::~ComPtr<UwpViewHandledEventArgs>(*(__int64 **)(a2 + 64));
  }
  return result;
}
