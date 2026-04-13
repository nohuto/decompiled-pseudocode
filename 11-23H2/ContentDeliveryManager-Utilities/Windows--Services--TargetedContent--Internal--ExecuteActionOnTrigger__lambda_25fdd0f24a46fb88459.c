/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x18008CA24
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18009374C (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W0PEBD@Z @ 0x18008E4BC (--$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerMa.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097CBC (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180098D08 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___(
        __int64 a1,
        __int64 a2)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rbx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rbx
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rbx
  const char *v19; // r9
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-98h]
  HSTRING v22; // [rsp+40h] [rbp-78h] BYREF
  HSTRING v23; // [rsp+48h] [rbp-70h] BYREF
  HSTRING v24; // [rsp+50h] [rbp-68h] BYREF
  HSTRING string; // [rsp+58h] [rbp-60h]
  HSTRING v26; // [rsp+60h] [rbp-58h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-50h] BYREF
  PCWSTR v28; // [rsp+70h] [rbp-48h] BYREF
  PCWSTR v29; // [rsp+78h] [rbp-40h] BYREF
  PCWSTR v30; // [rsp+80h] [rbp-38h] BYREF
  __int64 v31; // [rsp+88h] [rbp-30h] BYREF
  PCWSTR v32; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v34; // [rsp+C0h] [rbp+8h] BYREF
  HSTRING v35; // [rsp+D0h] [rbp+18h] BYREF
  HSTRING v36; // [rsp+D8h] [rbp+20h] BYREF

  string = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5,
        v21);
    v24 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
    WindowsDeleteString(0LL);
    v24 = 0LL;
    v7 = v6(a1, &v24);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v7,
        v21);
    v23 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
    WindowsDeleteString(0LL);
    v23 = 0LL;
    v9 = v8(a1, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9,
        v21);
    v22 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
    WindowsDeleteString(0LL);
    v22 = 0LL;
    v11 = v10(a1, &v22);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v11,
        v21);
    v36 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
    WindowsDeleteString(0LL);
    v36 = 0LL;
    v13 = v12(a1, &v36);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13,
        v21);
    v35 = 0LL;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v15 = v14(a1, &v35);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v15,
        v21);
    v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v34);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v16,
        v21);
    v17 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v34);
    Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v26, a1);
    WindowsGetStringRawBuffer(string, 0LL);
    WindowsGetStringRawBuffer(v35, 0LL);
    StringRawBuffer = WindowsGetStringRawBuffer(v36, 0LL);
    WindowsGetStringRawBuffer(v22, 0LL);
    v29 = WindowsGetStringRawBuffer(v23, 0LL);
    v30 = WindowsGetStringRawBuffer(v24, 0LL);
    v32 = WindowsGetStringRawBuffer(v26, 0LL);
    v31 = v17;
    v18 = **(_QWORD **)(a2 + 16) + 8LL;
    v28 = WindowsGetStringRawBuffer(**(HSTRING **)(a2 + 8), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationPreconditionFailed<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const *,wchar_t const * &>(
      (unsigned int)&v32,
      (unsigned int)&v31,
      (unsigned int)&v30,
      (unsigned int)&v29,
      (__int64)&v28,
      (__int64)&StringRawBuffer,
      v18);
    WindowsDeleteString(v26);
    v26 = 0LL;
    WindowsDeleteString(v35);
    v35 = 0LL;
    WindowsDeleteString(v36);
    v36 = 0LL;
    WindowsDeleteString(v22);
    v22 = 0LL;
    WindowsDeleteString(v23);
    v23 = 0LL;
    WindowsDeleteString(v24);
    v24 = 0LL;
    WindowsDeleteString(string);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v19);
  }
  return result;
}
