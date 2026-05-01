/*
 * XREFs of ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180512960
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804B358C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180512644 (-AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP.c)
 *     ?GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@1@Z @ 0x180513018 (-GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIAppli.c)
 *     ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1805132C4 (-IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModePositionerOperation::CreateSanitizedLayout(
        __int64 a1,
        struct IApplicationView *a2,
        struct IApplicationView *a3,
        struct IObjectArray *a4,
        char a5)
{
  TabletModePositionerOperation *v9; // r12
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  TabletModePositionerOperation *v13; // rcx
  HRESULT (__stdcall *v14)(IObjectArray *, UINT, const IID *const, void **); // rbx
  int v15; // eax
  __int64 v16; // rdx
  struct IApplicationView **v17; // rcx
  struct IApplicationView **v18; // rcx
  __int64 *AddressOf; // rbx
  __int64 *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v25; // rdx
  int v26; // eax
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v31; // [rsp+30h] [rbp-81h] BYREF
  struct IApplicationView *v32; // [rsp+38h] [rbp-79h] BYREF
  struct IApplicationView *v33; // [rsp+40h] [rbp-71h] BYREF
  int v34; // [rsp+48h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-61h]
  LPCRITICAL_SECTION v36; // [rsp+58h] [rbp-59h]
  int v37; // [rsp+60h] [rbp-51h]
  struct IApplicationView *v38[2]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v39; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v40[40]; // [rsp+88h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v9 = (TabletModePositionerOperation *)(a1 - 176);
  lpCriticalSection = (LPCRITICAL_SECTION)((a1 + 16) & -(__int64)(a1 != 176));
  v36 = lpCriticalSection;
  v37 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)lpCriticalSection, 1);
  ViewLayoutBehaviorFlags = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 77LL;
    goto LABEL_55;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 264LL))(*(_QWORD *)(a1 - 112), 7LL);
  ViewLayoutBehaviorFlags = ((__int64 (__fastcall *)(struct IObjectArray *, int *))a4->lpVtbl->GetCount)(a4, &v34);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 83LL;
    goto LABEL_55;
  }
  if ( a3 && !TabletModePositionerOperation::IsViewInArray(v13, a3, a4) )
  {
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a3, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 89LL;
      goto LABEL_55;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                                *(_QWORD *)(a1 - 112),
                                a3,
                                0LL,
                                v31,
                                0LL);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 90LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( a2 && !TabletModePositionerOperation::IsViewInArray(v13, a2, a4) )
  {
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 96LL;
      goto LABEL_55;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                                *(_QWORD *)(a1 - 112),
                                a2,
                                0LL,
                                v31,
                                0LL);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 97LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( !v34 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 240LL))(
                                *(_QWORD *)(a1 - 112),
                                0LL,
                                0LL,
                                0LL);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 102LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( v34 != 1 )
  {
    v33 = 0LL;
    v32 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v32);
    v20 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v33);
    if ( (int)TabletModePositionerOperation::GetLeftAndRightSnappedViews(
                v9,
                a4,
                (struct IApplicationView **)v20,
                (struct IApplicationView **)AddressOf) >= 0 )
    {
      *(_OWORD *)v38 = 0LL;
      v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView **))(*(_QWORD *)v33 + 128LL))(
              v33,
              v38);
      v11 = v21;
      if ( v21 < 0 )
      {
        v22 = 125LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v21);
LABEL_48:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v32);
        v17 = &v33;
        goto LABEL_49;
      }
      v39 = 0LL;
      v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)v32 + 128LL))(v32, &v39);
      v11 = v21;
      if ( v21 < 0 )
      {
        v22 = 127LL;
        goto LABEL_40;
      }
      v23 = (int)v38[1];
      v24 = v39 - LODWORD(v38[1]);
      if ( (int)v39 - LODWORD(v38[1]) > 0 )
      {
        LODWORD(v38[1]) += v24 / 2;
        LODWORD(v39) = v24 / 2 + v23;
      }
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 - 112) + 24LL))(*(_QWORD *)(a1 - 112), v40);
      v26 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v40, v25);
      LODWORD(v38[1]) += v26 / -2;
      LODWORD(v39) = v26 + LODWORD(v38[1]);
      v21 = TabletModePositionerOperation::AddViewToNewLayout((__int64)v9, v33, (__int64)v38, 0);
      v11 = v21;
      if ( v21 < 0 )
      {
        v22 = 146LL;
        goto LABEL_40;
      }
      v21 = TabletModePositionerOperation::AddViewToNewLayout((__int64)v9, v32, (__int64)&v39, 1u);
      v11 = v21;
      if ( v21 < 0 )
      {
        v22 = 147LL;
        goto LABEL_40;
      }
LABEL_51:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v32);
      v18 = &v33;
      goto LABEL_52;
    }
    v38[0] = 0LL;
    GetAt = a4->lpVtbl->GetAt;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v38);
    v28 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))GetAt)(
            a4,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            v38);
    v11 = v28;
    if ( v28 >= 0 )
    {
      v28 = GetViewLayoutBehaviorFlags(v38[0], (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
      v11 = v28;
      if ( v28 >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                *(_QWORD *)(a1 - 112),
                v38[0],
                0LL,
                v31,
                0LL);
        v11 = v28;
        if ( v28 >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v38);
          goto LABEL_51;
        }
        v29 = 157LL;
      }
      else
      {
        v29 = 156LL;
      }
    }
    else
    {
      v29 = 153LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v28);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v38);
    goto LABEL_48;
  }
  v38[0] = 0LL;
  v14 = a4->lpVtbl->GetAt;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v38);
  v15 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))v14)(
          a4,
          0LL,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          v38);
  v11 = v15;
  if ( v15 < 0 )
  {
    v16 = 108LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v15);
    v17 = v38;
LABEL_49:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v17);
    goto LABEL_56;
  }
  v15 = GetViewLayoutBehaviorFlags(v38[0], (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
  v11 = v15;
  if ( v15 < 0 )
  {
    v16 = 111LL;
    goto LABEL_27;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112)
                                                                                             + 232LL))(
          *(_QWORD *)(a1 - 112),
          v38[0],
          0LL,
          v31,
          0LL);
  v11 = v15;
  if ( v15 < 0 )
  {
    v16 = 112LL;
    goto LABEL_27;
  }
  v18 = v38;
LABEL_52:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v18);
LABEL_53:
  *(_DWORD *)(a1 - 152 + 80) = 8 * (a5 & 1) + 1;
  ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags >= 0 )
    goto LABEL_56;
  v12 = 164LL;
LABEL_55:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)ViewLayoutBehaviorFlags);
LABEL_56:
  if ( v37 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
