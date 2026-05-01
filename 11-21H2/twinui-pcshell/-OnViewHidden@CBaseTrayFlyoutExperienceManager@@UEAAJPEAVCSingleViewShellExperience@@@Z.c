/*
 * XREFs of ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395840
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18002555C (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180025640 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180394A40 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180397220 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1805F2DD0 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewHidden(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CBaseTrayFlyoutExperienceManager *v2; // rdi
  int updated; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  CBaseTrayFlyoutExperienceManager *v11; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-40h] BYREF
  CBaseTrayFlyoutExperienceManager **v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (CBaseTrayFlyoutExperienceManager *)((char *)this - 48);
  updated = CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)updated);
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(v2, 0);
  v7 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   v6,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v15 = 0;
    v13 = &v11;
    v11 = v2;
    v14 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_1806ACA5E, 0LL, 0LL, 3u, &v12);
  }
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CBaseTrayFlyoutExperienceManager *)((char *)this + 240));
  v8 = CExperienceManagerAnimationHelper::End((CBaseTrayFlyoutExperienceManager *)((char *)this + 288));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v8);
  CSingleViewShellExperience::ShowBorder((__int64)this + 24, 0, 0LL, 0LL, 0);
  v9 = *((_QWORD *)this + 42);
  if ( v9 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v9 + 80LL))(v9, a2);
  return 0LL;
}
