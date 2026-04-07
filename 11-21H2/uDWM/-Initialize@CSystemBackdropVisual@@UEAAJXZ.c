/*
 * XREFs of ?Initialize@CSystemBackdropVisual@@UEAAJXZ @ 0x1800E12A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C5E4 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSystemBackdropVisual::Initialize(CSystemBackdropVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, GUID *, char *); // rbx
  _QWORD *v7; // r12
  __int64 (__fastcall *v8)(__int64, _QWORD, void **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, char *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, char *); // rbx
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  int inserted; // eax
  __int64 v22; // rdx
  CVisual **v23; // rdi
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  struct _MARGINS v28; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF
  void *v31; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+58h] BYREF

  v31 = 0LL;
  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v5 + 216LL);
    v7 = (_QWORD *)((char *)this + 248);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
    v2 = v6(v5, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, (char *)this + 248);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 25LL;
      goto LABEL_7;
    }
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v5 + 224LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v31,
      0LL);
    v2 = v8(v5, *v7, &v31);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 28LL;
      goto LABEL_7;
    }
    v27 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
           v5,
           &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
           &v27);
    v3 = v9;
    if ( v9 < 0 )
    {
      v10 = 32LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v9);
LABEL_41:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      goto LABEL_42;
    }
    v11 = v27;
    v12 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 176LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
    v9 = v12(v11, (char *)this + 264);
    v3 = v9;
    if ( v9 < 0 )
    {
      v10 = 35LL;
      goto LABEL_12;
    }
    v26 = 0LL;
    v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 33))(
            *((_QWORD *)this + 33),
            &GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06,
            &v26);
    v3 = v13;
    if ( v13 < 0 )
    {
      v14 = 39LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v13);
LABEL_40:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      goto LABEL_41;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v26 + 88LL))(
            v26,
            _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
    v3 = v13;
    if ( v13 < 0 )
    {
      v14 = 40LL;
      goto LABEL_17;
    }
    v25 = 0LL;
    v15 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 33,
            &v25);
    v3 = v15;
    if ( v15 < 0 )
    {
      v16 = 43LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v15);
LABEL_39:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      goto LABEL_40;
    }
    v17 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
    v15 = v17(v5, (char *)this + 256);
    v3 = v15;
    if ( v15 < 0 )
    {
      v16 = 46LL;
      goto LABEL_22;
    }
    v32 = 0LL;
    v18 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 32,
            &v32);
    v3 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
        (const char *)(unsigned int)v18);
LABEL_38:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
      goto LABEL_39;
    }
    v30 = 0LL;
    v19 = v32;
    v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 360LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    inserted = v20(v19, &v30);
    v3 = inserted;
    if ( inserted >= 0 )
    {
      inserted = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 72LL))(v30, v25);
      v3 = inserted;
      if ( inserted >= 0 )
      {
        inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *((_QWORD *)this + 32));
        v3 = inserted;
        if ( inserted >= 0 )
        {
          v23 = (CVisual **)((char *)this + 272);
          Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 34);
          inserted = CVisual::CreateFromSharedHandle(v31, (struct CVisual **)this + 34);
          v3 = inserted;
          if ( inserted >= 0 )
          {
            v28 = 0LL;
            CVisual::SetInsetFromParent(*v23, &v28);
            inserted = VisualCollection::InsertRelative((CSystemBackdropVisual *)((char *)this + 32), *v23, 0LL, 0, 1);
            v3 = inserted;
            if ( inserted >= 0 )
            {
              v3 = 0;
              goto LABEL_37;
            }
            v22 = 71LL;
          }
          else
          {
            v22 = 64LL;
          }
        }
        else
        {
          v22 = 56LL;
        }
      }
      else
      {
        v22 = 53LL;
      }
    }
    else
    {
      v22 = 52LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)inserted);
LABEL_37:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    goto LABEL_38;
  }
  v4 = 20LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v2);
LABEL_42:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v31);
  return v3;
}
