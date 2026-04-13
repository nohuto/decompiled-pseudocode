/*
 * XREFs of ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A46FC
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x1800A01AC (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800ACB5C (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AD024 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x1800ADB24 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x1800A45C8 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerKey(HSTRING *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rbx
  int v11; // eax
  int StringRawBuffer; // edi
  PCWSTR v13; // rbx
  PCWSTR v14; // rax
  int v15; // eax
  int v16; // edi
  PCWSTR v17; // rbx
  PCWSTR v18; // rax
  int v19; // eax
  void *v20; // rbx
  HRESULT v21; // eax
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+20h] [rbp-48h]
  HSTRING v25; // [rsp+38h] [rbp-30h] BYREF
  const WCHAR *v26; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  HSTRING v29; // [rsp+A8h] [rbp+40h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+48h] BYREF
  HSTRING v31; // [rsp+B8h] [rbp+50h] BYREF

  v25 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL);
  WindowsDeleteString(0LL);
  v25 = 0LL;
  v5 = v4(a2, &v25);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      624LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5,
      v23);
  v31 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL);
  WindowsDeleteString(0LL);
  v31 = 0LL;
  v7 = v6(a2, &v31);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      626LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7,
      v23);
  string = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(a2, &string);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      628LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v9,
      v23);
  v29 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  v29 = 0LL;
  v11 = v10(a2, &v29);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      630LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v11,
      v23);
  memset(pv, 0, 24);
  if ( WindowsIsStringEmpty(string) )
  {
    StringRawBuffer = (unsigned int)WindowsGetStringRawBuffer(v29, 0LL);
    v13 = WindowsGetStringRawBuffer(v31, 0LL);
    v14 = WindowsGetStringRawBuffer(v25, 0LL);
    v24 = StringRawBuffer;
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s_%s_%s",
            v14,
            v13);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        639LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v15,
        StringRawBuffer);
  }
  else
  {
    WindowsGetStringRawBuffer(string, 0LL);
    v16 = (unsigned int)WindowsGetStringRawBuffer(v29, 0LL);
    v17 = WindowsGetStringRawBuffer(v31, 0LL);
    v18 = WindowsGetStringRawBuffer(v25, 0LL);
    v24 = v16;
    v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s_%s_%s_%s",
            v18,
            v17);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        647LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v19,
        v16);
  }
  *a1 = 0LL;
  v20 = pv[0];
  v26 = (const WCHAR *)pv[0];
  v21 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(a1, &v26);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      651LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v21,
      v24);
  if ( v20 )
    CoTaskMemFree(v20);
  WindowsDeleteString(v29);
  v29 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v31);
  v31 = 0LL;
  WindowsDeleteString(v25);
  return a1;
}
