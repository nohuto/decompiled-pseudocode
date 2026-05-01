/*
 * XREFs of ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180137FDC
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18010792C (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSwitcherService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180103754 (--$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180138120 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180138120.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicViewTransitionNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801408B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicView.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopSwitcherService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        CVirtualDesktopSwitcherService **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  CVirtualDesktopSwitcherService *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v12; // [rsp+30h] [rbp+8h] BYREF
  CVirtualDesktopSwitcherService *v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = a1;
  *a3 = 0LL;
  v13 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSwitcherService,CVirtualDesktopSwitcherService,IMultitaskingViewTaskScheduler * &>(
         &v13,
         (__int64 *)&v12);
  CanCastTo = v4;
  v6 = v13;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v10 = 112LL;
  }
  else
  {
    *a3 = 0LL;
    if ( !v6 )
      goto LABEL_7;
    if ( InlineIsEqualGUID(&GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = v6;
      (*(void (__fastcall **)(CVirtualDesktopSwitcherService *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>::CanCastTo(
                    v6,
                    v7,
                    a3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(CVirtualDesktopSwitcherService *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
    if ( CanCastTo >= 0 )
    {
LABEL_7:
      CanCastTo = 0;
      goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x610,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)CanCastTo);
    v9 = (unsigned int)CanCastTo;
    v10 = 113LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
    (const char *)v9);
LABEL_8:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHolographicViewTransitionNotification,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)CanCastTo;
}
