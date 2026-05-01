/*
 * XREFs of _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[12]__::_1_::dtor$0 @ 0x1803DCDAE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ @ 0x1803DED34 (--1-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_____12___::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::~ComPtr<ViewEventArgsForPropertyChanged>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
