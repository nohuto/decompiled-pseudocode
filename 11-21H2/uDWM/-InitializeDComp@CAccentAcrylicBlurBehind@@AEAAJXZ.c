/*
 * XREFs of ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004BF1C
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x18004BED0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18003A494 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C5E4 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C640 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??4?$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z @ 0x18004C69C (--4-$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAccentAcrylicBlurBehind::InitializeDComp(CAccentAcrylicBlurBehind *this)
{
  CDesktopManager *v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rax
  CGraphicsDeviceManager *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, char *); // rbx
  _QWORD *v10; // r13
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, void **); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, char *); // rdi
  int v18; // eax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, char *); // rbx
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64 *); // rdi
  int inserted; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  void *v30[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  __int64 v32; // [rsp+90h] [rbp+48h] BYREF
  __int64 v33; // [rsp+98h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+60h] BYREF

  v30[0] = 0LL;
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v4 = (__int64 *)((char *)this + 296);
  v5 = *((_QWORD *)this + 37);
  if ( v5 != v3 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 5)
                                                                       + 32LL));
      v5 = *v4;
    }
    v32 = v5;
    *v4 = v3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    v5 = *v4;
    v2 = CDesktopManager::s_pDesktopManagerInstance;
  }
  if ( !v5
    || ((v6 = (CGraphicsDeviceManager *)*((_QWORD *)v2 + 6),
         (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v6) < 0)
      ? (v7 = 0LL)
      : (v7 = *((_QWORD *)v6 + 3)),
        Microsoft::WRL::ComPtr<ID2D1Device>::operator=((char *)this + 304, v7),
        !*((_QWORD *)this + 38)) )
  {
    v12 = -2147467259;
    goto LABEL_26;
  }
  if ( *((_QWORD *)this + 36) )
    goto LABEL_25;
  v8 = *v4;
  v9 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)*v4 + 216LL);
  v10 = (_QWORD *)((char *)this + 312);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  v11 = v9(v8, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, (char *)this + 312);
  v12 = v11;
  if ( v11 < 0 )
  {
    v26 = 1819LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_26;
  }
  v13 = *v4;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)*v4 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v30,
    0LL);
  v11 = v14(v13, *v10, v30);
  v12 = v11;
  if ( v11 < 0 )
  {
    v26 = 1822LL;
    goto LABEL_30;
  }
  v35 = 0LL;
  v15 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
          (char *)this + 296,
          &v35);
  v12 = v15;
  if ( v15 < 0 )
  {
    v27 = 1826LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v15);
LABEL_48:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    goto LABEL_26;
  }
  v16 = v35;
  v17 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v35 + 176LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 43);
  v15 = v17(v16, (char *)this + 344);
  v12 = v15;
  if ( v15 < 0 )
  {
    v27 = 1829LL;
    goto LABEL_33;
  }
  v34 = 0LL;
  v18 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 43,
          &v34);
  v12 = v18;
  if ( v18 < 0 )
  {
    v28 = 1832LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v18);
LABEL_47:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    goto LABEL_48;
  }
  v19 = *v4;
  v20 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v4 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 40);
  v18 = v20(v19, (char *)this + 320);
  v12 = v18;
  if ( v18 < 0 )
  {
    v28 = 1835LL;
    goto LABEL_37;
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 24LL))(*v4);
  v12 = v18;
  if ( v18 < 0 )
  {
    v28 = 1836LL;
    goto LABEL_37;
  }
  v33 = 0LL;
  v21 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
          (char *)this + 320,
          &v33);
  v12 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x730,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v21);
LABEL_46:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    goto LABEL_47;
  }
  v32 = 0LL;
  v22 = v33;
  v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 360LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  inserted = v23(v22, &v32);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v29 = 1842LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)inserted);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    goto LABEL_46;
  }
  inserted = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 72LL))(v32, v34);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v29 = 1843LL;
    goto LABEL_45;
  }
  inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(*v10, *((_QWORD *)this + 40));
  v12 = inserted;
  if ( inserted < 0 )
  {
    v29 = 1846LL;
    goto LABEL_45;
  }
  inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 24LL))(*v4);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v29 = 1848LL;
    goto LABEL_45;
  }
  inserted = CVisual::CreateFromSharedHandle(v30[0], (struct CVisual **)this + 36);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v29 = 1854LL;
    goto LABEL_45;
  }
  inserted = VisualCollection::InsertRelative(
               (CAccentAcrylicBlurBehind *)((char *)this + 32),
               *((struct CVisual **)this + 36),
               0LL,
               0,
               1);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v29 = 1857LL;
    goto LABEL_45;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
LABEL_25:
  v12 = 0;
LABEL_26:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v30);
  return v12;
}
