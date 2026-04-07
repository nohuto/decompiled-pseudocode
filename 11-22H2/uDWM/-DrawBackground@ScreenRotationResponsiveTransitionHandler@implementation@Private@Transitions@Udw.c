/*
 * XREFs of ?DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5170
 * Callers:
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4DA4 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F68E8 (-UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FF20 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18006EDB8 (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE48C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DrawBackground(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  CBaseObject *v2; // rbx
  int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  CBaseObject *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  struct CBaseLegacyMilBrushProxy *v15; // rcx
  CBaseObject *v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  CBaseObject *v20; // rbx
  int v21; // eax
  CBaseObject *v22; // [rsp+20h] [rbp-40h] BYREF
  CBaseObject *v23; // [rsp+28h] [rbp-38h] BYREF
  CBaseObject *v24; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v25; // [rsp+38h] [rbp-28h] BYREF
  int v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+4Ch] [rbp-14h]
  int v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v24 = 0LL;
  v23 = 0LL;
  winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v22,
    *((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 6));
  v2 = v22;
  (*(void (__fastcall **)(CBaseObject *, int *))(*(_QWORD *)v22 + 96LL))(v22, &v26);
  if ( v2 )
    winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref((__int64 *)&v22);
  v3 = 0;
  if ( v28 - v26 >= 0 )
    v3 = v28 - v26;
  v4 = 0;
  if ( v29 - v27 >= 0 )
    v4 = v29 - v27;
  v5 = *((_QWORD *)this + 7);
  v22 = (CBaseObject *)__PAIR64__(v4, v3);
  (*(void (__fastcall **)(__int64, CBaseObject **))(*(_QWORD *)v5 + 104LL))(v5, &v22);
  v6 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 7));
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      486LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v6,
      (int)v22);
  v22 = 0LL;
  v7 = CSolidRectangleInstruction::Create(&v22);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      490LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v7,
      (int)v22);
  v10 = v22;
  *((_OWORD *)v22 + 1) = xmmword_18012A818;
  v25.left = COERCE_UNSIGNED_INT((float)v3) ^ _xmm;
  v25.top = COERCE_UNSIGNED_INT((float)v4) ^ _xmm;
  *(float *)&v25.right = (float)v3;
  *(float *)&v25.bottom = (float)v4;
  *((struct tagRECT *)v10 + 2) = v25;
  v11 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v10, v8, v9);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      499LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v11,
      (int)v22);
  v25.left = 0;
  v25.top = 0;
  v12 = *((_QWORD *)this + 7);
  v25.right = *(_DWORD *)(v12 + 128);
  v25.bottom = *(_DWORD *)(v12 + 132);
  v23 = 0LL;
  v13 = ResourceHelper::CreateRectangleGeometry(&v25, &v23);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      502LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v13,
      (int)v22);
  v24 = 0LL;
  v14 = *((_QWORD *)this + 8);
  v15 = *(struct CBaseLegacyMilBrushProxy **)(v14 + 608);
  if ( !v15 )
    v15 = *(struct CBaseLegacyMilBrushProxy **)(v14 + 592);
  v16 = v23;
  v17 = CDrawGeometryInstruction::Create(v15, v23, &v24);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      504LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v17,
      (int)v22);
  v20 = v24;
  v21 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v24, v18, v19);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      505LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v21,
      (int)v22);
  CBaseObject::Release(v10);
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v20 )
    CBaseObject::Release(v20);
}
