/*
 * XREFs of _DWMInputRouter::CreateTargetFromHitTestResult_::_1_::dtor$1 @ 0x1801B8B04
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x180017E3C (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DWMInputRouter::CreateTargetFromHitTestResult_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(*(__int64 **)(a2 + 120));
  }
  return result;
}
