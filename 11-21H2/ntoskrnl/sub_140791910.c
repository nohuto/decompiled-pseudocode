/*
 * XREFs of sub_140791910 @ 0x140791910
 * Callers:
 *     sub_140791640 @ 0x140791640 (sub_140791640.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 * Callees:
 *     sub_1407941A4 @ 0x1407941A4 (sub_1407941A4.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140791910(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v2 = a2;
  if ( !(_DWORD)a2 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    v5 = 12;
    return v5 < v4 ? v5 : 0;
  }
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x7000 )
  {
    v4 = sub_1407941A4(a1, v2);
    v5 = v2 + 6;
    return v5 < v4 ? v5 : 0;
  }
  return 0LL;
}
