/*
 * XREFs of sub_180086C18 @ 0x180086C18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ImplicitAnimationCollection *__fastcall sub_180086C18(
        Windows::UI::Composition::ComponentTransform3D *a1)
{
  char v1; // of
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  double v4; // st7

  if ( !v1 )
    JUMPOUT(0x180086BEBLL);
  *((float *)a1 + 2 * (_QWORD)v3) = v4;
  *v2 = *v3;
  return Windows::UI::Composition::ComponentTransform3D::GetImplicitAnimations(a1);
}
