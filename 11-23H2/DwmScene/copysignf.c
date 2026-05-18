/*
 * XREFs of copysignf @ 0x1800E3954
 * Callers:
 *     sub_18003C588 @ 0x18003C588 (sub_18003C588.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl copysignf(float Number, float Sign)
{
  return __imp_copysignf(Number, Sign);
}
