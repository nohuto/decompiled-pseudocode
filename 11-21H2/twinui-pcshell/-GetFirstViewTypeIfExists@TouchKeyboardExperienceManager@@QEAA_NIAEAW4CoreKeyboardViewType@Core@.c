/*
 * XREFs of ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18022E688
 * Callers:
 *     ?IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x180471F84 (-IsInputAppViewShowHideCallbackSafeToReportToTelemetry@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472230 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180473890 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180473CE0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180460EE0 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

char __fastcall TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3)
{
  RTL_SRWLOCK *v3; // rdi
  KBViewInfo **Ptr; // r10
  KBViewInfo **i; // r9
  int v9; // ecx
  char v10; // bl

  v3 = this + 53;
  *(_DWORD *)a3 = 11;
  AcquireSRWLockShared(this + 53);
  Ptr = (KBViewInfo **)this[55].Ptr;
  for ( i = (KBViewInfo **)this[54].Ptr; i != Ptr && (!KBViewInfo::IsValid(*i) || *((_DWORD *)*i + 26) != a2); i += 2 )
    ;
  if ( i == this[55].Ptr || !*((_QWORD *)*i + 7) || (v9 = *(_DWORD *)(**((_QWORD **)*i + 6) + 16LL), v9 == -1) )
  {
    v10 = 0;
  }
  else
  {
    *(_DWORD *)a3 = v9;
    v10 = 1;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v10;
}
