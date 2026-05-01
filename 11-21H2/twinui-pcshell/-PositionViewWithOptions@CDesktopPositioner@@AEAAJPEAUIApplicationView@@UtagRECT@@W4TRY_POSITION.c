/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804FB8D4
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800F0318 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804FBE84 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1804FBE84.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804FBF70 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1800563F4 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1800F12CC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F20B0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int *a3,
        int a4,
        __int64 *a5,
        int a6,
        __int64 a7)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(struct IApplicationView *, __int64 *); // rbx
  __int64 *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 (__fastcall *v14)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  char v18; // r12
  CDesktopPositioner *v19; // rcx
  int FullPositionSnapshot; // eax
  __int64 v21; // rdx
  int (__fastcall *v22)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v26; // eax
  __int64 v27; // rdx
  int (__fastcall *v28)(__int64 *, struct IApplicationViewTitlebarConfiguration **); // rbx
  CDesktopPositioner *v29; // rcx
  int fixed; // eax
  __int64 v31; // rdx
  int v32; // ebx
  unsigned int v33; // r11d
  int v34; // r9d
  int v35; // edx
  int v36; // edi
  int v37; // ecx
  int v38; // r8d
  char v39; // al
  unsigned int v40; // edx
  int v41; // r8d
  unsigned int v42; // r9d
  int v43; // r10d
  unsigned int v44; // r8d
  __int64 v45; // rax
  struct IApplicationViewTitlebarConfiguration *v47; // [rsp+40h] [rbp-89h] BYREF
  __int64 v48; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-79h] BYREF
  int v50; // [rsp+54h] [rbp-75h]
  __int64 v51; // [rsp+58h] [rbp-71h] BYREF
  __int64 v52; // [rsp+60h] [rbp-69h] BYREF
  int v53; // [rsp+68h] [rbp-61h] BYREF
  RECT v54; // [rsp+70h] [rbp-59h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v55[2]; // [rsp+80h] [rbp-49h] BYREF
  RECT rc1; // [rsp+90h] [rbp-39h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-29h] BYREF
  RECT rc2; // [rsp+B0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+3Fh]

  v50 = a4;
  v9 = a1;
  *(_QWORD *)&v54.left = a1;
  v48 = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v48);
  if ( v48
    || (v10 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL),
        v11 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v48),
        v12 = v10(a2, v11),
        v13 = v12,
        v12 >= 0) )
  {
    v51 = 0LL;
    v14 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
    v15 = v14(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v51);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 2357LL;
LABEL_13:
      v17 = (unsigned int)v15;
      goto LABEL_14;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v51 + 32LL))(v51, &v53);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 2360LL;
      goto LABEL_13;
    }
    if ( (unsigned int)(v53 - 2) > 1 )
    {
      v13 = -2147019873;
      v17 = 2147947423LL;
      v16 = 2363LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v17);
LABEL_57:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
      goto LABEL_58;
    }
    v18 = 0;
    if ( v53 == 2 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v51 + 24LL))(v51, &rc1);
      v13 = v15;
      if ( v15 < 0 )
      {
        v16 = 2369LL;
        goto LABEL_13;
      }
LABEL_22:
      v49 = 0;
      v52 = 0LL;
      v22 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
      if ( v22(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v52) >= 0 )
      {
        v55[0] = 0LL;
        v23 = v52;
        v24 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)v55);
        v26 = v24(v23, AddressOf);
        v13 = v26;
        if ( v26 < 0 )
        {
          v27 = 2387LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v26);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v55);
LABEL_56:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
          goto LABEL_57;
        }
        v26 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, unsigned int *))(*(_QWORD *)v55[0] + 368LL))(
                v55[0],
                &v49);
        v13 = v26;
        if ( v26 < 0 )
        {
          v27 = 2388LL;
          goto LABEL_27;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v55);
        v9 = *(_QWORD *)&v54.left;
      }
      v47 = 0LL;
      if ( a5
        && (v28 = *(int (__fastcall **)(__int64 *, struct IApplicationViewTitlebarConfiguration **))(*a5 + 184),
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47),
            v28(a5, &v47) < 0)
        && (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47),
            fixed = CDesktopPositioner::_CreateTitlebarConfiguration(v29, a2, &v47),
            v13 = fixed,
            fixed < 0) )
      {
        v31 = 2394LL;
      }
      else
      {
        v57 = 0LL;
        fixed = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, struct IApplicationViewTitlebarConfiguration *, __int128 *))(**(_QWORD **)(v9 + 264) + 72LL))(
                  *(_QWORD *)(v9 + 264),
                  v48,
                  v49,
                  1LL,
                  1,
                  v47,
                  &v57);
        v13 = fixed;
        if ( fixed >= 0 )
        {
          v32 = v57;
          v33 = *a3 - v57;
          *a3 = v33;
          v34 = DWORD2(v57);
          v35 = DWORD2(v57) + a3[2];
          a3[2] = v35;
          v36 = DWORD1(v57);
          v37 = a3[1] - DWORD1(v57);
          a3[1] = v37;
          v38 = HIDWORD(v57) + a3[3];
          *(RECT *)v55 = rc1;
          v39 = v50;
          if ( (v50 & 4) != 0 )
          {
            v40 = v35 - v33;
            v41 = v38 - v37;
            if ( (v50 & 8) != 0 )
            {
              v40 -= v34 + v32;
              v41 -= HIDWORD(v57) + v36;
            }
            v42 = v40 + rc1.left;
            LODWORD(v55[1]) = v40 + rc1.left;
            v43 = v41 + rc1.top;
            HIDWORD(v55[1]) = v41 + rc1.top;
            v39 = v50;
          }
          else
          {
            v43 = HIDWORD(v55[1]);
            v42 = (unsigned int)v55[1];
          }
          if ( (v39 & 1) != 0 )
          {
            if ( (v39 & 2) != 0 )
            {
              v44 = v32 + v33;
              v37 += v36;
            }
            else
            {
              v44 = v33;
            }
            v55[0] = (struct IOcclusionBasedApplicationViewPosition *)__PAIR64__(v37, v44);
            LODWORD(v55[1]) = v44 - rc1.left + v42;
            HIDWORD(v55[1]) = v37 - rc1.top + v43;
          }
          fixed = CDesktopPositioner::_FixRectForWorkArea(*(__int64 *)&v54.left, a6, (LONG *)v55, v48, &rc2);
          v13 = fixed;
          if ( fixed >= 0 )
          {
            if ( v18 || !EqualRect(&rc1, &rc2) )
            {
              v45 = *a5;
              v54 = rc2;
              fixed = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v45 + 56))(a5, &v54);
              v13 = fixed;
              if ( fixed < 0 )
              {
                v31 = 2468LL;
                goto LABEL_53;
              }
              fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 320LL))(a2, a5);
              v13 = fixed;
              if ( fixed < 0 )
              {
                v31 = 2471LL;
                goto LABEL_53;
              }
            }
            v13 = 0;
            goto LABEL_55;
          }
          v31 = 2450LL;
        }
        else
        {
          v31 = 2404LL;
        }
      }
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_55:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v47);
      goto LABEL_56;
    }
    if ( v53 != 3 )
      goto LABEL_22;
    v18 = 1;
    v55[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v55);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v19, a2, v55);
    v13 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v55[0] + 56LL))(
                               v55[0],
                               &rc1);
      v13 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v55);
        goto LABEL_22;
      }
      v21 = 2379LL;
    }
    else
    {
      v21 = 2378LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v55);
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92F,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v12);
LABEL_58:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
  return v13;
}
