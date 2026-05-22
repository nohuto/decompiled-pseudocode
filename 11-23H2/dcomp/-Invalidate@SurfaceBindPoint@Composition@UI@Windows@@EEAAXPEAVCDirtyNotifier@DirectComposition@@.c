/*
 * XREFs of ?Invalidate@SurfaceBindPoint@Composition@UI@Windows@@EEAAXPEAVCDirtyNotifier@DirectComposition@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::SurfaceBindPoint::Invalidate(_QWORD *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, _QWORD *, _QWORD); // r9
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[1] )
  {
    v1 = (__int64 (__fastcall ***)(_QWORD, _QWORD *, _QWORD))a1[2];
    if ( v1 )
    {
      v2 = (**v1)(a1[2], a1, a1[3]);
      if ( v2 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1BD,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsurfacebindpoint.cpp",
          (const char *)(unsigned int)v2,
          v3);
    }
  }
}
