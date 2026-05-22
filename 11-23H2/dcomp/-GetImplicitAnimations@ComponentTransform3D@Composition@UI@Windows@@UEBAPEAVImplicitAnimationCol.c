/*
 * XREFs of ?GetImplicitAnimations@ComponentTransform3D@Composition@UI@Windows@@UEBAPEAVImplicitAnimationCollection@234@XZ @ 0x180086C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

struct Windows::UI::Composition::ImplicitAnimationCollection *__fastcall Windows::UI::Composition::ComponentTransform3D::GetImplicitAnimations(
        Windows::UI::Composition::ComponentTransform3D *this)
{
  __int64 v1; // rcx
  struct Windows::UI::Composition::ImplicitAnimationCollection *result; // rax

  v1 = *((_QWORD *)this + 35);
  result = 0LL;
  if ( v1 )
    return (struct Windows::UI::Composition::ImplicitAnimationCollection *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
  return result;
}
