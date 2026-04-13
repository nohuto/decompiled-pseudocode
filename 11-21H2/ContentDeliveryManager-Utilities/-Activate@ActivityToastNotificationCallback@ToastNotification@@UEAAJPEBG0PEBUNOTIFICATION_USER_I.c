/*
 * XREFs of ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180077280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180044B20 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800635E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::Activate(
        ToastNotification::ActivityToastNotificationCallback *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const struct NOTIFICATION_USER_INPUT_DATA *a4)
{
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v6; // r8
  _QWORD v8[2]; // [rsp+20h] [rbp-21h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-11h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-1h] BYREF
  __int16 v11; // [rsp+58h] [rbp+17h]
  void **v12; // [rsp+60h] [rbp+1Fh] BYREF
  struct wil::details_abi::ThreadLocalData *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  _QWORD *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+57h]
  const unsigned __int16 *v19; // [rsp+B0h] [rbp+6Fh] BYREF

  v19 = a3;
  v8[0] = (char *)this - 48;
  v8[1] = &v19;
  v10[0] = retaddr;
  v10[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp";
  v10[2] = 0LL;
  v11 = 112;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetImpl'::`2'::impl,
    1u,
    1u,
    (__int64)a4);
  v9[0] = &wil::details::functor_wrapper_void<_lambda_141232aca07f559541c51213e97da677_ &>::`vftable';
  v9[1] = v8;
  v12 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v13 = ThreadLocalDataCache;
  v14 = 0;
  v15 = 0;
  if ( ThreadLocalDataCache )
  {
    v15 = *((_DWORD *)ThreadLocalDataCache + 4);
    v14 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v14;
  }
  v16 = v10;
  v17 = 11824828;
  wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)&v12, v6);
  if ( v13 )
    *((_DWORD *)v13 + 4) = v15;
  return 0LL;
}
