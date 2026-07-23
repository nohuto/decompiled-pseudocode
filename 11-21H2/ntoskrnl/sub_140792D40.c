/*
 * XREFs of sub_140792D40 @ 0x140792D40
 * Callers:
 *     sub_14078EE18 @ 0x14078EE18 (sub_14078EE18.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 *     sub_140A1311C @ 0x140A1311C (sub_140A1311C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_1407941A4 @ 0x1407941A4 (sub_1407941A4.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140792D40(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // edi
  unsigned int v7; // eax

  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x7000 )
  {
    v6 = sub_1407941A4(a1, v4);
LABEL_4:
    v7 = sub_1407941A4(a1, a3);
    return v7 < v6 ? v7 : 0;
  }
  sub_1406E0C3C(1LL, (__int64)"SdbGetNextChild");
  return 0LL;
}
