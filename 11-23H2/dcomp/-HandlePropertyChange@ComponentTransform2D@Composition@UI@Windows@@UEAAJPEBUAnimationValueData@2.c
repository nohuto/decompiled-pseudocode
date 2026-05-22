/*
 * XREFs of ?HandlePropertyChange@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@PEA_N@Z @ 0x180195870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform2D::HandlePropertyChange(
        Windows::UI::Composition::ComponentTransform2D *this,
        const struct Windows::UI::Composition::AnimationValueData *a2,
        bool *a3)
{
  __int64 v3; // rcx

  *a3 = 0;
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct Windows::UI::Composition::AnimationValueData *))(*(_QWORD *)v3 + 224LL))(
             v3,
             a2);
  else
    return 0LL;
}
