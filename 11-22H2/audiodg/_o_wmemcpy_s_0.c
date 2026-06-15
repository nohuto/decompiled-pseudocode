/*
 * XREFs of _o_wmemcpy_s_0 @ 0x1400291F8
 * Callers:
 *     ?ConvertToBaseType@?$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z @ 0x1400562F8 (-ConvertToBaseType@-$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl o_wmemcpy_s_0(wchar_t *S1, rsize_t N1, const wchar_t *S2, rsize_t N)
{
  return wmemcpy_s(S1, N1, S2, N);
}
