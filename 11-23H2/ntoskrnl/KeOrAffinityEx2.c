/*
 * XREFs of KeOrAffinityEx2 @ 0x14056F990
 * Callers:
 *     <none>
 * Callees:
 *     KiOrAffinityEx @ 0x1402C2D40 (KiOrAffinityEx.c)
 */

__int64 __fastcall KeOrAffinityEx2(char *a1, _WORD *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return KiOrAffinityEx(a1, a2, (_BYTE *)a3, v3);
}
