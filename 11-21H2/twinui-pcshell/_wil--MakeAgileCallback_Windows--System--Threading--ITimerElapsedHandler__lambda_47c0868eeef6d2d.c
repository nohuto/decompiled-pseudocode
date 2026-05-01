/*
 * XREFs of _wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4____::_1_::dtor$0 @ 0x180566A93
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18022A3F4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
