/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9fb2fe8b809fc5___ @ 0x18008D7A0
 * Callers:
 *     wil::details::lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___::_lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___ @ 0x18008FDAC (wil--details--lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___--_lambda_call__lambda_440a.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18008E3B8 (--$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegi.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097CBC (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180098D08 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9fb2fe8b809fc5___(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
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
  int v19; // [rsp+20h] [rbp-98h]
  HSTRING v20; // [rsp+40h] [rbp-78h] BYREF
  HSTRING v21; // [rsp+48h] [rbp-70h] BYREF
  HSTRING v22; // [rsp+50h] [rbp-68h] BYREF
  HSTRING string; // [rsp+58h] [rbp-60h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-58h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-50h] BYREF
  PCWSTR v26; // [rsp+70h] [rbp-48h] BYREF
  PCWSTR v27; // [rsp+78h] [rbp-40h] BYREF
  PCWSTR v28; // [rsp+80h] [rbp-38h] BYREF
  __int64 v29; // [rsp+88h] [rbp-30h] BYREF
  PCWSTR v30; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v32; // [rsp+C0h] [rbp+8h] BYREF
  HSTRING v33; // [rsp+D0h] [rbp+18h] BYREF
  HSTRING v34; // [rsp+D8h] [rbp+20h] BYREF

  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = v4(a1, &string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5,
      v19);
  v22 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
  WindowsDeleteString(0LL);
  v22 = 0LL;
  v7 = v6(a1, &v22);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7,
      v19);
  v21 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
  WindowsDeleteString(0LL);
  v21 = 0LL;
  v9 = v8(a1, &v21);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v9,
      v19);
  v20 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
  WindowsDeleteString(0LL);
  v20 = 0LL;
  v11 = v10(a1, &v20);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v11,
      v19);
  v34 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v13 = v12(a1, &v34);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v13,
      v19);
  v33 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
  WindowsDeleteString(0LL);
  v33 = 0LL;
  v15 = v14(a1, &v33);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v15,
      v19);
  v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v32);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v16,
      v19);
  v17 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v32);
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v24, a1);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  WindowsGetStringRawBuffer(v33, 0LL);
  WindowsGetStringRawBuffer(v34, 0LL);
  v26 = WindowsGetStringRawBuffer(v20, 0LL);
  v27 = WindowsGetStringRawBuffer(v21, 0LL);
  v28 = WindowsGetStringRawBuffer(v22, 0LL);
  v30 = WindowsGetStringRawBuffer(v24, 0LL);
  v29 = v17;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationFailed<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
    (unsigned int)&v30,
    (unsigned int)&v29,
    (unsigned int)&v28,
    (unsigned int)&v27,
    (__int64)&v26,
    (__int64)&StringRawBuffer,
    **(_QWORD **)(a2 + 8) + 8LL);
  WindowsDeleteString(v24);
  v24 = 0LL;
  WindowsDeleteString(v33);
  v33 = 0LL;
  WindowsDeleteString(v34);
  v34 = 0LL;
  WindowsDeleteString(v20);
  v20 = 0LL;
  WindowsDeleteString(v21);
  v21 = 0LL;
  WindowsDeleteString(v22);
  v22 = 0LL;
  WindowsDeleteString(string);
  return 0LL;
}
