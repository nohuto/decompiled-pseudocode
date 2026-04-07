/*
 * XREFs of ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003A25C
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180016334 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::UpdateHolographicLockState(
        CAnalogCompositorManager *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  if ( *((_BYTE *)this + 72) || (v4 = *((_QWORD *)this + 8)) != 0 && CDesktopManager::IsLogonDesktop(v4, a2, a3) )
    v3 = 1;
  LOBYTE(a2) = v3;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 6)
                                                                  + 24LL)
                                                    + 216LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
           a2);
}
