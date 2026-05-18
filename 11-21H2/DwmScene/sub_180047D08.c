/*
 * XREFs of sub_180047D08 @ 0x180047D08
 * Callers:
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 *     sub_180047E60 @ 0x180047E60 (sub_180047E60.c)
 *     sub_1800A8FEC @ 0x1800A8FEC (sub_1800A8FEC.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F9D04 @ 0x1800F9D04 (sub_1800F9D04.c)
 *     sub_1800FA768 @ 0x1800FA768 (sub_1800FA768.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180044708 @ 0x180044708 (sub_180044708.c)
 */

__int64 __fastcall sub_180047D08(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
  if ( v5 >= a2 )
  {
    result = 0LL;
    v9 = (v3 - *(_QWORD *)a1 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v9 = 0LL;
    if ( v9 )
    {
      result = a3;
      memset64(*(void **)a1, a3, v9);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
    v6 = a2;
    v7 = (__int64 *)sub_180011088(8 * a2);
    if ( v5 )
      sub_180010884(*(char **)a1, 8 * v5);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = &v7[v6];
    *(_QWORD *)(a1 + 16) = &v7[v6];
    return sub_180044708(v7, &v7[v6], (__int64 *)&v10);
  }
  return result;
}
