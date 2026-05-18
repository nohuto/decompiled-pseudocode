/*
 * XREFs of sub_180089BB0 @ 0x180089BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18008996C @ 0x18008996C (sub_18008996C.c)
 */

__int64 *__fastcall sub_180089BB0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = sub_18008996C(a3, &v8);
  v5 = *v4;
  *v4 = 0LL;
  *a2 = v5;
  v6 = v4[1];
  v4[1] = 0LL;
  a2[1] = v6;
  if ( v9 )
    sub_180010530(v9);
  return a2;
}
