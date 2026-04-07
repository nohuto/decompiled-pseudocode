/*
 * XREFs of ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x180056590
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x180055574 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@UIPropertyValueStatics@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800566F4 (--$As@UIPropertyValueStatics@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV.c)
 *     ??$As@U?$IReference@N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180056750 (--$As@U-$IReference@N@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(__int64 a1, __int64 a2, __int64 *a3)
{
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rdi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( a3 )
  {
    *a3 = 0LL;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    ActivationFactory = RoGetActivationFactory(v19, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16);
    v5 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x751,
        (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v17 = 0LL;
      v6 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValueStatics>(&v16, &v17);
      v5 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x754,
          (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)v6);
      }
      else
      {
        v15 = 0LL;
        v7 = v17;
        v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 120LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        v10 = v8(v7, v9, &v15);
        v5 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x757,
            (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v10);
        }
        else
        {
          v14 = 0LL;
          v11 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<double>>(&v15, &v14);
          v5 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x75A,
              (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v11);
          }
          else
          {
            v12 = v14;
            v14 = 0LL;
            *a3 = v12;
            v5 = 0;
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
  else
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74B,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)0x80070057LL);
  }
  return v5;
}
