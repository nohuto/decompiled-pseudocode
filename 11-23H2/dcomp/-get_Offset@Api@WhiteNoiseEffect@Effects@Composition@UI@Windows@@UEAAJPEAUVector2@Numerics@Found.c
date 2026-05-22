/*
 * XREFs of ?get_Offset@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z @ 0x180090620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::get_Offset(
        Windows::UI::Composition::Effects::WhiteNoiseEffect::Api *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)a2 = *((_QWORD *)this + 6);
  return result;
}
