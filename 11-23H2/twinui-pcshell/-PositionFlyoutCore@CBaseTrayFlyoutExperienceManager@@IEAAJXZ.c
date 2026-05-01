/*
 * XREFs of ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x180474748
 * Callers:
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1804725D8 (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 *     ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473F90 (-OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@.c)
 *     ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z @ 0x1804745A0 (-PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z @ 0x180471954 (-CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::PositionFlyoutCore(CBaseTrayFlyoutExperienceManager *this)
{
  HMONITOR v2; // rax
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((int *)this + 110) <= 0 || *((int *)this + 111) <= 0 )
    return 0LL;
  v8 = 0LL;
  v2 = MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
  v3 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, HMONITOR, struct tagRECT *, char *))(*(_QWORD *)this + 96LL))(
         this,
         v2,
         &v8,
         (char *)this + 368);
  if ( v3 < 0 )
  {
    v4 = 705LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = CBaseTrayFlyoutExperienceManager::CalculateFlyoutPosition(
         (SIZE *)this,
         &v8,
         (struct tagRECT *)((char *)this + 424));
  if ( v3 < 0 )
  {
    v4 = 708LL;
    goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 12) )
    return 0LL;
  v6 = CSingleViewShellExperience::SetPosition(
         (CBaseTrayFlyoutExperienceManager *)((char *)this + 72),
         (const struct tagRECT *)((char *)this + 424));
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C9,
    (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
