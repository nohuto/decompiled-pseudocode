/*
 * XREFs of _wil::MakeOrThrow_ResourceGroupInstance_unsigned___int64_&_ATL::CComPtr_IKsControl__&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x1800FE34C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeOrThrow_ResourceGroupInstance_unsigned___int64___ATL::CComPtr_IKsControl____unsigned_short_____257__unsigned_long____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
