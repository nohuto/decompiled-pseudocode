/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800381C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x180026880 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180026DC0 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800366A8 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?Attach@?$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAAXPEAVCVisualProxy@@@Z @ 0x1800384D8 (-Attach@-$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAAXPEAVCVisualProxy@@@Z.c)
 *     ?SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x18003850C (-SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z @ 0x180038550 (-Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180038584 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800385B8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A8C40 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800D181C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CClientArea::CloneVisualTree(__int64 a1, struct CClientArea **a2, unsigned int a3)
{
  CBaseObject *v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // rdx
  CBaseObject *v16; // rcx
  int v17; // eax
  struct CClientArea *v18; // rax
  CBaseObject *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  CBaseObject *v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  CRedirectVisualProxy *v29; // rdx
  __int64 v30; // rdx
  CRedirectVisualProxy *v31; // [rsp+40h] [rbp-49h] BYREF
  CBaseObject *v32; // [rsp+48h] [rbp-41h] BYREF
  struct CResourceProxy *v33; // [rsp+50h] [rbp-39h] BYREF
  struct IRenderDataBuilder *v34; // [rsp+58h] [rbp-31h] BYREF
  struct CClientArea *v35; // [rsp+60h] [rbp-29h] BYREF
  CBaseObject *v36; // [rsp+68h] [rbp-21h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v38[4]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v39; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *a2 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  if ( (a3 & 4) == 0 )
  {
    v31 = 0LL;
    v26 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
    v27 = CCompositor::CreateProxy<CRedirectVisualProxy>(v26, &v31);
    v9 = v27;
    if ( v27 >= 0 )
    {
      v27 = CRedirectVisualProxy::SetRedirectedVisual(v31, *(struct CVisualProxy **)(a1 + 16));
      v9 = v27;
      if ( v27 >= 0 )
      {
        v29 = v31;
        v31 = 0LL;
        Microsoft::WRL::ComPtr<CVisualProxy>::Attach(&v36, v29);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
        goto LABEL_15;
      }
      v28 = 138LL;
    }
    else
    {
      v28 = 137LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v27);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 24LL) + 104LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 24LL),
    &v37);
  v37.right -= v37.left;
  v37.bottom -= v37.top;
  *(_QWORD *)&v37.left = 0LL;
  v38[0] = 0;
  v38[1] = 0;
  *(float *)&v38[2] = (float)v37.right;
  *(float *)&v38[3] = (float)v37.bottom;
  v39 = 0LL;
  v31 = 0LL;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
  v8 = CCompositor::CreateProxy<CCachedVisualImageProxy>(v7, &v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    v21 = 102LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v8);
LABEL_40:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
    goto LABEL_20;
  }
  v8 = CCachedVisualImageProxy::Update(v31, v38, &v39, 0LL, 0LL, *(_QWORD *)(a1 + 16), 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v21 = 108LL;
    goto LABEL_27;
  }
  v8 = CCachedVisualImageProxy::Snapshot(v31, &v37);
  v9 = v8;
  if ( v8 < 0 )
  {
    v21 = 110LL;
    goto LABEL_27;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL));
  v9 = v8;
  if ( v8 < 0 )
  {
    v21 = 113LL;
    goto LABEL_27;
  }
  v34 = 0LL;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**(_QWORD **)(v10 + 16) + 128LL))(
          *(_QWORD *)(v10 + 16),
          &v34);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 117LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v11);
LABEL_39:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
    goto LABEL_40;
  }
  v11 = (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _DWORD *, _QWORD))(*(_QWORD *)v34 + 40LL))(
          v34,
          v38,
          *(unsigned int *)(*((_QWORD *)v31 + 2) + 24LL));
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 118LL;
    goto LABEL_30;
  }
  v33 = 0LL;
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v33);
  v13 = CCompositor::CreateProxy<CRenderDataProxy>(v12, (__int64 *)&v33);
  v9 = v13;
  if ( v13 < 0 )
  {
    v23 = 121LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v13);
LABEL_38:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v33);
    goto LABEL_39;
  }
  v13 = CRenderDataProxy::Update(v33, v34);
  v9 = v13;
  if ( v13 < 0 )
  {
    v23 = 122LL;
    goto LABEL_33;
  }
  v32 = 0LL;
  v14 = CCompositor::CreateProxy<CVisualProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (__int64 *)&v32);
  v9 = v14;
  if ( v14 < 0 )
  {
    v24 = 126LL;
    goto LABEL_36;
  }
  v14 = CVisualProxy::SetContent(v32, v33);
  v9 = v14;
  if ( v14 < 0 )
  {
    v24 = 127LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v14);
    v25 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      CBaseObject::Release(v25);
    }
    goto LABEL_38;
  }
  v15 = v32;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<CVisualProxy>::Attach(&v36, v15);
  v16 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    CBaseObject::Release(v16);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v31);
LABEL_15:
  v35 = 0LL;
  v6 = v36;
  v17 = CClientArea::Create(v36, &v35);
  v9 = v17;
  if ( v17 < 0 )
  {
    v30 = 145LL;
  }
  else
  {
    v17 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v35, a3);
    v9 = v17;
    if ( v17 >= 0 )
    {
      v18 = v35;
      v19 = 0LL;
      v35 = 0LL;
      *a2 = v18;
      v9 = 0;
      goto LABEL_18;
    }
    v30 = 146LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
    (const char *)(unsigned int)v17);
  v19 = v35;
LABEL_18:
  if ( v19 )
  {
    v35 = 0LL;
    CBaseObject::Release(v19);
  }
LABEL_20:
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
