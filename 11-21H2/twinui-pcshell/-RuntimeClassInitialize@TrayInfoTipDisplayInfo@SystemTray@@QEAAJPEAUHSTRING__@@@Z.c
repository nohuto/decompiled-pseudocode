/*
 * XREFs of ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1804930C8
 * Callers:
 *     ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x180491B7C (--$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microso.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18030BB50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18030BB50.c)
 *     ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x1804922C4 (--$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsof.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1804926F8 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x1804928E4 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x180492AC8 (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x180492D50 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 *     _anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem @ 0x180493268 (_anonymous_namespace_--TryGetTaskbarCplResourceForTrayItem.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  int v4; // eax
  volatile int *v5; // rdx
  unsigned int v6; // ebx
  __int64 result; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  char TaskbarCplResourceForTrayItem; // al
  const wchar_t *v11; // r8
  __int64 *BitmapStreamFromHICON; // rax
  HSTRING v13; // rdx
  HSTRING v14; // rcx
  volatile int *v15; // rdx
  const char *v16; // r9
  HSTRING v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 uID; // [rsp+60h] [rbp+18h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v19 = a2;
  v21 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayNotifyCallback,SystemTray::TrayNotifyCallback,HSTRING__ * &>(
         &v21,
         &v19);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v9 = v21;
    LODWORD(uID) = 0;
    TaskbarCplResourceForTrayItem = anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem(&uID, v21 + 64);
    try
    {
      if ( TaskbarCplResourceForTrayItem )
        anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(v17, uID);
      else
        anonymous_namespace_::GetFriendlyNameForExe((wchar_t *)v17, v11);
      WindowsDeleteString(this[9]);
      this[9] = v17[0];
      v17[0] = 0LL;
      WindowsDeleteString(0LL);
      BitmapStreamFromHICON = anonymous_namespace_::GetBitmapStreamFromHICON(&uID, *(_QWORD *)(v9 + 56));
      v13 = (HSTRING)*BitmapStreamFromHICON;
      *BitmapStreamFromHICON = 0LL;
      v14 = this[10];
      this[10] = v13;
      if ( v14 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16LL))(v14);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&uID);
      SystemTray::TrayInfoTipDisplayInfo::InitProperties(
        (SystemTray::TrayInfoTipDisplayInfo *)this,
        a2,
        *(_BYTE *)(v9 + 80));
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        v9,
        v15);
      result = 0LL;
    }
    catch ( ... )
    {
      LODWORD(uID) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x8F,
                       (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
                       v16);
      return (unsigned int)uID;
    }
  }
  else if ( v4 == -2147221164 )
  {
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        v21,
        v5);
    return 2147746132LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        v21,
        v8);
    return v6;
  }
  return result;
}
