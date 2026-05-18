/*
 * XREFs of sub_180084078 @ 0x180084078
 * Callers:
 *     sub_18008467C @ 0x18008467C (sub_18008467C.c)
 * Callees:
 *     sub_180081650 @ 0x180081650 (sub_180081650.c)
 *     sub_180081F38 @ 0x180081F38 (sub_180081F38.c)
 *     sub_1800841A0 @ 0x1800841A0 (sub_1800841A0.c)
 *     sub_180085CCC @ 0x180085CCC (sub_180085CCC.c)
 */

__int64 __fastcall sub_180084078(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v9 = 0xCCCCCCCCCCCCCCCDuLL * v6;
  if ( v9 <= v8 )
  {
    i = (_QWORD *)(v7 + 40 * v9);
    sub_1800841A0(a2, a3);
    v13 = a1[1];
    v12 = (__int64)i;
  }
  else
  {
    if ( v9 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v7) >> 3) )
    {
      sub_180085CCC(a1, v9);
      v8 = 0LL;
    }
    v10 = (_QWORD *)(a2 + 40 * v8);
    sub_1800841A0(a2, v10);
    for ( i = (_QWORD *)a1[1]; ; i += 5 )
    {
      v12 = (__int64)i;
      if ( v10 == a3 )
        break;
      sub_180081F38(i, v10);
      v10 += 5;
    }
    v13 = (__int64)i;
  }
  result = sub_180081650(v12, v13);
  a1[1] = (__int64)i;
  return result;
}
