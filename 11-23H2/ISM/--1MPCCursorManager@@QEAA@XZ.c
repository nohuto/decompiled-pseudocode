/*
 * XREFs of ??1MPCCursorManager@@QEAA@XZ @ 0x1800BCDAC
 * Callers:
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x1800B424C (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800B4D20 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800B86AC (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800BD464 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

void __fastcall MPCCursorManager::~MPCCursorManager(MPCCursorManager *this)
{
  const char *v2; // r9
  HMODULE v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 66) )
  {
    if ( !(unsigned int)NtMITDisableMouseIntercept() )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x41,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v2);
    *((_BYTE *)this + 66) = 0;
    MPCCursorManager::UpdateCursorVisibility(this, 1, 1, 1);
  }
  v3 = (HMODULE)*((_QWORD *)this + 5);
  if ( v3 )
    FreeLibrary(v3);
}
