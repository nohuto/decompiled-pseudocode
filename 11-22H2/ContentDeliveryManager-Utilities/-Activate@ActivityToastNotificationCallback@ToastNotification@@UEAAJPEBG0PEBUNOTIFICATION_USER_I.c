/*
 * XREFs of ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18006EE20
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002AFCC (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003F750 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_N.c)
 *     ??0_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEAA@QEAVActivityToastNotificationCallback@ToastNotification@@AEAPEBG@Z @ 0x18006E080 (--0_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEAA@QEAVActivityToastNotificationCallback@ToastNo.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::Activate(
        ToastNotification::ActivityToastNotificationCallback *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        const struct NOTIFICATION_USER_INPUT_DATA *a4)
{
  _lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_ *v4; // rbx
  __int64 v5; // r9
  struct wil::details::IFunctorHost *v6; // r8
  _QWORD v8[2]; // [rsp+20h] [rbp-21h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-11h] BYREF
  struct DiagnosticsInfo v10; // [rsp+40h] [rbp-1h] BYREF
  const char *v11; // [rsp+48h] [rbp+7h]
  __int64 v12; // [rsp+50h] [rbp+Fh]
  __int16 v13; // [rsp+58h] [rbp+17h]
  _BYTE v14[8]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+68h] [rbp+27h]
  int v16; // [rsp+74h] [rbp+33h]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+57h]
  unsigned __int16 *v18; // [rsp+B0h] [rbp+6Fh] BYREF

  v18 = a3;
  v10 = retaddr;
  v11 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp";
  v12 = 0LL;
  v13 = 112;
  v4 = _lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_::_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_(
         (_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_ *)v9,
         (ToastNotification::ActivityToastNotificationCallback *)((char *)this - 48),
         (const unsigned __int16 **)&v18);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetImpl'::`2'::impl,
    1u,
    1u,
    v5);
  v8[0] = &wil::details::functor_wrapper_void<_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_ &>::`vftable';
  v8[1] = v4;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v14, 11824828, &v10);
  wil::details::RunFunctor((wil::details *)v8, (struct wil::details::IFunctor *)v14, v6);
  if ( v15 )
    *(_DWORD *)(v15 + 16) = v16;
  return 0LL;
}
