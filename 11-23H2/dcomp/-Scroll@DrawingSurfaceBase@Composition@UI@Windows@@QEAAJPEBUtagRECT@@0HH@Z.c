/*
 * XREFs of ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z @ 0x180152D20
 * Callers:
 *     ?Scroll@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@0HH@Z @ 0x18010A6C0 (-Scroll@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z @ 0x180152C5C (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32.c)
 *     ?Scroll@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@0HH@Z @ 0x180195D80 (-Scroll@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::Scroll(
        Windows::UI::Composition::DrawingSurfaceBase *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        unsigned int a4,
        int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  bool v16; // zf
  struct IDCompositionSurface *v17; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = Windows::UI::Composition::DrawingSurfaceBase::UseUnderlyingSurface(this, &v17);
  if ( v9 < 0 )
  {
    v10 = 156LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdrawingsurfacebase.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = (*(__int64 (__fastcall **)(struct IDCompositionSurface *, const struct tagRECT *, const struct tagRECT *, _QWORD, int))(*(_QWORD *)v17 + 56LL))(
          v17,
          a2,
          a3,
          a4,
          a5);
  v9 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v12);
  if ( v9 < 0 )
  {
    v10 = 162LL;
    goto LABEL_3;
  }
  v14 = *((_QWORD *)this + 3);
  v15 = *(_BYTE *)(v14 + 452);
  if ( (v15 & 1) == 0 )
  {
    v16 = *(_DWORD *)(v14 + 448) == 0;
    *(_BYTE *)(v14 + 452) = v15 | 1;
    if ( v16 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v14,
        v13);
  }
  return 0LL;
}
