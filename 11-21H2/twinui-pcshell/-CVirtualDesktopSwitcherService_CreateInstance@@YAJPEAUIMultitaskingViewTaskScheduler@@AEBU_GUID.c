/*
 * XREFs of ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D33D8
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180113E9C (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D347C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithS.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSwitcherService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1800D4900 (--$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicViewTransitionNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicView.c)
 */

__int64 __fastcall CVirtualDesktopSwitcherService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = a1;
  *a3 = 0LL;
  v12 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSwitcherService,CVirtualDesktopSwitcherService,IMultitaskingViewTaskScheduler * &>(
         &v12,
         &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = (unsigned int)v4;
    v9 = 104LL;
  }
  else
  {
    if ( !v12 )
    {
      *a3 = 0LL;
LABEL_6:
      v5 = 0;
      goto LABEL_7;
    }
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>>(
           v12,
           &GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E7,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v6);
    if ( v5 >= 0 )
      goto LABEL_6;
    v8 = (unsigned int)v5;
    v9 = 105LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
    (const char *)v8);
LABEL_7:
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHolographicViewTransitionNotification,Microsoft::WRL::FtmBase>::Release(v12);
  return (unsigned int)v5;
}
