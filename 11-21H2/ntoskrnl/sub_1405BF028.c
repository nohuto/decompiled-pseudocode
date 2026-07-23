/*
 * XREFs of sub_1405BF028 @ 0x1405BF028
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_1403D5CAC @ 0x1403D5CAC (sub_1403D5CAC.c)
 */

__int64 __fastcall sub_1405BF028(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int64 *v8; // r13
  _QWORD *v9; // rdi
  bool v10; // bp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  unsigned __int64 *v16; // rbx
  const signed __int64 *v17; // r9
  unsigned __int64 v18; // rcx
  __int64 *v19; // r8
  __int64 v20; // r10
  __int64 *v21; // rdx
  bool v22; // zf
  bool i; // zf
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-30h]
  unsigned __int64 *v28; // [rsp+90h] [rbp+18h]

  v28 = a3;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v5 = *(_QWORD *)(a2 + 40);
  v6 = 0;
  v25 = v4;
  v27 = v5;
  v26 = 0x40000LL;
  if ( !v3 )
    return v6;
  v8 = (unsigned __int64 *)(a1 + 24);
  do
  {
    v9 = (_QWORD *)*v8;
    v10 = 0;
    if ( !*v8 )
    {
LABEL_7:
      if ( a3 )
      {
        v14 = (_QWORD *)*a3;
        if ( *a3 )
        {
          do
          {
            v15 = v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
          RtlAvlRemoveNode(a3, v15);
          v15[3] = v4 & 0x3FFFFFFFFFFFFFFFLL;
          RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, v15);
          goto LABEL_11;
        }
      }
      RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, (_QWORD *)a2);
      goto LABEL_35;
    }
    v11 = v4 & 0x3FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v12 = v9[3] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v11 < v12 )
      {
        v13 = (_QWORD *)*v9;
        if ( !*v9 )
          goto LABEL_7;
        goto LABEL_21;
      }
      if ( v11 < v9[4] + v12 )
        break;
      v13 = (_QWORD *)v9[1];
      if ( !v13 )
      {
        v10 = 1;
        goto LABEL_7;
      }
LABEL_21:
      v9 = v13;
    }
    v15 = v9;
LABEL_11:
    v16 = v15 + 4;
    sub_1403D5CAC(v15 + 4, &v26);
    v17 = v15 + 3;
    if ( !_bittest64((const signed __int64 *)(a2 + 24), 0x3Eu) || !_bittest64(v17, 0x3Eu) )
      *v17 &= ~0x4000000000000000uLL;
    v18 = *v16;
    if ( *v16 )
    {
      if ( v18 > 1 )
      {
        v19 = (__int64 *)v15[5];
        v20 = *v19;
        v21 = &v19[(v18 - 1) >> 6];
        if ( v19 == v21 )
        {
          v22 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18)) & v20) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18);
LABEL_31:
          if ( v22 )
LABEL_32:
            *v17 |= 0x8000000000000000uLL;
        }
        else
        {
          for ( i = v20 == -1; i; i = *v19 == -1 )
          {
            if ( ++v19 == v21 )
            {
              v22 = (*v19 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v18 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v18 - 1);
              goto LABEL_31;
            }
          }
        }
      }
      else if ( v18 == 1 && _bittest64((const signed __int64 *)v15[5], 0) )
      {
        goto LABEL_32;
      }
    }
    v5 = v27;
    v6 = 1;
    v4 = v25;
LABEL_35:
    a3 = v28;
    v5 += 0x8000LL;
    v27 = v5;
    v4 ^= (v4 ^ (v4 + 0x40000)) & 0x3FFFFFFFFFFFFFFFLL;
    v25 = v4;
    v3 -= 0x40000LL;
  }
  while ( v3 );
  return v6;
}
