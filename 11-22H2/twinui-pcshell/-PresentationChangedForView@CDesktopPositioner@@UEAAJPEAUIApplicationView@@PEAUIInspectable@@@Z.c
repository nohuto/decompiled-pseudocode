/*
 * XREFs of ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805B4350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076DB0 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B3CB4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::PresentationChangedForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  struct IInspectableVtbl *lpVtbl; // rax
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *AddressOf; // rax
  struct IPresentationRequestedArgs *v12; // [rsp+50h] [rbp-49h] BYREF
  int v13; // [rsp+58h] [rbp-41h] BYREF
  int v14; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v15; // [rsp+60h] [rbp-39h] BYREF
  __int64 v16; // [rsp+68h] [rbp-31h] BYREF
  __int64 v17; // [rsp+70h] [rbp-29h] BYREF
  int v18; // [rsp+78h] [rbp-21h] BYREF
  struct tagRECT v19; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v20; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v21; // [rsp+A0h] [rbp+7h] BYREF
  struct tagRECT v22; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  lpVtbl = a3->lpVtbl;
  v12 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IPresentationRequestedArgs **))lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v12) < 0 )
    goto LABEL_13;
  v15 = 0;
  v21 = 0LL;
  v14 = 0;
  v13 = 0;
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v12 + 72LL))(v12, &v13);
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v12 + 88LL))(v12, &v14);
  (*(__int64 (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v12 + 80LL))(v12, &v18);
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  v7 = v6(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v16 + 24LL))(v16, &v22);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 722LL;
      goto LABEL_6;
    }
    v17 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v17);
    v19 = v22;
    if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                (CDesktopPositioner *)((char *)this - 144),
                v12,
                &v19,
                &v21,
                (enum TRY_POSITION_VIEW_FLAGS *)&v15,
                (struct IImmersiveMonitor **)AddressOf) >= 0 )
    {
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v19);
      if ( !*(_QWORD *)&v19.left )
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2DA,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v19.left);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        goto LABEL_10;
      }
      v20 = v21;
      CDesktopPositioner::PositionViewWithOptions((__int64)this - 144, a2, &v20, v15, *(__int64 **)&v19.left, 8, v17);
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v19.left);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v9 = 719LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return v8;
}
