/*
 * XREFs of ?ResumeDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x1800648B8
 * Callers:
 *     ?ResumeDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJXZ @ 0x180065A30 (-ResumeDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?ResumeDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ @ 0x18008D980 (-ResumeDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::ResumeDraw(
        Windows::UI::Composition::DrawingSurfaceBase *this)
{
  int v1; // ebx
  unsigned int v2; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionSurface *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(this, &v6);
  if ( v1 < 0 )
  {
    v4 = 100LL;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v6 + 48LL))(v6);
    v1 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v2);
    if ( v1 >= 0 )
      return 0LL;
    v4 = 102LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdrawingsurfacebase.cpp",
    (const char *)(unsigned int)v1);
  return (unsigned int)v1;
}
