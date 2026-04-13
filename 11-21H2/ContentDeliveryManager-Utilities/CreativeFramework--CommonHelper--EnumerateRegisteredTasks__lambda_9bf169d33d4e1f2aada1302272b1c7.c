/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800EAE78
 * Callers:
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800EB7F8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___(
        bool **a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, HSTRING *); // rdi
  int v17; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v19; // di
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+28h] [rbp-39h]
  char v22[8]; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v23; // [rsp+40h] [rbp-21h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-19h] BYREF
  __int64 v25; // [rsp+50h] [rbp-11h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-9h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1h] BYREF
  __int64 *v28; // [rsp+68h] [rbp+7h] BYREF
  HSTRING v29; // [rsp+70h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  HSTRING string; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v28 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v4,
      35LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      bIgnoreCase);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v28);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_33;
  v27 = 0LL;
  v5 = *v28;
  v27 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v28, &v27);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      38LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6,
      bIgnoreCase);
  v29 = 0LL;
  v23 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, HSTRING *))v27)(
         v27,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v23);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7,
      bIgnoreCase);
  v8 = v23;
  v29 = v23;
  v24 = 0LL;
  v9 = *(_QWORD *)v23;
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(HSTRING, __int64 **))(v9 + 48))(v23, &v24);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      44LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10,
      bIgnoreCase);
  v22[0] = 1;
  while ( (*(int (__fastcall **)(__int64 *, char *))(*v24 + 56))(v24, v22) >= 0 && v22[0] )
  {
    v26 = 0LL;
    v11 = *v24;
    v26 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v11 + 48))(v24, &v26);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        50LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCase);
    v25 = 0LL;
    v13 = *v26;
    v25 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 56))(v26, &v25);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        53LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v14,
        bIgnoreCase);
    v15 = v25;
    v23 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 56LL);
    WindowsDeleteString(0LL);
    v23 = 0LL;
    v17 = v16(v15, &v23);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        70LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v17,
        bIgnoreCase);
    StringRawBuffer = WindowsGetStringRawBuffer(v23, 0LL);
    **a1 = CompareStringOrdinal(*(LPCWCH *)a1[1], -1, StringRawBuffer, -1, 1) == 2;
    v19 = **a1;
    WindowsDeleteString(v23);
    if ( v19 || (*(unsigned int (__fastcall **)(__int64 *, char *))(*v24 + 64))(v24, v22) == -2147483637 )
    {
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      if ( v26 )
        (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
      break;
    }
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
  result = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v27 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v28 + 16))(v28);
  return result;
}
