/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$47 @ 0x1800562C3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x18004C404 (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DWMInputRouter::Initialize_::_1_::dtor_47(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 632) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 632) &= ~1u;
    return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)(a2 + 344));
  }
  return result;
}
