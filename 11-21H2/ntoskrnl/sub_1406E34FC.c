/*
 * XREFs of sub_1406E34FC @ 0x1406E34FC
 * Callers:
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_140953B2C @ 0x140953B2C (sub_140953B2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E34FC(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  _QWORD *v4; // r11
  _QWORD *v5; // rax
  unsigned __int64 v6; // r10
  __int64 v7; // rcx

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = *(_QWORD **)(a1 + 128);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    if ( a3 )
      v7 = v5[4];
    else
      v7 = v5[5];
    if ( v7 == a2 )
    {
      v3 = 1;
      return v6 & -(__int64)(v3 != 0);
    }
    v5 = (_QWORD *)*v5;
  }
  return v6 & -(__int64)(v3 != 0);
}
