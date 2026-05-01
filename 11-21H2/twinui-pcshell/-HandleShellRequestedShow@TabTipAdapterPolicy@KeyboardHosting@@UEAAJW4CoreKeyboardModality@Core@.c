/*
 * XREFs of ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@45678@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180481E40
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18047045C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BE054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wi.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18022D868 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD v15[6]; // [rsp+40h] [rbp-18h] BYREF
  char v16; // [rsp+60h] [rbp+8h] BYREF
  char v17; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0;
  v6 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
    1u,
    a3,
    (__int64)a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  if ( v6 || *(_BYTE *)(a1 + 601) && (!*(_BYTE *)(a1 + 487) && !*(_BYTE *)(a1 + 506) || *(_BYTE *)(a1 + 496)) )
    *a4 = 1;
  *(_BYTE *)(a1 + 496) = 0;
  v10 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    v9,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 16LL) )
  {
    v16 = *(_BYTE *)a4;
    v17 = *(_BYTE *)(a1 + 601);
    v15[0] = *(_DWORD *)(a1 + 500);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v11,
      byte_1806BD27F,
      v12,
      v13,
      (__int64)v15,
      (__int64)&v17,
      (__int64)&v16);
  }
  return 0LL;
}
