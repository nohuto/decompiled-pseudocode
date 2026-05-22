/*
 * XREFs of ??1MPCCursorManager@@QEAA@XZ @ 0x1800A4F5C
 * Callers:
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x18009CCB0 (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18009DB00 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800A0FF4 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007EE54 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800A5560 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

void __fastcall MPCCursorManager::~MPCCursorManager(MPCCursorManager *this)
{
  const char *v2; // r9
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
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>((HMODULE *)this + 5);
}
