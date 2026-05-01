/*
 * XREFs of ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1802348DA
 * Callers:
 *     ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1804AC160 (--$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x1802342BE (--$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemElement@@@WeakReference@@V12@AEAPEAVCSwitchItemElement@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemElement@@@WeakReference@@AEAPEAVCSwitchItemElement@@@Z @ 0x180234438 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemElement@@@WeakReference@@V12@AEAPEAVCSwitchIt.c)
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1802344CA (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180236932 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 *     ??4?$ComPtr@UISwitchItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItem@@@Z @ 0x1804B3178 (--4-$ComPtr@UISwitchItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItem@@@Z.c)
 *     ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___ @ 0x1804B75AC (ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c2119f3dd10f8dbad5.c)
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___ @ 0x1804B76E0 (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPoli_ea_1804B76E0.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1804B7DF4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804B7E94 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSwitchItemElement::RuntimeClassInitialize(
        CSwitchItemElement *this,
        const struct CSwitchItemElement::SwitchItemElementInitializeArgs *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // r13
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  char v16; // r12
  int v17; // eax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rdi
  const struct ThumbnailSizeMetrics *v23; // rbx
  int Instance; // eax
  __int64 v25; // rdx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rdx
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v30)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v31; // r9
  _QWORD *v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v36[2]; // [rsp+50h] [rbp-28h] BYREF
  char v37; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 v39; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+50h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+58h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+60h] BYREF

  v4 = *(_OWORD **)a2;
  v5 = (_OWORD *)((char *)this + 288);
  v6 = 2LL;
  do
  {
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[3] = v4[3];
    v5[4] = v4[4];
    v5[5] = v4[5];
    v5[6] = v4[6];
    v5 += 8;
    *(v5 - 1) = v4[7];
    v4 += 8;
    --v6;
  }
  while ( v6 );
  *v5 = *v4;
  *((_QWORD *)v5 + 2) = *((_QWORD *)v4 + 2);
  v7 = *((_QWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)v7;
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)(v7 + 16);
  *((_QWORD *)this + 35) = *(_QWORD *)(v7 + 32);
  *((_QWORD *)this + 82) = *((_QWORD *)this + 34);
  Microsoft::WRL::ComPtr<ISwitchItem>::operator=((char *)this + 584, *((_QWORD *)a2 + 3), 128LL);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((char *)this + 576, *((_QWORD *)a2 + 5));
  v8 = (char *)this + 568;
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((char *)this + 568, *((_QWORD *)a2 + 7));
  v42 = 0LL;
  v40 = (__int64)&v42;
  v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v40);
  v10 = Microsoft::WRL::AsWeak<IIconLoaderInternal>(*((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4), v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 32LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)v12);
    goto LABEL_41;
  }
  v14 = *(_QWORD *)v8;
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v8 + 120LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  v16 = 1;
  v40 = 0x100000001LL;
  v17 = v15(v14, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 88);
  v11 = v17;
  if ( v17 < 0 )
  {
    v12 = (unsigned int)v17;
    v13 = 34LL;
    goto LABEL_11;
  }
  v18 = *(_QWORD *)v8;
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v8 + 120LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 78);
  v40 = 0x100000001LL;
  v20 = v19(v18, *((_QWORD *)this + 11), 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 624);
  v11 = v20;
  if ( v20 < 0 )
  {
    v12 = (unsigned int)v20;
    v13 = 37LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 78) + 232LL))(*((_QWORD *)this + 78), 0LL);
  v40 = (__int64)this;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 83);
  v21 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemElement>,WeakReference::CWeakReference<CSwitchItemElement>,CSwitchItemElement * &>(
          (_QWORD *)this + 83,
          &v40);
  v11 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v21);
    v12 = v11;
    v13 = 40LL;
    goto LABEL_11;
  }
  v22 = (__int64 *)*((_QWORD *)this + 83);
  v36[0] = (__int64)v22;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v36);
  v36[1] = (__int64)this;
  v37 = 1;
  v23 = *(const struct ThumbnailSizeMetrics **)a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 76);
  Instance = Microsoft::WRL::Details::MakeAndInitialize<SwitchItemThumbnailElement,IMultitaskingViewElement,ThumbnailSizeMetrics const &,ISwitchThumbnailFactory * const &,ISwitchItem * const &>(
               (_QWORD *)this + 76,
               v23,
               (struct ISwitchThumbnailFactory **)a2 + 7,
               (struct ISwitchItem **)a2 + 3);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                 this,
                 *((_QWORD *)this + 76));
    v11 = Instance;
    if ( Instance < 0 )
    {
      v25 = 55LL;
      goto LABEL_21;
    }
    v26 = *((_DWORD *)a2 + 2);
    if ( v26 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 75);
      Instance = CGlyphButtonElement_CreateInstance(
                   59579LL,
                   v26 == 2,
                   (char *)this + 440,
                   13017LL,
                   v22,
                   *((_QWORD *)a2 + 6),
                   *((_QWORD *)a2 + 7));
      v11 = Instance;
      if ( Instance < 0 )
      {
        v25 = 74LL;
        goto LABEL_21;
      }
      Instance = (*(__int64 (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                   this,
                   *((_QWORD *)this + 75));
      v11 = Instance;
      if ( Instance < 0 )
      {
        v25 = 76LL;
        goto LABEL_21;
      }
    }
    v41 = 0LL;
    v39 = 0LL;
    v27 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)&v42, (__int64)&v41);
    v11 = v27;
    if ( v27 >= 0 )
    {
      v29 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v41;
      v30 = **v41;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
      v27 = v30(v29, &GUID_ee3a7544_b067_4a8c_8ed8_da1d4e9bfd02, &v39);
      v11 = v27;
      if ( v27 >= 0 )
      {
        if ( !v39 )
        {
          v11 = -2147418113;
          v31 = 2147549183LL;
          v28 = 85LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v28,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
            (const char *)v31);
LABEL_37:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
          goto LABEL_38;
        }
        v32 = (_QWORD *)((char *)this + 584);
        v27 = (*(__int64 (__fastcall **)(_QWORD, char *, char *, _QWORD, __int64))(**((_QWORD **)this + 73) + 72LL))(
                *((_QWORD *)this + 73),
                (char *)this + 336,
                (char *)this + 344,
                *((unsigned int *)a2 + 16),
                v39);
        v11 = v27;
        if ( v27 >= 0 )
        {
          v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v32 + 32LL))(*v32);
          v40 = (__int64)v22;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
          v27 = ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___(
                  v33,
                  &v40);
          v11 = v27;
          if ( v27 >= 0 )
          {
            v34 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v32 + 24LL))(*v32);
            v40 = (__int64)v22;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
            v27 = ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___(
                    v34,
                    &v40);
            v11 = v27;
            if ( v27 >= 0 )
            {
              v16 = 0;
              v11 = 0;
              goto LABEL_37;
            }
            v28 = 106LL;
          }
          else
          {
            v28 = 98LL;
          }
        }
        else
        {
          v28 = 89LL;
        }
      }
      else
      {
        v28 = 84LL;
      }
    }
    else
    {
      v28 = 83LL;
    }
    v31 = (unsigned int)v27;
    goto LABEL_35;
  }
  v25 = 54LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
    (const char *)(unsigned int)Instance);
LABEL_38:
  if ( v16 )
    (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v36);
LABEL_41:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v42);
  return v11;
}
