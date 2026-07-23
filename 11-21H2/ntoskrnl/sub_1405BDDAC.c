/*
 * XREFs of sub_1405BDDAC @ 0x1405BDDAC
 * Callers:
 *     sub_1405BD580 @ 0x1405BD580 (sub_1405BD580.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_1405BDF38 @ 0x1405BDF38 (sub_1405BDF38.c)
 */

void __fastcall sub_1405BDDAC(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdx
  bool v17; // zf
  bool i; // zf

  if ( a3 )
  {
    v3 = a2 & 0x3FFFFFFFFFFC0000LL;
    v4 = a3;
    v5 = a2;
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 )
      {
        v8 = v3 & 0x3FFFFFFFFFFFFFFFLL;
        do
        {
          v9 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          if ( v8 >= v9 )
          {
            if ( v8 < *(_QWORD *)(v7 + 32) + v9 )
              break;
            v7 = *(_QWORD *)(v7 + 8);
          }
          else
          {
            v7 = *(_QWORD *)v7;
          }
        }
        while ( v7 );
      }
      v10 = (unsigned __int64 *)(v7 + 32);
      v11 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v12 = v4;
      if ( v11 + *(_QWORD *)(v7 + 32) - v5 <= v4 )
        v12 = v11 + *(_QWORD *)(v7 + 32) - v5;
      RtlClearBitsEx(v7 + 32, v5 - v11, v12);
      *(_QWORD *)(v7 + 24) &= ~0x8000000000000000uLL;
      v13 = *v10;
      if ( !*v10 )
        goto LABEL_26;
      if ( v13 <= 1 )
        break;
      v14 = *(__int64 **)(v7 + 40);
      v15 = *v14;
      v16 = &v14[(v13 - 1) >> 6];
      if ( v14 != v16 )
      {
        for ( i = v15 == 0; i; i = *v14 == 0 )
        {
          if ( ++v14 == v16 )
          {
            v17 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v13 - 1)) & *v14) == 0;
            goto LABEL_24;
          }
        }
        goto LABEL_26;
      }
      v17 = (v15 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v13))) == 0;
LABEL_24:
      if ( v17 )
        goto LABEL_25;
LABEL_26:
      v5 += v12;
      v3 ^= (v5 ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
      v4 -= v12;
      if ( !v4 )
        return;
    }
    if ( v13 != 1 || _bittest64(*(const signed __int64 **)(v7 + 40), 0) )
      goto LABEL_26;
LABEL_25:
    RtlAvlRemoveNode(a1, (unsigned __int64 *)v7);
    sub_1405BDF38((PVOID)v7);
    goto LABEL_26;
  }
}
