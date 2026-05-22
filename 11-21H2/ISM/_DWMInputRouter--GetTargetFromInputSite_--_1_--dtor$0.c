/*
 * XREFs of _DWMInputRouter::GetTargetFromInputSite_::_1_::dtor$0 @ 0x1800575C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x18004C404 (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DWMInputRouter::GetTargetFromInputSite_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(*(__int64 **)(a2 + 144));
  }
  return result;
}
