/*
 * XREFs of sub_14080E8D0 @ 0x14080E8D0
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140767538 @ 0x140767538 (sub_140767538.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_140767DF8 @ 0x140767DF8 (sub_140767DF8.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_14080EB6C @ 0x14080EB6C (sub_14080EB6C.c)
 */

__int64 __fastcall sub_14080E8D0(unsigned int **a1, unsigned int a2, char a3, char a4)
{
  unsigned int **v8; // rsi
  unsigned int *v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // rax
  _QWORD *j; // rbx
  __int64 v13; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  int v19; // edx
  int v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF

  Object[0] = 0LL;
  v21 = 0;
  v20 = 0;
  v8 = (unsigned int **)sub_140767538(a2);
  if ( !v8 )
    return 3221225626LL;
  v9 = *a1;
  for ( i = 0; i < **a1; v9 = *a1 )
  {
    v11 = i++;
    v9[6 * v11 + 8] &= ~1u;
  }
  v9[2] = 0;
  v22 = 0LL;
LABEL_5:
  while ( sub_1407667B0(a1, (int *)&v22, Object, &v20, &v21) )
  {
    if ( (!a3 || !v20) && !v21 )
    {
      for ( j = Object[0]; ; j = *(_QWORD **)(v17 + 32) )
      {
        if ( (unsigned int)sub_14080EB6C(a1, j) )
        {
          if ( j )
            sub_140767DF8(v8, (__int64)j, 2LL, 0);
          goto LABEL_5;
        }
        v15 = j[39];
        v16 = *(_QWORD *)(v15 + 40);
        if ( a4 )
        {
          sub_14076FBEC(*(_QWORD *)(v15 + 40), 0x80000);
          v18 = *(_DWORD *)(v16 + 396);
          if ( (v18 & 0x10) != 0 )
          {
            if ( (v18 & 0x2000) != 0 && *(_DWORD *)(v16 + 404) == 47 )
            {
              v19 = 3;
            }
            else
            {
              if ( a2 != 4 )
                goto LABEL_17;
              v19 = 12;
            }
            sub_1402DCF44(j, v19, 1, 0LL, 0LL, 0LL, 0LL);
          }
        }
LABEL_17:
        v17 = *(_QWORD *)(v16 + 16);
        if ( !v17 )
          goto LABEL_5;
      }
    }
  }
  v22 = 0LL;
  while ( sub_1407667B0(v8, (int *)&v22, Object, 0LL, 0LL) )
    sub_1402DCF44(Object[0], 9, 0, v13, 0LL, 0LL, 0LL);
  sub_140767600(v8);
  return 0LL;
}
