/*
 * XREFs of ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x18009E5A8
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E630 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@Z @ 0x18009A3C8 (--$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::SetStringValue(
        Windows::Services::TargetedContent::Internal *this,
        const WCHAR *a2,
        wchar_t *a3,
        HSTRING a4)
{
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp+20h] BYREF

  if ( !WindowsIsStringEmpty((HSTRING)a3) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    v7 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_e85697e1379bd30e043dcf6a8e09ee83_>(
           (__int64)this,
           a2,
           &StringRawBuffer);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v7,
        v8);
  }
}
