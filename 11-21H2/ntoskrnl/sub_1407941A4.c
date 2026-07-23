/*
 * XREFs of sub_1407941A4 @ 0x1407941A4
 * Callers:
 *     sub_140791910 @ 0x140791910 (sub_140791910.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_140842C30 @ 0x140842C30 (sub_140842C30.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140793480 @ 0x140793480 (sub_140793480.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_1407941A4(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // esi
  unsigned int v5; // eax

  v2 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x7000 && (unsigned int)sub_14079422C(a1, v2) == -1 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetNextTagId");
    return *(unsigned int *)(a1 + 20);
  }
  v4 = sub_140793480(a1, v2);
  if ( !v4 )
    return *(unsigned int *)(a1 + 20);
  v5 = sub_14079422C(a1, v2);
  if ( (*(_DWORD *)(a1 + 1328) & 1) == 0 )
    v5 = (v5 + 1) & 0xFFFFFFFE;
  return v2 + v4 + v5;
}
