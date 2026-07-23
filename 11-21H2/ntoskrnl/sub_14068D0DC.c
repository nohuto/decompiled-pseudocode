/*
 * XREFs of sub_14068D0DC @ 0x14068D0DC
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068F548 @ 0x14068F548 (sub_14068F548.c)
 *     sub_1406DEA6C @ 0x1406DEA6C (sub_1406DEA6C.c)
 */

__int64 __fastcall sub_14068D0DC(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // ebp
  void *v13; // rax
  void *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // r15

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( a3 )
  {
    a2 = (unsigned int)a2;
    v8 = (unsigned int)a2;
    v9 = (a3 >> 12) - 1;
  }
  else
  {
    v13 = (void *)sub_14042A5E0(12288LL, 0LL);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1073741801;
    memset(v13, 0, 0x3000uLL);
    a2 = v5;
    v15 = (_QWORD *)(632 * v5 + a1 + 296);
    v8 = v5;
    *(_QWORD *)(632 * v5 + a1 + 288) = v15;
    *v15 = v14;
    v9 = 0;
  }
  v10 = v9 >> 9;
  v11 = ((a4 >> 12) - 1) >> 9;
  if ( v11 <= v10 )
    return v4;
  if ( !v10 )
  {
    v16 = 632 * a2;
    if ( *(_QWORD *)(632 * a2 + a1 + 288) == 632 * a2 + a1 + 296 )
    {
      v17 = (_QWORD *)sub_14042A5E0(0x2000LL, 0LL);
      v18 = v17;
      if ( v17 )
      {
        memset(v17, 0, 0x2000uLL);
        *v18 = *(_QWORD *)(v16 + a1 + 296);
        *(_QWORD *)(v16 + a1 + 288) = v18;
        goto LABEL_11;
      }
      return (unsigned int)-1073741801;
    }
  }
LABEL_11:
  if ( !(unsigned __int8)sub_14068F548(a1, *(_QWORD *)(632 * v8 + a1 + 288), v10 + 1, v11) )
  {
    v4 = -1073741801;
    sub_1406DEA6C(a1, *(_QWORD *)(632 * v8 + a1 + 288), v10 + 1, v11);
  }
  return v4;
}
