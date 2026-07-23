/*
 * XREFs of KeAndAffinityEx2 @ 0x14056C0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 */

__int64 __fastcall KeAndAffinityEx2(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = 0;
  if ( a3 )
    v3 = *(_WORD *)(a3 + 2);
  return sub_1402FF140(a1, a2, (_BYTE *)a3, v3);
}
