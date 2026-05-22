/*
 * XREFs of ?HandlePropertyChange@CompositionObject@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@PEA_N@Z @ 0x18005C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C740 (-TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::HandlePropertyChange(
        Windows::UI::Composition::CompositionObject *this,
        const struct Windows::UI::Composition::AnimationValueData *a2,
        bool *a3)
{
  Windows::UI::Composition::ImplicitAnimationCollection *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  v6 = (Windows::UI::Composition::ImplicitAnimationCollection *)(*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *))(*(_QWORD *)this + 232LL))(this);
  if ( (*((_BYTE *)this + 32) & 1) == 0 )
    return 0LL;
  if ( !v6 )
    return 0LL;
  if ( (*((_BYTE *)this + 124) & 1) == 0 )
    return 0LL;
  *a3 = 0;
  v7 = Windows::UI::Composition::ImplicitAnimationCollection::TryPlayAnimation(v6, this, a2, a3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
    (const char *)(unsigned int)v7);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D2,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
    (const char *)v8);
  return v8;
}
