/*
 * XREFs of ??$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@Z @ 0x1800A7D44
 * Callers:
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x1800ACF9C (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x1800ADB24 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800ADD3C (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051E10 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_e85697e1379bd30e043dcf6a8e09ee83_>(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR **a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, PVOID, __int64 *); // rbx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v17; // rdi
  HSTRING_HEADER *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE v24[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v27; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v28; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v27 = a2;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v4);
    return v4;
  }
  v25 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v6 + 144LL);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, a3, (unsigned int)a3);
  v9 = v7(v6, v8[1].Reserved.Reserved1, &v25);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v9);
    v10 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v4;
  }
  v24[0] = 0;
  v26 = 0LL;
  v11 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
          &v26);
  v4 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v11);
    v13 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v4;
  }
  v15 = v26;
  v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v26 + 80LL);
  v17 = v25;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, &v27, v12);
  v19 = v16(v15, v18[1].Reserved.Reserved1, v17, v24);
  v4 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v19);
    v20 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v4;
  }
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
