/*
 * XREFs of ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18006ABA4 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180074724 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18007ACC0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@WindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801744F0 (-v_SetDesiredPosition_HasViewDataChanged@WindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180307960 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@LegacyUwpWindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180404BC0 (-v_SetDesiredPosition_HasViewDataChanged@LegacyUwpWindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA.c)
 *     ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180619390 (-IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ImmersiveApplicationLayout::AreAppViewDataEqual(
        ImmersiveApplicationLayout *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return *(_DWORD *)this == *(_DWORD *)a2
      && *((_DWORD *)this + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)this + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)this + 3) == *((_DWORD *)a2 + 3)
      && *((_DWORD *)this + 5) == *((_DWORD *)a2 + 5)
      && *((_DWORD *)this + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)this + 6) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)this + 7) == *((_DWORD *)a2 + 7)
      && *((_DWORD *)this + 8) == *((_DWORD *)a2 + 8)
      && *((_DWORD *)this + 9) == *((_DWORD *)a2 + 9)
      && *((_DWORD *)this + 10) == *((_DWORD *)a2 + 10);
}
