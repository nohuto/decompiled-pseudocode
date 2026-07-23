/*
 * XREFs of sub_1407F15C0 @ 0x1407F15C0
 * Callers:
 *     sub_14036C210 @ 0x14036C210 (sub_14036C210.c)
 *     sub_1407F1308 @ 0x1407F1308 (sub_1407F1308.c)
 *     sub_1407F1400 @ 0x1407F1400 (sub_1407F1400.c)
 *     sub_140853D00 @ 0x140853D00 (sub_140853D00.c)
 *     sub_140853E30 @ 0x140853E30 (sub_140853E30.c)
 *     sub_14085DA10 @ 0x14085DA10 (sub_14085DA10.c)
 *     sub_1409A12C0 @ 0x1409A12C0 (sub_1409A12C0.c)
 *     sub_1409A13E0 @ 0x1409A13E0 (sub_1409A13E0.c)
 *     sub_1409A14A0 @ 0x1409A14A0 (sub_1409A14A0.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_1407F1648 @ 0x1407F1648 (sub_1407F1648.c)
 */

__int64 __fastcall sub_1407F15C0(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  ULONG v5; // esi
  void *v6; // rcx
  void *v7; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = *a1;
    v4 = (void *)a1[7];
    v5 = *(_DWORD *)(v3 + 24);
    if ( v4 )
    {
      *((_DWORD *)a1 + 12) = 0;
      sub_140346D64(v4, v5);
      a1[7] = 0LL;
    }
    v6 = (void *)a1[8];
    if ( v6 )
      sub_140346D64(v6, v5);
    v7 = (void *)a1[9];
    if ( v7 )
      sub_140346D64(v7, v5);
    if ( a1[10] )
      sub_1407F1648();
    sub_140346D64(a1, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
