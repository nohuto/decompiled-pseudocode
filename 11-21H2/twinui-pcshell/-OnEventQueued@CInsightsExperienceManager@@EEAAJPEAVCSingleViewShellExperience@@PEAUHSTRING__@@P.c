/*
 * XREFs of ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180385880
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x180040298 (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x1800944A8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x180385084 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x18038512C (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x180385190 (-EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180385428 (-HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SmartInsights@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180385ED0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SmartInsights@@@details@wil@@QEAAX_NW4Rep.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnEventQueued(
        HWND *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  _DWORD *v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rax
  int v27; // [rsp+20h] [rbp-58h]
  HSTRING v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 StringRawBuffer; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v30[32]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v28 = a3;
  v8 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u )
  {
    StringRawBuffer = (__int64)WindowsGetStringRawBuffer(a3, 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)v8,
      (int)&dword_1806AA345,
      0,
      v10,
      (const WCHAR **)&StringRawBuffer);
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)&off_1806695A0, v9);
  if ( Microsoft::WRL::Wrappers::operator==(&v28, v11) )
  {
    v13 = CInsightsExperienceManager::DestroyExperience(this - 7);
    if ( v13 < 0 )
    {
      v14 = 329LL;
LABEL_9:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    }
  }
  else
  {
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v30,
            (const WCHAR **)&off_1806695B0,
            v12);
    if ( Microsoft::WRL::Wrappers::operator==(&v28, v15) )
    {
      v13 = CInsightsExperienceManager::HandleNotifyWindowName((CInsightsExperienceManager *)(this - 7), a4);
      if ( v13 < 0 )
      {
        v14 = 333LL;
        goto LABEL_9;
      }
    }
    else
    {
      v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)v30,
              (const WCHAR **)&off_1806695C8,
              v16);
      if ( Microsoft::WRL::Wrappers::operator==(&v28, v17) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SmartInsights>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::GetImpl'::`2'::impl,
          0LL);
        CInsightsExperienceManager::CloseExperienceIfRunning(
          (CInsightsExperienceManager *)(this - 7),
          v19,
          v20,
          v21,
          v27);
      }
      else
      {
        v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)v30,
                (const WCHAR **)&off_1806695C0,
                v18);
        if ( Microsoft::WRL::Wrappers::operator==(&v28, v22) )
        {
          CInsightsExperienceManager::DisableLightDismissRequested((CInsightsExperienceManager *)(this - 7), v23);
        }
        else
        {
          v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v30,
                  (const WCHAR **)&off_1806695B8,
                  v24);
          if ( Microsoft::WRL::Wrappers::operator==(&v28, v25) )
            CInsightsExperienceManager::EnableLightDismissRequested(this - 7, a2);
        }
      }
    }
  }
  return 0LL;
}
