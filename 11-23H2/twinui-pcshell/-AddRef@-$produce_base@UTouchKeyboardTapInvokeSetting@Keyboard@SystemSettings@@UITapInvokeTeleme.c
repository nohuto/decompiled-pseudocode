/*
 * XREFs of ?AddRef@?$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x180195F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rcx
  unsigned int v3; // edx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = a1 - 16;
  if ( !a1 )
    v1 = 8LL;
  v2 = *(_QWORD *)v1;
  while ( v2 >= 0 )
  {
    v3 = v2 + 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 1, v2);
    v5 = v2 == v6;
    v2 = v6;
    if ( v5 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}
