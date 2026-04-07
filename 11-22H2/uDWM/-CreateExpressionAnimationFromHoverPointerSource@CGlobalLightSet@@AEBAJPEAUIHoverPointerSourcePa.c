/*
 * XREFs of ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x180040058
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005646C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005684C (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        _QWORD *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // rdi
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64, _QWORD); // rdi
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v33 = 0LL;
  v32 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  v8 = v7(a2, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v33);
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 140LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v8,
      (int)v30);
    goto LABEL_9;
  }
  v10 = v33;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  v8 = v11(v10, &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 141LL;
    goto LABEL_14;
  }
  v30 = 0LL;
  v12 = a3 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      v9 = -2147024809;
      v27 = 2147942487LL;
      v28 = 159LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)v27,
        (int)v30);
LABEL_21:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v30);
      goto LABEL_9;
    }
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Vector3(Hover.Point.x, Hover.Point.y, 256)",
      0x2Bu,
      0x2Au);
    v13 = v35;
    v35 = 0LL;
    v14 = v32;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v32 + 112LL);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v30);
    v16 = v15(v14, v13, &v30);
    v9 = v16;
    if ( v16 >= 0 )
      goto LABEL_6;
    v28 = 155LL;
LABEL_17:
    v27 = (unsigned int)v16;
    goto LABEL_18;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Vector3(Hover.Point.x, Hover.Point.y, 128)",
    0x2Bu,
    0x2Au);
  v23 = v35;
  v35 = 0LL;
  v24 = v32;
  v25 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v32 + 112LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v30);
  v16 = v25(v24, v23, &v30);
  v9 = v16;
  if ( v16 < 0 )
  {
    v28 = 150LL;
    goto LABEL_17;
  }
LABEL_6:
  v31 = 0LL;
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
  v18 = **v30;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  v19 = v18(v17, &GUID_464c4c2c_1caa_4061_9b40_e13fde1503ca, &v31);
  v9 = v19;
  if ( v19 < 0 )
  {
    v29 = 164LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v19,
      (int)v30);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    goto LABEL_21;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Hover", 6u, 5u);
  v20 = v35;
  v35 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 96LL))(v31, v20, v33);
  v9 = v19;
  if ( v19 < 0 )
  {
    v29 = 166LL;
    goto LABEL_20;
  }
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
  v30 = 0LL;
  *a4 = v21;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v30);
  v9 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  return v9;
}
