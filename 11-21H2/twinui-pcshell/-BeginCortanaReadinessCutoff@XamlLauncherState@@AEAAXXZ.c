/*
 * XREFs of ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180450174
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180044D40 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 * Callees:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180321274 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncherState::BeginCortanaReadinessCutoff(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  unsigned int v5; // esi
  struct _TP_TIMER *v6; // rcx
  struct _TP_TIMER *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = pv + 129;
  if ( !pv[129] && !XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)pv) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_f12d63f3c6394727fafa6ac2bd9a7185_::_lambda_invoker_cdecl_,
                        pv,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x642,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v4),
          *v1) )
    {
      v5 = *((_DWORD *)pv + 18);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
        1u,
        3u,
        (__int64)v4);
      v6 = pv[120];
      if ( v6 )
      {
        if ( tip::details::test_common_data<1>::is_running((__int64)v6 + 8) )
          v5 = *((_DWORD *)pv + 19);
      }
      v7 = *v1;
      pftDueTime = (struct _FILETIME)(-10000LL * v5);
      SetThreadpoolTimer(v7, &pftDueTime, 0, 0x3E8u);
    }
  }
}
