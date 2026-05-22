/*
 * XREFs of ?EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x180061A78
 * Callers:
 *     ?EndDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJXZ @ 0x180061A20 (-EndDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?EndDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ @ 0x180064270 (-EndDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::EndDraw(
        Windows::UI::Composition::DrawingSurfaceBase *this)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  bool v9; // zf
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionSurface *v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(this, &v12);
  if ( v2 < 0 )
  {
    v10 = 59LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdrawingsurfacebase.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v3 = (*(__int64 (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v12 + 32LL))(v12);
  v2 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v3, v4);
  if ( v2 < 0 )
  {
    v10 = 61LL;
    goto LABEL_9;
  }
  v6 = *((_QWORD *)this + 3);
  v7 = *(_BYTE *)(v6 + 452);
  if ( (v7 & 1) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 448) == 0;
    *(_BYTE *)(v6 + 452) = v7 | 1;
    if ( v9 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v6,
        v5);
  }
  return 0LL;
}
