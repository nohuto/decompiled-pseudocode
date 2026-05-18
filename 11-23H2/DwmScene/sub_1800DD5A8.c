/*
 * XREFs of sub_1800DD5A8 @ 0x1800DD5A8
 * Callers:
 *     sub_1800DE3C4 @ 0x1800DE3C4 (sub_1800DE3C4.c)
 * Callees:
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_1800DD4D4 @ 0x1800DD4D4 (sub_1800DD4D4.c)
 *     sub_1800DD754 @ 0x1800DD754 (sub_1800DD754.c)
 *     sub_1800DE1A4 @ 0x1800DE1A4 (sub_1800DE1A4.c)
 *     sub_1800DE3C4 @ 0x1800DE3C4 (sub_1800DE3C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DD5A8(__int64 a1, char *a2, char *a3)
{
  char **v6; // r12
  char *v7; // r14
  char *v8; // rax
  __int64 v9; // rsi
  char *v10; // rbx
  __int64 result; // rax
  char **v12; // rdx
  __int64 v13; // r8
  char *v14; // rcx
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h]
  char ***v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  v6 = *(char ***)a1;
  v7 = **(char ***)a1;
  while ( v7 != (char *)v6 )
  {
    if ( a2 == a3 )
    {
      v8 = (char *)*((_QWORD *)v7 + 1);
      *(_QWORD *)v8 = v6;
      v6[1] = v8;
      v9 = 0LL;
      do
      {
        v10 = *(char **)v7;
        result = sub_1800DD754(a1, v7);
        v7 = v10;
        ++v9;
      }
      while ( v10 != (char *)v6 );
      *(_QWORD *)(a1 + 8) -= v9;
      return result;
    }
    sub_18003212C(v7 + 16, a2 + 16);
    sub_1800DE3C4(v7 + 48, a2 + 48);
    v7 = *(char **)v7;
    a2 = *(char **)a2;
  }
  v17 = a1;
  v18 = 0LL;
  sub_1800DD4D4(&v17, a2, a3);
  v12 = *(char ***)a1;
  v13 = v18;
  if ( v18 )
  {
    v14 = v12[1];
    v15 = v20;
    *(_QWORD *)(v20 + 8) = v14;
    *(_QWORD *)v14 = v15;
    v16 = (char *)v19;
    *v19 = v12;
    v12[1] = v16;
    *(_QWORD *)(a1 + 8) += v13;
    v18 = 0LL;
  }
  return sub_1800DE1A4(&v17, v12);
}
