/*
 * XREFs of ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x18004DCC0
 * Callers:
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x18004D2EC (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlobalLightSet::AttachExpressionAnimationToRevealSpotLight(
        CGlobalLightSet *this,
        __int64 (__fastcall ***a2)(struct Windows::UI::Composition::ISpotLight *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct Windows::UI::Composition::IExpressionAnimation *, GUID *, __int64 *))
{
  __int64 (__fastcall *v5)(struct Windows::UI::Composition::ISpotLight *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::UI::Composition::IExpressionAnimation *, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v14 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v6 = v5((struct Windows::UI::Composition::ISpotLight *)a2, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v13 = 0LL;
  v8 = **a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v9 = v8((struct Windows::UI::Composition::IExpressionAnimation *)a3, &GUID_464c4c2c_1caa_4061_9b40_e13fde1503ca, &v13);
  v7 = v9;
  if ( v9 < 0 )
  {
    v12 = 182LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_5;
  }
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Offset", 7u, 6u);
  v10 = v16;
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 72LL))(v14, v10, v13);
  v7 = v9;
  if ( v9 < 0 )
  {
    v12 = 185LL;
    goto LABEL_10;
  }
  v7 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v7;
}
