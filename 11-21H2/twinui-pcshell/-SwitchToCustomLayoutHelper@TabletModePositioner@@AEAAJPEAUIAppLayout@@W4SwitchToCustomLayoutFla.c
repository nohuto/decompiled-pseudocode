/*
 * XREFs of ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805093C8
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180501870 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805048C4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::SwitchToCustomLayoutHelper(TabletModePositioner *a1, __int64 a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IUnknown *v9; // [rsp+48h] [rbp+28h] BYREF

  if ( IsSurfaceHubWithWin32VtcEnabled()
    && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL))(a2, 4LL) )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               a1,
               &CLSID_PPIWin32VtcLayoutOperation,
               &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
               (void **)&v9);
    v5 = inited;
    if ( inited < 0 )
    {
      v6 = 2905LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      return v5;
    }
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v9->lpVtbl[4].Release)(v9, a2);
    v5 = inited;
    if ( inited < 0 )
    {
      v6 = 2906LL;
      goto LABEL_9;
    }
    inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v9);
    v5 = inited;
    if ( inited < 0 )
    {
      v6 = 2907LL;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               a1,
               &CLSID_TabletModePositionerOperation,
               &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
               (void **)&v9);
    v5 = inited;
    if ( inited < 0 )
    {
      v6 = 2912LL;
      goto LABEL_9;
    }
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v9->lpVtbl[2].AddRef)(v9, a2, 4LL);
    v5 = inited;
    if ( inited < 0 )
    {
      v6 = 2913LL;
      goto LABEL_9;
    }
    inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v9);
    v5 = inited;
    if ( inited < 0 )
    {
      v6 = 2914LL;
      goto LABEL_9;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
