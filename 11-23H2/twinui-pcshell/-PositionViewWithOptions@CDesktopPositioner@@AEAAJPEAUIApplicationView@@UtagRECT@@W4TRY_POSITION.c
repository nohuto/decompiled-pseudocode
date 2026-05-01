/*
 * XREFs of ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B3CB4
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18007620C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B4264 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1805B4264.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805B4350 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180075324 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::PositionViewWithOptions(
        __int64 a1,
        struct IApplicationView *a2,
        _DWORD *a3,
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
  int v32; // r11d
  int v33; // r8d
  int v34; // r10d
  int v35; // ecx
  int v36; // ebx
  int v37; // r9d
  int v38; // edx
  LONG top; // edi
  LONG left; // r13d
  char v41; // al
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  int v45; // r10d
  int v46; // r9d
  int v47; // eax
  __int64 v48; // rax
  __int64 v50; // [rsp+20h] [rbp-A9h]
  struct IApplicationViewTitlebarConfiguration *v51; // [rsp+40h] [rbp-89h] BYREF
  __int64 v52; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-79h] BYREF
  int v54; // [rsp+54h] [rbp-75h]
  __int64 v55; // [rsp+58h] [rbp-71h] BYREF
  __int64 v56; // [rsp+60h] [rbp-69h] BYREF
  int v57; // [rsp+68h] [rbp-61h] BYREF
  RECT v58; // [rsp+70h] [rbp-59h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v59[2]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v60; // [rsp+90h] [rbp-39h]
  RECT rc1; // [rsp+A0h] [rbp-29h] BYREF
  RECT rc2; // [rsp+B0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+3Fh]

  v54 = a4;
  v9 = a1;
  *(_QWORD *)&v58.left = a1;
  v52 = a7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v52);
  if ( v52
    || (v10 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL),
        v11 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v52),
        v12 = v10(a2, v11),
        v13 = v12,
        v12 >= 0) )
  {
    v55 = 0LL;
    v14 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v55);
    v15 = v14(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v55);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 2745LL;
LABEL_13:
      v17 = (unsigned int)v15;
      goto LABEL_14;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v55 + 32LL))(v55, &v57);
    v13 = v15;
    if ( v15 < 0 )
    {
      v16 = 2748LL;
      goto LABEL_13;
    }
    if ( (unsigned int)(v57 - 2) > 1 )
    {
      v13 = -2147019873;
      v17 = 2147947423LL;
      v16 = 2751LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v17);
LABEL_56:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v55);
      goto LABEL_57;
    }
    v18 = 0;
    if ( v57 == 2 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v55 + 24LL))(v55, &rc1);
      v13 = v15;
      if ( v15 < 0 )
      {
        v16 = 2757LL;
        goto LABEL_13;
      }
LABEL_22:
      v53 = 0;
      v56 = 0LL;
      v22 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v56);
      if ( v22(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v56) >= 0 )
      {
        v59[0] = 0LL;
        v23 = v56;
        v24 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)v59);
        v26 = v24(v23, AddressOf);
        v13 = v26;
        if ( v26 < 0 )
        {
          v27 = 2775LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v26);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v59);
LABEL_55:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v56);
          goto LABEL_56;
        }
        v26 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, unsigned int *))(*(_QWORD *)v59[0] + 368LL))(
                v59[0],
                &v53);
        v13 = v26;
        if ( v26 < 0 )
        {
          v27 = 2776LL;
          goto LABEL_27;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v59);
        v9 = *(_QWORD *)&v58.left;
      }
      v51 = 0LL;
      if ( a5
        && (v28 = *(int (__fastcall **)(__int64 *, struct IApplicationViewTitlebarConfiguration **))(*a5 + 184),
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v51),
            v28(a5, &v51) < 0)
        && (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v51),
            fixed = CDesktopPositioner::_CreateTitlebarConfiguration(v29, a2, &v51),
            v13 = fixed,
            fixed < 0) )
      {
        v31 = 2782LL;
      }
      else
      {
        v60 = 0LL;
        LODWORD(v50) = 1;
        fixed = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v9 + 296) + 72LL))(
                  *(_QWORD *)(v9 + 296),
                  v52,
                  v53,
                  1LL);
        v13 = fixed;
        if ( fixed >= 0 )
        {
          v32 = v60;
          v33 = *a3 - v60;
          *a3 = v33;
          v34 = DWORD2(v60);
          v35 = DWORD2(v60) + a3[2];
          v36 = DWORD1(v60);
          v37 = a3[1] - DWORD1(v60);
          a3[1] = v37;
          v38 = a3[3] + HIDWORD(v60);
          *(RECT *)v59 = rc1;
          top = rc1.top;
          left = rc1.left;
          v41 = v54;
          if ( (v54 & 4) != 0 )
          {
            v42 = v35 - v33;
            v43 = v38 - v37;
            if ( (v54 & 8) != 0 )
            {
              v42 -= v34 + v32;
              v43 -= v36 + HIDWORD(v60);
              v41 = v54;
            }
            v44 = rc1.left + v42;
            LODWORD(v59[1]) = v44;
            v45 = rc1.top + v43;
            HIDWORD(v59[1]) = rc1.top + v43;
          }
          else
          {
            v45 = HIDWORD(v59[1]);
            v44 = (int)v59[1];
          }
          if ( (v41 & 1) != 0 )
          {
            if ( (v41 & 2) != 0 )
            {
              *a3 = v32 + v33;
              a3[1] = v36 + v37;
            }
            v46 = a3[1];
            v47 = *a3 - left;
            LODWORD(v59[0]) = *a3;
            LODWORD(v59[1]) = v47 + v44;
            HIDWORD(v59[1]) = v46 - top + v45;
            HIDWORD(v59[0]) = v46;
          }
          fixed = CDesktopPositioner::_FixRectForWorkArea(*(__int64 *)&v58.left, a6, (LONG *)v59, v52, v50, &rc2);
          v13 = fixed;
          if ( fixed >= 0 )
          {
            if ( v18 || !EqualRect(&rc1, &rc2) )
            {
              v48 = *a5;
              v58 = rc2;
              fixed = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v48 + 56))(a5, &v58);
              v13 = fixed;
              if ( fixed < 0 )
              {
                v31 = 2856LL;
                goto LABEL_52;
              }
              fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 320LL))(a2, a5);
              v13 = fixed;
              if ( fixed < 0 )
              {
                v31 = 2859LL;
                goto LABEL_52;
              }
            }
            v13 = 0;
            goto LABEL_54;
          }
          v31 = 2838LL;
        }
        else
        {
          v31 = 2792LL;
        }
      }
LABEL_52:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_54:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v51);
      goto LABEL_55;
    }
    if ( v57 != 3 )
      goto LABEL_22;
    v18 = 1;
    v59[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v59);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v19, a2, v59);
    v13 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v59[0] + 56LL))(
                               v59[0],
                               &rc1);
      v13 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v59);
        goto LABEL_22;
      }
      v21 = 2767LL;
    }
    else
    {
      v21 = 2766LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v59);
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB3,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v12);
LABEL_57:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
  return v13;
}
