/*
 * XREFs of ?IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x180471F84
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180473890 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18022E688 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapter::IsInputAppViewShowHideCallbackSafeToReportToTelemetry(
        KeyboardHosting::TabTipAdapter *this,
        int a2)
{
  RTL_SRWLOCK *v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 8);
  v4 = 11;
  return !TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
            v2,
            a2,
            (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)&v4)
      || v4 != 1;
}
