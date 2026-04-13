/*
 * XREFs of ??$SetValue@V_lambda_652cf5a78a184aef2990b3c90cd8573b_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_652cf5a78a184aef2990b3c90cd8573b_@@@Z @ 0x1800A7600
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AD024 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051E10 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_652cf5a78a184aef2990b3c90cd8573b_>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v13; // rdi
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _BYTE v20[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v23; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23 = L"scoreValue";
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v3);
    return v3;
  }
  v21 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 8) + 120LL))(
         *(_QWORD *)(a1 + 8),
         a2,
         &v21);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v5);
    v6 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v3;
  }
  v20[0] = 0;
  v22 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
         &v22);
  v3 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v7);
    v9 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v3;
  }
  v11 = v22;
  v12 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v22 + 80LL);
  v13 = v21;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v23, v8);
  v15 = v12(v11, v14[1].Reserved.Reserved1, v13, v20);
  v3 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v15);
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v3;
  }
  v18 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return 0LL;
}
