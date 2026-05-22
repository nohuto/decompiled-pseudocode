/*
 * XREFs of ?get_Point@Partner@CompositionHoverPointerSource@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_2F@@@Z @ 0x180090FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionHoverPointerSource::Partner::get_Point(
        Windows::UI::Composition::CompositionHoverPointerSource::Partner *this,
        struct D2D_VECTOR_2F *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
