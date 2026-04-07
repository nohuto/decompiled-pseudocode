/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B088
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180018E0C (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D20 (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800123E4 (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Mi.c)
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18001240C (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAPEAPEAUICompositionEffectBrush@Composition@UI@Windows@@XZ @ 0x18001243C (-ReleaseAndGetAddressOf@-$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionBackdropBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003B02C (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionBackdropBrush@Compositio.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18003B590 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??I?$ComPtr@UICompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UICompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@XZ @ 0x18003B78C (--I-$ComPtr@UICompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA-AV-$ComPtrRe.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x18003B7A0 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z.c)
 *     ??$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@?$ComPtr@UICompositionEffectSourceParameter@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003B7CC (--$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@-$ComPtr@UICompositionEffectSourceParame.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ComPtrRef@V?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@PEAV?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@23@@Z @ 0x180097054 (--0-$ComPtrRef@V-$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Detai.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        __int64 (__fastcall ***this)(WindowsInternal::UI *, GUID *, __int64 *),
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall **v12)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v13)(WindowsInternal::UI *, GUID *, __int64 *); // rdi
  __int64 *v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v18; // eax
  __int64 **v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdi
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v24; // rcx
  __int64 *v25; // rbx
  __int64 (__fastcall **v26)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v27)(WindowsInternal::UI *, GUID *, __int64 *); // rsi
  __int64 *v28; // rbx
  int v29; // eax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64, __int64 *); // r14
  __int64 *v32; // rsi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  __int64 (__fastcall **v40)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v41)(_QWORD *, __int64, __int64); // rsi
  __int64 *v43; // [rsp+20h] [rbp-49h] BYREF
  __int64 v44; // [rsp+28h] [rbp-41h] BYREF
  _QWORD *v45; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-31h] BYREF
  __int64 v47; // [rsp+40h] [rbp-29h] BYREF
  __int64 v48; // [rsp+48h] [rbp-21h] BYREF
  __int64 v49; // [rsp+50h] [rbp-19h] BYREF
  __int64 v50; // [rsp+58h] [rbp-11h] BYREF
  __int64 v51; // [rsp+60h] [rbp-9h] BYREF
  __int64 v52; // [rsp+68h] [rbp-1h] BYREF
  __int64 *v53; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v55; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v48 = 0LL;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  v5 = v55;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v48);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v48);
  v7 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v8 = v48;
    v47 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v48 + 48LL);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v47);
    v55 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v10 = v9(v8, v55, &v47);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v10);
LABEL_39:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v47);
      goto LABEL_40;
    }
    v53 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameter>::As<Windows::Graphics::Effects::IGraphicsEffectSource>(
            &v47,
            &v53);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v11);
LABEL_38:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((__int64 *)&v53);
      goto LABEL_39;
    }
    v12 = *this;
    v52 = 0LL;
    v13 = *v12;
    v14 = *(__int64 **)Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectFactory>::operator&(
                         &v52,
                         &v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
    v15 = v13((WindowsInternal::UI *)this, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, v14);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v15);
LABEL_37:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
      goto LABEL_38;
    }
    v16 = v52;
    v46 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v52 + 64LL);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((__int64 *)&v46);
    v18 = v17(v16, &v46);
    v7 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v18);
LABEL_36:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((__int64 *)&v46);
      goto LABEL_37;
    }
    v51 = 0LL;
    v19 = (__int64 **)Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectFactory>::operator&(&v51, &v43);
    v20 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBackdropBrush>::As<Windows::UI::Composition::ICompositionBrush>(
            &v46,
            *v19);
    v7 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v20);
LABEL_35:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
      goto LABEL_36;
    }
    v45 = 0LL;
    v44 = 0LL;
    Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v44);
    v21 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v44);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 40LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v21);
LABEL_34:
      Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
      goto LABEL_35;
    }
    v23 = v44;
    v24 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(v44 + 32);
    *(_DWORD *)(v44 + 76) = 1;
    v21 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(v24, 30.0);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 43LL;
      goto LABEL_17;
    }
    v25 = v53;
    if ( *(__int64 **)(v23 + 64) != v53 )
    {
      v43 = v53;
      Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef((__int64 *)&v43);
      v43 = *(__int64 **)(v23 + 64);
      *(_QWORD *)(v23 + 64) = v25;
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((__int64 *)&v43);
    }
    v26 = *this;
    v50 = 0LL;
    v27 = *v26;
    v28 = *(__int64 **)Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectFactory>::operator&(
                         &v50,
                         &v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28);
    v29 = v27((WindowsInternal::UI *)this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, v28);
    v7 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
        (const char *)(unsigned int)v29);
LABEL_33:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
      goto LABEL_34;
    }
    v30 = v50;
    v49 = 0LL;
    v31 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v50 + 88LL);
    v32 = *(__int64 **)Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectFactory>::operator&(
                         &v49,
                         &v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
    v33 = v31(v30, v23, v32);
    v7 = v33;
    if ( v33 >= 0 )
    {
      v35 = v49;
      v36 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 48LL);
      Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectBrush>>::ComPtrRef<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectBrush>>(
        &v43,
        &v45);
      AddressOf = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectBrush>::ReleaseAndGetAddressOf(v43);
      v33 = v36(v35, AddressOf);
      v7 = v33;
      if ( v33 >= 0 )
      {
        v38 = v45;
        v39 = v51;
        v40 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v45;
        v55 = 0LL;
        v41 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64))v40[7];
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
        v33 = v41(v38, v55, v39);
        v7 = v33;
        if ( v33 >= 0 )
        {
          v33 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IDCompositionDesktopDevicePartner *))*v45)(
                  v45,
                  &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
                  a2);
          v7 = v33;
          if ( v33 >= 0 )
          {
            v7 = 0;
            goto LABEL_32;
          }
          v34 = 55LL;
        }
        else
        {
          v34 = 53LL;
        }
      }
      else
      {
        v34 = 51LL;
      }
    }
    else
    {
      v34 = 50LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v33);
LABEL_32:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
    (const char *)(unsigned int)ActivationFactory);
LABEL_40:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v48);
  return v7;
}
