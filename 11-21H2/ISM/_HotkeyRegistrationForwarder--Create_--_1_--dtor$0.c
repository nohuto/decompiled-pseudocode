/*
 * XREFs of _HotkeyRegistrationForwarder::Create_::_1_::dtor$0 @ 0x180055C92
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x18004C404 (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(*(__int64 **)(a2 + 64));
  }
  return result;
}
