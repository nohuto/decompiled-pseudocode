/*
 * XREFs of sub_180020E2C @ 0x180020E2C
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_180078CD0 @ 0x180078CD0 (sub_180078CD0.c)
 *     sub_180078F40 @ 0x180078F40 (sub_180078F40.c)
 *     sub_180079180 @ 0x180079180 (sub_180079180.c)
 *     sub_1800F5CC0 @ 0x1800F5CC0 (sub_1800F5CC0.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001F58C @ 0x18001F58C (sub_18001F58C.c)
 *     sub_18001F958 @ 0x18001F958 (sub_18001F958.c)
 */

__int64 *__fastcall sub_180020E2C(_QWORD *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  char *v8; // r9
  __int64 v9; // rbx

  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v5 = a4;
  v6 = a1[2];
  if ( v6 < a3 )
  {
    sub_18001F58C();
    JUMPOUT(0x180020EB6LL);
  }
  v7 = v6 - a3;
  if ( v7 < a4 )
    v5 = v7;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v8 = (char *)a1 + 2 * a3;
  if ( v5 > 7 )
  {
    sub_18001F958(a2, v5, a3, v8);
  }
  else
  {
    v9 = 2 * v5;
    a2[2] = v5;
    memmove(a2, v8, 2 * v5);
    *(_WORD *)((char *)a2 + v9) = 0;
  }
  return a2;
}
