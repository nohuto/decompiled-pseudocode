/*
 * XREFs of sub_1800A4220 @ 0x1800A4220
 * Callers:
 *     sub_1800A4738 @ 0x1800A4738 (sub_1800A4738.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800A4554 @ 0x1800A4554 (sub_1800A4554.c)
 */

__int64 *__fastcall sub_1800A4220(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *i; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // r10
  __int64 *v12; // rsi
  __int64 *j; // r8
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  v3 = (__int64 *)a1;
  if ( (__int64 *)a1 != a2 )
  {
    v4 = (__int64 *)(a1 + 16);
    if ( (__int64 *)(a1 + 16) != a2 )
    {
      v5 = (__int64 *)a1;
      do
      {
        v6 = *v4;
        *v4 = 0LL;
        v15 = v6;
        v7 = v5[3];
        v5[3] = 0LL;
        v16 = v7;
        if ( (unsigned __int8)sub_1800A4554(a1, &v15, v3) )
        {
          for ( i = v4; i != v3; sub_180011020(v10, i) )
          {
            v10 = i;
            i -= 2;
          }
          v11 = v3;
        }
        else
        {
          v12 = v5;
          for ( j = v5; (unsigned __int8)sub_1800A4554(v8, &v15, j); j = v12 )
          {
            sub_180011020(v11, v12);
            v12 -= 2;
          }
        }
        sub_180011020(v11, &v15);
        a1 = v16;
        if ( v16 )
          sub_180010530(v16);
        v4 += 2;
        v5 += 2;
      }
      while ( v4 != a2 );
    }
  }
  return a2;
}
