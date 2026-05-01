/*
 * XREFs of ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046ECA4
 * Callers:
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472230 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1804731C0 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1804763F0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?SetPrimaryViewId@TabTipAdapter@KeyboardHosting@@QEAAXI@Z @ 0x180479BC8 (-SetPrimaryViewId@TabTipAdapter@KeyboardHosting@@QEAAXI@Z.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 */

__int64 __fastcall tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  *(_QWORD *)(a1 + 16) = &tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::c_details;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = a1 + 8;
  *(_QWORD *)v4 = a1;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 80) = 0LL;
  *(_WORD *)(v4 + 98) = -1;
  *(_BYTE *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 7LL;
  *(_WORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = &tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::`vftable';
  *(_QWORD *)(a1 + 144) = a1 + 32;
  tip::details::test_common_data<1>::open_without_lock(v4, a2, a3);
  return a1;
}
