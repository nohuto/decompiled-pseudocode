/*
 * XREFs of ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180474030
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x18012D540 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802EBC48 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180749428 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewShown(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  char *v2; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (char *)this - 48;
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(
    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
    1u);
  v6 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   v5,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_180854D89, 0LL, 0LL, 2u, &v11);
  v7 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (char *)this + 240,
         *((unsigned int *)this + 58),
         ((unsigned __int64)this - 40) & -(__int64)(v2 != 0LL),
         *((_QWORD *)a2 + 3));
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC4,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v7);
  v8 = *((_QWORD *)this + 42);
  if ( v8 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v8 + 56LL))(v8, a2);
  v9 = CExperienceManagerAnimationHelper::End((CBaseTrayFlyoutExperienceManager *)((char *)this + 256));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC9,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
