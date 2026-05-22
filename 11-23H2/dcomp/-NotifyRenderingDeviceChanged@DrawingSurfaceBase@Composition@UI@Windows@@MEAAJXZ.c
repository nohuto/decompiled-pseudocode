/*
 * XREFs of ?NotifyRenderingDeviceChanged@DrawingSurfaceBase@Composition@UI@Windows@@MEAAJXZ @ 0x180157430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::DrawingSurfaceBase::NotifyRenderingDeviceChanged(
        Windows::UI::Composition::DrawingSurfaceBase *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 19) + 280LL))(
         (char *)this - 152,
         *((_QWORD *)this + 3));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x65,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtDrawingSurfaceBase.h",
    (const char *)(unsigned int)v1);
  return v2;
}
