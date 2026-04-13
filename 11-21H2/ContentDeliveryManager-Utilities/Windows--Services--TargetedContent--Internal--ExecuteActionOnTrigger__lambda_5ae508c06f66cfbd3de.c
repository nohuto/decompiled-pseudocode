/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180098C80
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x1800A01AC (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x180099B78 (--$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerR.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A5250 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x1800A66A8 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___(
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
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-98h]
  HSTRING v21; // [rsp+40h] [rbp-78h] BYREF
  HSTRING v22; // [rsp+48h] [rbp-70h] BYREF
  HSTRING v23; // [rsp+50h] [rbp-68h] BYREF
  HSTRING string; // [rsp+58h] [rbp-60h]
  HSTRING v25; // [rsp+60h] [rbp-58h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-50h] BYREF
  PCWSTR v27; // [rsp+70h] [rbp-48h] BYREF
  PCWSTR v28; // [rsp+78h] [rbp-40h] BYREF
  PCWSTR v29; // [rsp+80h] [rbp-38h] BYREF
  __int64 v30; // [rsp+88h] [rbp-30h] BYREF
  PCWSTR v31; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v33; // [rsp+C0h] [rbp+8h] BYREF
  HSTRING v34; // [rsp+D0h] [rbp+18h] BYREF
  HSTRING v35; // [rsp+D8h] [rbp+20h] BYREF

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
        71LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5,
        v20);
    v23 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
    WindowsDeleteString(0LL);
    v23 = 0LL;
    v7 = v6(a1, &v23);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        73LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v7,
        v20);
    v22 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
    WindowsDeleteString(0LL);
    v22 = 0LL;
    v9 = v8(a1, &v22);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        75LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9,
        v20);
    v21 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
    WindowsDeleteString(0LL);
    v21 = 0LL;
    v11 = v10(a1, &v21);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        77LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v11,
        v20);
    v35 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v13 = v12(a1, &v35);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        79LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13,
        v20);
    v34 = 0LL;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
    WindowsDeleteString(0LL);
    v34 = 0LL;
    v15 = v14(a1, &v34);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        81LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v15,
        v20);
    v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v33);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        83LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v16,
        v20);
    v17 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v33);
    Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v25, a1);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    WindowsGetStringRawBuffer(v34, 0LL);
    WindowsGetStringRawBuffer(v35, 0LL);
    v27 = WindowsGetStringRawBuffer(v21, 0LL);
    v28 = WindowsGetStringRawBuffer(v22, 0LL);
    v29 = WindowsGetStringRawBuffer(v23, 0LL);
    v31 = WindowsGetStringRawBuffer(v25, 0LL);
    v30 = v17;
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
      (unsigned int)&v31,
      (unsigned int)&v30,
      (unsigned int)&v29,
      (unsigned int)&v28,
      (__int64)&v27,
      (__int64)&StringRawBuffer,
      **(_QWORD **)(a2 + 8) + 8LL);
    WindowsDeleteString(v25);
    v25 = 0LL;
    WindowsDeleteString(v34);
    v34 = 0LL;
    WindowsDeleteString(v35);
    v35 = 0LL;
    WindowsDeleteString(v21);
    v21 = 0LL;
    WindowsDeleteString(v22);
    v22 = 0LL;
    WindowsDeleteString(v23);
    v23 = 0LL;
    WindowsDeleteString(string);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v18);
  }
  return result;
}
