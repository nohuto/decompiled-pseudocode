/*
 * XREFs of ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18002555C
 * Callers:
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180025350 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803695E0 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036B5F0 (-OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180378960 (-OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x18038512C (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?OnViewHidden@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385BB0 (-OnViewHidden@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395840 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803A9758 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SingleViewLightDismissHelper::UnregisterWithLightDismiss(SingleViewLightDismissHelper *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // rcx
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( *(_QWORD *)this )
  {
    v2 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = 0;
    if ( v2 )
    {
      v3 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                          this,
                          _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *v3 > 5u )
      {
        v8 = 0;
        v6 = (int *)&v4;
        v4 = v2;
        v7 = 4;
        tlgWriteTransfer_EventWriteTransfer((int)v3, (int)&dword_1806D046E, 0, 0, 3u, &v5);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v2);
    }
  }
}
