/*
 * XREFs of KeOrAffinityEx2 @ 0x14056C250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 */

__int64 __fastcall KeOrAffinityEx2(char *a1, _WORD *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return sub_1402FEC10(a1, a2, (_BYTE *)a3, v3);
}
