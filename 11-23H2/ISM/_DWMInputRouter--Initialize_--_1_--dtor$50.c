/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$50 @ 0x18006CDA1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x180017E3C (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DWMInputRouter::Initialize_::_1_::dtor_50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 664) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 664) &= ~1u;
    return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)(a2 + 64));
  }
  return result;
}
