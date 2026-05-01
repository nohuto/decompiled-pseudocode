/*
 * XREFs of ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022CD4
 * Callers:
 *     ?v_SetDesiredPosition_HasViewDataChanged@LegacyUwpWindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180020410 (-v_SetDesiredPosition_HasViewDataChanged@LegacyUwpWindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800225F0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180024A4C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C3EB0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@WindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1804DC2C0 (-v_SetDesiredPosition_HasViewDataChanged@WindowWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180797D30 (-IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z.c)
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
