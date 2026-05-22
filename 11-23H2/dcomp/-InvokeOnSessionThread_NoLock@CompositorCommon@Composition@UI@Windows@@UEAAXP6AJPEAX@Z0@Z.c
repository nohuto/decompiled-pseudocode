/*
 * XREFs of ?InvokeOnSessionThread_NoLock@CompositorCommon@Composition@UI@Windows@@UEAAXP6AJPEAX@Z0@Z @ 0x180080B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::InvokeOnSessionThread_NoLock(
        Windows::UI::Composition::CompositorCommon *this,
        int (*a2)(void *),
        void *a3)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    Microsoft::WRL2::FailFast::Do();
  v3 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *), void *, __int64))(**((_QWORD **)this + 15) + 152LL))(
         *((_QWORD *)this + 15),
         a2,
         a3,
         4LL);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3AD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v3,
      v4);
}
