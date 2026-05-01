/*
 * XREFs of ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1805C3FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x180022B70 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802D4FA4 (--4-$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _lambda_7f57f26ac444fb3354da6dd48979a63d_::operator() @ 0x1805C3174 (_lambda_7f57f26ac444fb3354da6dd48979a63d_--operator().c)
 *     ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x1805C3CC8 (-IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x1805C50C4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x1805D691C (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1805D91B4 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeViewManager::ShowAppResizeView(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  bool v7; // r13
  char v8; // si
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, LONG *, _QWORD); // rdi
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  bool v21; // zf
  __int64 *v22; // r15
  __int64 v23; // rcx
  const struct _GUID *v24; // rdx
  int Instance; // eax
  IUnknown *v26; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  TabletModeViewManager *v31; // r14
  IUnknown *v32; // rax
  int v33; // eax
  IUnknown *punk; // [rsp+30h] [rbp-59h] BYREF
  __int64 v35; // [rsp+38h] [rbp-51h] BYREF
  struct tagRECT v36; // [rsp+40h] [rbp-49h] BYREF
  __int64 v37; // [rsp+50h] [rbp-39h] BYREF
  __int64 v38; // [rsp+58h] [rbp-31h] BYREF
  struct tagRECT v39; // [rsp+60h] [rbp-29h] BYREF
  char v40; // [rsp+70h] [rbp-19h]
  _BYTE v41[40]; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v38 = a4;
  v7 = 0;
  v8 = 1;
  if ( IsPPIEdition() )
  {
    v7 = a3 == 1;
    if ( !TabletModeViewManager::IsResizeAllowedOnLayout((TabletModeViewManager *)(a1 - 11)) )
      return 2147500037LL;
  }
  if ( !a2 )
  {
LABEL_18:
    v22 = a1 + 7;
    v23 = a1[7];
    if ( v23 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 32LL))(v23, 0LL);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
    Instance = AppResizeView_CreateInstance(v7, v24, (void **)&punk);
    v13 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_36:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
      return v13;
    }
    v37 = 0LL;
    v26 = punk;
    QueryInterface = punk->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    v28 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
            v26,
            &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
            &v37);
    v13 = v28;
    if ( v28 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1 + 8);
      v28 = TabletModeInputHandler_CreateInstance(1LL, v37, v30, a1 + 8);
      v13 = v28;
      if ( v28 >= 0 )
      {
        v31 = (TabletModeViewManager *)(a1 - 11);
        *(_QWORD *)&v39.left = v31;
        *(_QWORD *)&v39.right = &punk;
        v40 = 1;
        v32 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)v31);
        IUnknown_SetSite(punk, v32);
        v33 = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].QueryInterface)(punk, &v38);
        v13 = v33;
        if ( v33 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppResizeView>::operator=(v22, (__int64 *)&punk);
          TabletModeViewManager::UpdateLayoutItemsSizeConstraints(v31);
          v40 = 0;
          v13 = 0;
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x161,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v33);
        }
        if ( v8 )
        {
          v40 = 0;
          lambda_7f57f26ac444fb3354da6dd48979a63d_::operator()((IUnknown ***)&v39);
        }
        goto LABEL_35;
      }
      v29 = 342LL;
    }
    else
    {
      v29 = 341LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v28);
LABEL_35:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    goto LABEL_36;
  }
  v35 = 0LL;
  v10 = a1[4];
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
  v12 = v11(v10, &v35);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v35 + 48LL))(v35) )
    {
      v13 = -2147019873;
      v14 = 2147947423LL;
      v15 = 307LL;
      goto LABEL_9;
    }
    *(_QWORD *)&v36.right = 0LL;
    v16 = v35;
    v17 = *(__int64 (__fastcall **)(__int64, __int64, LONG *, _QWORD))(*(_QWORD *)v35 + 152LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36.right);
    v18 = v17(v16, a2, &v36.right, 0LL);
    v13 = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v20 = 311LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36.right);
      goto LABEL_24;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, struct tagRECT *))(**(_QWORD **)&v36.right + 56LL))(
      *(_QWORD *)&v36.right,
      0LL,
      &v39);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 24LL))(v35, v41);
    ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges((ImmersiveApplicationLayout *)v41, &v39, &v39, &v36);
    if ( a3 == 4 )
    {
      v21 = (v36.left & 1) == 0;
    }
    else
    {
      if ( a3 != 3 )
        goto LABEL_22;
      v21 = (v36.left & 2) == 0;
    }
    if ( !v21 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36.right);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
      goto LABEL_18;
    }
LABEL_22:
    v13 = -2147418113;
    v19 = 2147549183LL;
    v20 = 326LL;
    goto LABEL_23;
  }
  v14 = (unsigned int)v12;
  v15 = 306LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)v14);
LABEL_24:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
  return v13;
}
