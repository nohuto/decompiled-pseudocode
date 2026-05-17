/*
 * XREFs of sub_180110588 @ 0x180110588
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180110588(__int64 a1, __int64 a2)
{
  char v2; // of
  double v3; // st7

  if ( !v2 )
    JUMPOUT(0x180110605LL);
  *(_WORD *)(a2 - 126) = (__int16)v3;
  return RtlpWow64CtxFromAmd64(a1);
}
