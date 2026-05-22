/*
 * XREFs of ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801D0F24
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x1801B74C4 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CreateInputServiceProxy @ 0x180045240 (CreateInputServiceProxy.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801B5678 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x1801D0598 (--$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@.c)
 *     ??$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKeyTracker@@@Z @ 0x1801D0684 (--$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKe.c)
 *     ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x1801F386C (--$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdap.c)
 */

__int64 __fastcall HotkeyContextualProcessor::RuntimeClassInitialize(HotkeyContextualProcessor *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int InputServiceProxy; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyProcessor,HotKeyProcessor,>((HotKeyProcessor **)this + 5);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeycontex"
           "tualprocessor.cpp",
      (const char *)(unsigned int)v2,
      v12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualHotKeyTracker,VirtualHotKeyTracker,>((VirtualHotKeyTracker **)this + 6);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeycontex"
           "tualprocessor.cpp",
      (const char *)(unsigned int)v3,
      v12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 7);
  v14 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
  if ( !v14 )
  {
    v4 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
        (__int64)this + 8,
        "TextInputStateAdapterCreate",
        30LL,
        87);
    goto LABEL_11;
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<TextInputStateAdapter,ITextInputStateAdapter,ITextInputStateAdapterOwner * &>(
         (char *)this + 56,
         &v14);
  v4 = v5;
  if ( v5 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(v7, v6, "TextInputStateAdapterCreate", 34LL, v5);
LABEL_11:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeycontex"
           "tualprocessor.cpp",
      (const char *)v4,
      v12);
  }
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 344LL))(
         *((_QWORD *)this + 7),
         31LL,
         v8);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeycontex"
           "tualprocessor.cpp",
      (const char *)(unsigned int)v9,
      v12);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  InputServiceProxy = CreateInputServiceProxy(
                        ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
                        (__int64 *)this + 4);
  if ( InputServiceProxy < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeycontex"
           "tualprocessor.cpp",
      (const char *)(unsigned int)InputServiceProxy,
      v12);
  return 0LL;
}
