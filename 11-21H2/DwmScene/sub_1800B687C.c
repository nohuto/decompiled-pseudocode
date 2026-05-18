/*
 * XREFs of sub_1800B687C @ 0x1800B687C
 * Callers:
 *     sub_1800B706C @ 0x1800B706C (sub_1800B706C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B6D70 @ 0x1800B6D70 (sub_1800B6D70.c)
 */

__int64 *__fastcall sub_1800B687C(__int64 *a1, __int64 *a2)
{
  __int64 *i; // rdi
  __int64 v5; // r12
  __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rbx
  _QWORD *v14; // r10
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v5 = *i;
      v6 = i + 1;
      v7 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      *((_QWORD *)&v21 + 1) = v7;
      *(_QWORD *)&v21 = v5;
      if ( (unsigned __int8)sub_1800B6D70(a1, &v21, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v6 -= 2;
            v9 = *v6;
            v10 = *(v6 - 1);
            *(v6 - 1) = 0LL;
            *v6 = 0LL;
            v22[0] = v6[1];
            v11 = v6[2];
            v6[1] = v10;
            v22[1] = v11;
            v6[2] = v9;
            sub_180010910((__int64)v22);
          }
          while ( v6 - 1 != a1 );
        }
        v12 = v23;
        v23[0] = *a1;
        v23[1] = a1[1];
        *a1 = v5;
        a1[1] = v7;
      }
      else
      {
        v13 = i - 2;
        if ( (unsigned __int8)sub_1800B6D70(v8, &v21, i - 2) )
        {
          do
          {
            v16 = *v13;
            *v13 = 0LL;
            v17 = v13[1];
            v13[1] = 0LL;
            v24[0] = *v14;
            v18 = v14[1];
            *v14 = v16;
            v24[1] = v18;
            v14[1] = v17;
            sub_180010910((__int64)v24);
            v13 -= 2;
          }
          while ( (unsigned __int8)sub_1800B6D70(v19, &v21, v13) );
          v15 = *v14;
        }
        v12 = v25;
        v25[1] = v14[1];
        v25[0] = v15;
        *v14 = v5;
        v14[1] = v7;
      }
      v21 = 0LL;
      sub_180010910((__int64)v12);
      sub_180010910((__int64)&v21);
    }
  }
  return a2;
}
