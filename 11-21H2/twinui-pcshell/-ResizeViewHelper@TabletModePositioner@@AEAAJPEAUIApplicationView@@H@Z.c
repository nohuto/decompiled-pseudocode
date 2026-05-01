/*
 * XREFs of ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180505E20
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18050A4D8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805048C4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::ResizeViewHelper(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        unsigned int a3)
{
  int inited; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             this,
             &CLSID_TabletModePositionerOperation,
             &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
             (void **)&v11);
  v7 = inited;
  if ( inited >= 0 )
  {
    inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v11->lpVtbl[3].QueryInterface)(
               v11,
               a2,
               a3);
    v7 = inited;
    if ( inited >= 0 )
    {
      inited = TabletModePositioner::ApplyLayoutOperationHelper(this, v11);
      v7 = inited;
      if ( inited >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v8 = 2933LL;
    }
    else
    {
      v8 = 2932LL;
    }
  }
  else
  {
    v8 = 2931LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v7;
}
