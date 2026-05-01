/*
 * XREFs of ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1804FB640
 * Callers:
 *     _lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_::operator() @ 0x1801B44FC (_lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_--operator().c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1804FA740 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180093AC0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::IsWindowMinimizing(
        CDesktopPositioner *this,
        struct IUnknown *a2,
        unsigned __int8 *a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v6; // r8
  int v7; // eax
  unsigned __int8 v8; // cl
  unsigned __int8 v10[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  *a3 = 0;
  v11 = 0LL;
  if ( a2 )
  {
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, _QWORD))QueryInterface)(
           a2,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v11) >= 0 )
    {
      v12 = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v14 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"VoicePositionerMinimising",
        0x1Au,
        0x19u);
      v7 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v12, v14, v6, v10);
      v8 = v10[0];
      if ( v7 < 0 )
        v8 = 0;
      *a3 = v8;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
