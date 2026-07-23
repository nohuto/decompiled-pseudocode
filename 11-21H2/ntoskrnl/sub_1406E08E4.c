/*
 * XREFs of sub_1406E08E4 @ 0x1406E08E4
 * Callers:
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406E08E4(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // cx
  _WORD *v3; // rdx
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 8) == *((_QWORD *)qword_140D3CB10 + 1) )
  {
    v2 = *a2;
    if ( *a2 )
    {
      v3 = (_WORD *)*((_QWORD *)a2 + 1);
      if ( ((*v3 - 65) & 0xFFDF) == 0 && (v2 <= 2u || v3[1] == 92) )
        return 1;
    }
  }
  return result;
}
