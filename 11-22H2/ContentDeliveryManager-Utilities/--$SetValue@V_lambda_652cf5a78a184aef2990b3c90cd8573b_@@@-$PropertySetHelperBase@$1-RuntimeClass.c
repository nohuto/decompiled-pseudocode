/*
 * XREFs of ??$SetValue@V_lambda_652cf5a78a184aef2990b3c90cd8573b_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_652cf5a78a184aef2990b3c90cd8573b_@@@Z @ 0x180099F80
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E630 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C15C (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_652cf5a78a184aef2990b3c90cd8573b_>(
        __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v10; // rdi
  HSTRING_HEADER *v11; // rax
  _BYTE v13[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v16; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v17; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v16 = L"scoreValue";
  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x80000000) == 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 8) + 120LL))(
           *(_QWORD *)(a1 + 8),
           v3,
           &v15);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v13[0] = 0;
      v14 = 0LL;
      v5 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
             &v14);
      v2 = v5;
      if ( v5 >= 0 )
      {
        v8 = v14;
        v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v14 + 80LL);
        v10 = v15;
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v16, v6);
        v5 = v9(v8, v11[1].Reserved.Reserved1, v10, v13);
        v2 = v5;
        if ( v5 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
          v2 = 0;
          goto LABEL_11;
        }
        v7 = 353LL;
      }
      else
      {
        v7 = 352LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v4);
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    return v2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)v2);
  return v2;
}
