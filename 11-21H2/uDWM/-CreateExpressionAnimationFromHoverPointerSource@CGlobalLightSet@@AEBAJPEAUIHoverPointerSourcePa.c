/*
 * XREFs of ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x18004DA44
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18004D0B8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
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

  v32 = 0LL;
  v31 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  v8 = v7(a2, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 140LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v10 = v32;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  v8 = v11(v10, &v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 141LL;
    goto LABEL_16;
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
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)v27);
      goto LABEL_10;
    }
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Vector3(Hover.Point.x, Hover.Point.y, 256)",
      0x2Bu,
      0x2Au);
    v13 = v35;
    v35 = 0LL;
    v14 = v31;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v31 + 112LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
    v16 = v15(v14, v13, &v30);
    v9 = v16;
    if ( v16 >= 0 )
      goto LABEL_6;
    v28 = 155LL;
LABEL_19:
    v27 = (unsigned int)v16;
    goto LABEL_20;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Vector3(Hover.Point.x, Hover.Point.y, 128)",
    0x2Bu,
    0x2Au);
  v23 = v35;
  v35 = 0LL;
  v24 = v31;
  v25 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v31 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
  v16 = v25(v24, v23, &v30);
  v9 = v16;
  if ( v16 < 0 )
  {
    v28 = 150LL;
    goto LABEL_19;
  }
LABEL_6:
  v33 = 0LL;
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
  v18 = **v30;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  v19 = v18(v17, &GUID_464c4c2c_1caa_4061_9b40_e13fde1503ca, &v33);
  v9 = v19;
  if ( v19 < 0 )
  {
    v29 = 164LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_9;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Hover", 6u, 5u);
  v20 = v35;
  v35 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v33 + 96LL))(v33, v20, v32);
  v9 = v19;
  if ( v19 < 0 )
  {
    v29 = 166LL;
    goto LABEL_23;
  }
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
  v30 = 0LL;
  *a4 = v21;
  v9 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  return v9;
}
