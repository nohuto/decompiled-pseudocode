/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800EA934
 * Callers:
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6E94 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800EB7F8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800EB3EC (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___(
        __int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v19; // rax
  int v20; // eax
  __int64 v21; // rdi
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+28h] [rbp-99h]
  __int64 v24; // [rsp+38h] [rbp-89h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-81h] BYREF
  HSTRING v26; // [rsp+48h] [rbp-79h] BYREF
  __int64 *v27; // [rsp+50h] [rbp-71h] BYREF
  __int64 v28; // [rsp+58h] [rbp-69h] BYREF
  __int64 v29; // [rsp+60h] [rbp-61h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v31; // [rsp+70h] [rbp-51h]
  PCWSTR v32; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-41h] BYREF
  HSTRING string; // [rsp+98h] [rbp-29h] BYREF
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v30 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v4,
      35LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      bIgnoreCase);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v30);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_35;
  v29 = 0LL;
  v5 = *v30;
  v29 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v30, &v29);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      38LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6,
      bIgnoreCase);
  v31 = 0LL;
  v25 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))v29)(
         v29,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v25);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7,
      bIgnoreCase);
  v8 = v25;
  v31 = v25;
  v27 = 0LL;
  v9 = *v25;
  v27 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v9 + 48))(v25, &v27);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      44LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10,
      bIgnoreCase);
  LOBYTE(v24) = 1;
  while ( (*(int (__fastcall **)(__int64 *, __int64 *))(*v27 + 56))(v27, &v24) >= 0 && (_BYTE)v24 )
  {
    v25 = 0LL;
    v11 = *v27;
    v25 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v11 + 48))(v27, &v25);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        50LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCase);
    v28 = 0LL;
    v13 = *v25;
    v28 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 56))(v25, &v28);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        53LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v14,
        bIgnoreCase);
    v15 = v28;
    v26 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 56LL);
    WindowsDeleteString(0LL);
    v26 = 0LL;
    v17 = v16(v15, &v26);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        83LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v17,
        bIgnoreCase);
    StringRawBuffer = WindowsGetStringRawBuffer(v26, 0LL);
    v19 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
    if ( CompareStringOrdinal(v19, -1, StringRawBuffer, -1, 1) == 2 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v15 + 48LL))(v15, &hstringHeader);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          87LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
          (const char *)(unsigned int)v20,
          bIgnoreCase);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, 0LL);
      memset_0(sz, 0, 0x4EuLL);
      StringFromGUID2((const GUID *const)&hstringHeader, sz, 39);
      v21 = **(_QWORD **)(a1 + 8);
      v32 = WindowsGetStringRawBuffer(v26, 0LL);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        &v32,
        sz,
        v21 + 8);
      WindowsDeleteString(v26);
LABEL_21:
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( v25 )
        (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
      break;
    }
    WindowsDeleteString(v26);
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *))(*v27 + 64))(v27, &v24) == -2147483637 )
      goto LABEL_21;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v25 )
      (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64 *))(*v27 + 16))(v27);
  result = (*(__int64 (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  if ( v29 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  return result;
}
