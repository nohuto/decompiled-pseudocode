/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBUtagSIZE@@_N@Z @ 0x1800F58C0
 * Callers:
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4938 (-PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transition.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180047B34 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UpdateBackgroundInstructionsAndSize(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this,
        const struct tagSIZE *a2,
        char a3)
{
  CBaseObject *v6; // rdi
  struct CSolidRectangleInstruction *v7; // rbx
  CBaseObject *v8; // rsi
  __int64 v9; // rcx
  LONG cy; // edx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  struct CBaseLegacyMilBrushProxy *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CBaseObject *v20; // [rsp+20h] [rbp-30h] BYREF
  CBaseObject *v21; // [rsp+28h] [rbp-28h] BYREF
  struct CSolidRectangleInstruction *v22; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v9 = *((_QWORD *)this + 6);
  cy = a2->cy;
  v23.left = a2->cx;
  v23.top = cy;
  (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v9 + 96LL))(v9, &v23);
  v11 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 6));
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      479LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v11,
      (int)v20);
  if ( a3 )
  {
    v23.left = 0;
    v23.top = 0;
    v12 = *((_QWORD *)this + 6);
    v23.right = *(_DWORD *)(v12 + 128);
    v23.bottom = *(_DWORD *)(v12 + 132);
    v20 = 0LL;
    v13 = ResourceHelper::CreateRectangleGeometry(&v23, &v20);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        488LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        (const char *)(unsigned int)v13,
        (int)v20);
    v21 = 0LL;
    v14 = *((_QWORD *)this + 7);
    v15 = *(struct CBaseLegacyMilBrushProxy **)(v14 + 608);
    if ( !v15 )
      v15 = *(struct CBaseLegacyMilBrushProxy **)(v14 + 592);
    v8 = v20;
    v16 = CDrawGeometryInstruction::Create(v15, v20, &v21);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        489LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        (const char *)(unsigned int)v16,
        (int)v20);
    v6 = v21;
    v17 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 6), v21);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        490LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        (const char *)(unsigned int)v17,
        (int)v20);
  }
  else
  {
    v22 = 0LL;
    v18 = CSolidRectangleInstruction::Create(&v22);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        495LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        (const char *)(unsigned int)v18,
        (int)v20);
    v7 = v22;
    *((_OWORD *)v22 + 1) = xmmword_1801241B0;
    v23.left = 0;
    v23.top = 0;
    *(float *)&v23.right = (float)a2->cx;
    *(float *)&v23.bottom = (float)a2->cy;
    *((struct tagRECT *)v7 + 2) = v23;
    v19 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 6), v7);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        504LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        (const char *)(unsigned int)v19,
        (int)v20);
  }
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v6 )
    CBaseObject::Release(v6);
}
