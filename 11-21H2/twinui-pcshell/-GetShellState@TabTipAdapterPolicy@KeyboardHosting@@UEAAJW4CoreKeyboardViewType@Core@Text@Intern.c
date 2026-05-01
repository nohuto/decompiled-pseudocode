/*
 * XREFs of ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18047045C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1804756F0 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnKeyboardButtonRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180475C10 (-OnKeyboardButtonRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180476080 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180477DC8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x18048246C (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetShellState(
        KeyboardHosting::TabTipAdapterPolicy *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  bool IsHardwareKeyboardAvailable; // al
  bool *v7; // r9
  KeyboardHosting::TabTipAdapterPolicy *v8; // rcx
  int PositionAndSizeOptions; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = *((_BYTE *)a1 + 504);
  IsHardwareKeyboardAvailable = KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(a1);
  *v7 = IsHardwareKeyboardAvailable;
  *a5 = *((_DWORD *)v8 + 129);
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v8, a6);
  v10 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30F,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)PositionAndSizeOptions);
  return v10;
}
