/*
 * XREFs of ?get_DeltaScale@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z @ 0x180090940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionManipulation::Partner::get_DeltaScale(
        Windows::UI::Composition::CompositionManipulation::Partner *this,
        struct D2D_VECTOR_3F *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)&a2->x = 0LL;
  a2->z = 0.0;
  return result;
}
