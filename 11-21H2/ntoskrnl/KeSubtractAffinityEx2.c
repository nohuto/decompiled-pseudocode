/*
 * XREFs of KeSubtractAffinityEx2 @ 0x14056C2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 */

__int64 __fastcall KeSubtractAffinityEx2(_WORD *a1, char *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return sub_1402FEDA0(a1, a2, (_BYTE *)a3, v3);
}
