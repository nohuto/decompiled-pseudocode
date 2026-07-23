/*
 * XREFs of sub_1405ED07C @ 0x1405ED07C
 * Callers:
 *     sub_1405ED158 @ 0x1405ED158 (sub_1405ED158.c)
 *     sub_1409BDA38 @ 0x1409BDA38 (sub_1409BDA38.c)
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405ED07C(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  _WORD *v3; // r9
  int v4; // kr00_4
  _WORD *v5; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 < 0x10000 )
  {
    v5 = *(_WORD **)(a1 + 40);
  }
  else
  {
    v3 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v3 >= v2 )
      return 0;
    v4 = a2 - 0x10000;
    a2 = (a2 - 0x10000) >> 31;
    *v3 = __SPAIR64__(a2, v4) / 1024 - 10240;
    v5 = v3 + 1;
    *(_QWORD *)(a1 + 40) = v3 + 1;
    LOWORD(a2) = __SPAIR64__(a2, v4) % 1024 - 9216;
  }
  if ( (unsigned __int64)v5 >= v2 )
    return 0;
  *v5 = a2;
  *(_QWORD *)(a1 + 40) = v5 + 1;
  return 1;
}
