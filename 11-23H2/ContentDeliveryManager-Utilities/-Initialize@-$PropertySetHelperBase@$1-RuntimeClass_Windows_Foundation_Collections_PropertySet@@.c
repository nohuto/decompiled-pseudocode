/*
 * XREFs of ?Initialize@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009DFC0
 * Callers:
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009AF60 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004CA64 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Initialize(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    *(_QWORD *)v7 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v7);
  }
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v9,
         a1 + 1);
  v5 = v4;
  v9 = 0LL;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x152,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)(unsigned int)v4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)v5);
  return v5;
}
