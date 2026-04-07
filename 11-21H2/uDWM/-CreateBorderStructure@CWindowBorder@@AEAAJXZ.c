/*
 * XREFs of ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038698 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x180101028 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18001DD04 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x18002746C (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x1800374F8 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??4?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375EC (--4-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180037630 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x180037704 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ??$As@UICompositionTarget@Composition@UI@Windows@@@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionTarget@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180037C08 (--$As@UICompositionTarget@Composition@UI@Windows@@@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft.c)
 *     ??$As@UIVisual3@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual3@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180037C64 (--$As@UIVisual3@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??$As@UIVisual2@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual2@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180037CC0 (--$As@UIVisual2@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CWindowBorder::CreateBorderStructure(CWindowBorder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  LONG v4; // ecx
  int v5; // eax
  double v6; // xmm2_8
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, void *, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct Windows::UI::Composition::ISpriteVisual **); // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  int inserted; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // [rsp+30h] [rbp-39h] BYREF
  __int64 v36; // [rsp+38h] [rbp-31h] BYREF
  __int64 v37; // [rsp+40h] [rbp-29h] BYREF
  __int64 v38; // [rsp+48h] [rbp-21h] BYREF
  __int64 v39; // [rsp+50h] [rbp-19h] BYREF
  __int64 v40; // [rsp+58h] [rbp-11h] BYREF
  __int64 v41; // [rsp+60h] [rbp-9h] BYREF
  __int64 v42; // [rsp+68h] [rbp-1h] BYREF
  struct tagPOINT v43[2]; // [rsp+70h] [rbp+7h] BYREF
  char v44; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct CRectangleGeometryProxy *v46; // [rsp+D8h] [rbp+6Fh] BYREF
  struct Windows::UI::Composition::ISpriteVisual *v47; // [rsp+E0h] [rbp+77h] BYREF
  CVisual *v48; // [rsp+E8h] [rbp+7Fh] BYREF

  v48 = 0LL;
  v36 = 0LL;
  v47 = 0LL;
  v35 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v35,
    0LL);
  v2 = DCompositionCreateSharedVisualHandle(&v35);
  v3 = v2;
  if ( v2 < 0 )
  {
    v26 = 77LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v48);
  v2 = CVisual::CreateFromSharedHandle(v35, &v48);
  v3 = v2;
  if ( v2 < 0 )
  {
    v26 = 80LL;
    goto LABEL_36;
  }
  *((_BYTE *)v48 + 92) |= 8u;
  v4 = *((_DWORD *)this + 77);
  v43[0].x = *((_DWORD *)this + 76);
  v43[0].y = v4;
  CVisual::SetOffset((struct tagPOINT *)v48, v43);
  v5 = 0;
  if ( *((_DWORD *)this + 79) - *((_DWORD *)this + 77) >= 0 )
    v5 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
  v6 = (double)v5;
  v7 = 0;
  if ( *((_DWORD *)this + 78) - *((_DWORD *)this + 76) >= 0 )
    v7 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
  CVisualProxy::SetSize(*((CVisualProxy **)v48 + 2), (double)v7, v6);
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 32LL);
  v38 = 0LL;
  v9 = **v8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  v10 = v9(v8, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, &v38);
  v3 = v10;
  if ( v10 < 0 )
  {
    v27 = 90LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_32;
  }
  v11 = v38;
  v12 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v38 + 232LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  v10 = v12(v11, v35, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, &v36);
  v3 = v10;
  if ( v10 < 0 )
  {
    v27 = 91LL;
    goto LABEL_39;
  }
  v37 = 0LL;
  v13 = **v8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
  v14 = v13(v8, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v37);
  v3 = v14;
  if ( v14 < 0 )
  {
    v28 = 95LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_31;
  }
  v15 = v37;
  v16 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ISpriteVisual **))(*(_QWORD *)v37 + 176LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47);
  v14 = v16(v15, &v47);
  v3 = v14;
  if ( v14 < 0 )
  {
    v28 = 96LL;
    goto LABEL_42;
  }
  v42 = 0LL;
  v17 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual2>(
          &v47,
          &v42);
  v3 = v17;
  if ( v17 < 0 )
  {
    v29 = 100LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_30;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v42 + 88LL))(
          v42,
          _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
  v3 = v17;
  if ( v17 < 0 )
  {
    v29 = 101LL;
    goto LABEL_45;
  }
  v41 = 0LL;
  v18 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual3>(
          &v47,
          &v41);
  v3 = v18;
  if ( v18 < 0 )
  {
    v30 = 105LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_29;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 56LL))(v41, 0LL);
  v3 = v18;
  if ( v18 < 0 )
  {
    v30 = 106LL;
    goto LABEL_48;
  }
  v40 = 0LL;
  v19 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v47,
          &v40);
  v3 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_28;
  }
  v39 = 0LL;
  v20 = Microsoft::WRL::ComPtr<IDCompositionTarget>::As<Windows::UI::Composition::ICompositionTarget>(&v36, &v39);
  v3 = v20;
  if ( v20 < 0 )
  {
    v31 = 113LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_27;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 56LL))(v39, v40);
  v3 = v20;
  if ( v20 < 0 )
  {
    v31 = 114LL;
    goto LABEL_52;
  }
  v46 = 0LL;
  v21 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v46);
  v22 = CCompositor::CreateProxy<CRectangleGeometryProxy>(v21, &v46);
  v3 = v22;
  if ( v22 < 0 )
  {
    v32 = 118LL;
  }
  else
  {
    CWindowBorder::SetClipRectangle(this, v46, (const struct tagRECT *)this + 19);
    v22 = CWindowBorder::CreateAndAttachBorderBrush(this, v47);
    v3 = v22;
    if ( v22 >= 0 )
    {
      v43[0] = (struct tagPOINT)&v46;
      v43[1] = (struct tagPOINT)this;
      v44 = 1;
      v23 = *((_QWORD *)this + 32);
      if ( v23 )
      {
        inserted = CVisualProxy::SetClip(*(CVisualProxy **)(v23 + 16), v46);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v33 = 139LL;
          goto LABEL_59;
        }
        inserted = CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 32), 1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v33 = 140LL;
          goto LABEL_59;
        }
      }
      inserted = VisualCollection::InsertRelative((CWindowBorder *)((char *)this + 32), v48, 0LL, 1u, 1);
      v3 = inserted;
      if ( inserted >= 0 )
      {
        Microsoft::WRL::ComPtr<CVisual>::operator=((char *)this + 248, &v48);
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::operator=((char *)this + 272, &v36);
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::operator=((char *)this + 280, &v47);
        Microsoft::WRL::ComPtr<CVisual>::operator=((char *)this + 264, &v46);
        CWindowBorder::SetBorderModeForContentClip(this);
        v3 = 0;
LABEL_25:
        if ( v46 )
        {
          v34 = *((_QWORD *)this + 32);
          if ( v34 )
          {
            CVisualProxy::SetClip(*(CVisualProxy **)(v34 + 16), 0LL);
            CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 32), 0);
          }
        }
        goto LABEL_26;
      }
      v33 = 144LL;
LABEL_59:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)inserted);
      goto LABEL_25;
    }
    v32 = 122LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v22);
LABEL_26:
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v46);
LABEL_27:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
LABEL_28:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
LABEL_29:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
LABEL_30:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
LABEL_31:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
LABEL_32:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
LABEL_33:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v35);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v48);
  return v3;
}
