/*
 * XREFs of sub_14080C508 @ 0x14080C508
 * Callers:
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_14091A000 @ 0x14091A000 (sub_14091A000.c)
 * Callees:
 *     sub_14020B57C @ 0x14020B57C (sub_14020B57C.c)
 *     sub_14020B600 @ 0x14020B600 (sub_14020B600.c)
 */

int __fastcall sub_14080C508(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // r15
  __int64 i; // rbp
  unsigned __int64 v9; // rax
  __int64 j; // rcx
  __int64 v11; // rax
  ULONG_PTR v12; // r14
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v14) = 0;
  v7 = a1;
  for ( i = a3; i < a4; i += 4096LL )
  {
    if ( !a2[8] )
      break;
    a1 = a2[3];
    v12 = (i - a1) >> 12;
    if ( (*((_BYTE *)a2 + v12 + 72) & 0x10) != 0 )
    {
      sub_14020B600(a1, *(void ***)(v7 + 24), (void *)(i + a2[7] - a1), 0x1000uLL);
      *((_BYTE *)a2 + v12 + 72) &= ~0x10u;
      --a2[8];
    }
  }
  LODWORD(v9) = sub_14020B57C(
                  a1,
                  *(void ***)(v7 + 24),
                  (void *)(a3 + a2[7] - a2[3]),
                  a4 - a3,
                  0x80000001,
                  (ULONG *)&v14);
  for ( j = a3; j < a4; *((_BYTE *)a2 + v9 + 72) = 0 )
  {
    v11 = j;
    j += 4096LL;
    v9 = (unsigned __int64)(v11 - a2[3]) >> 12;
  }
  if ( a2[5] == a3 )
  {
    if ( a2[6] == a4 )
    {
      a2[5] = 0LL;
      a2[6] = 0LL;
    }
    else
    {
      a2[5] = a4;
    }
  }
  else if ( a2[6] == a4 )
  {
    a2[6] = a3;
  }
  return v9;
}
