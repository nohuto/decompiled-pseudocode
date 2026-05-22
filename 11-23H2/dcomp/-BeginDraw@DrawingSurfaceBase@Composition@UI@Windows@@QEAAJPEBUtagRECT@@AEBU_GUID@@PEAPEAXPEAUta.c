/*
 * XREFs of ?BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061B00
 * Callers:
 *     ?BeginDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061980 (-BeginDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID.c)
 *     ?BeginDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x1800641D0 (-BeginDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AE.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::BeginDraw(
        Windows::UI::Composition::DrawingSurfaceBase *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5)
{
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // edx
  __int64 v12; // rdx
  struct IDCompositionSurface *v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(this, &v13);
  if ( v8 < 0 )
  {
    v12 = 34LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct IDCompositionSurface *, const struct tagRECT *, const struct _GUID *, void **, struct tagPOINT *))(*(_QWORD *)v13 + 24LL))(
           v13,
           a2,
           a3,
           a4,
           a5);
    v8 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v9, v10);
    if ( v8 >= 0 )
      return 0LL;
    v12 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdrawingsurfacebase.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
