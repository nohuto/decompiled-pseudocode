/*
 * XREFs of sub_1403714E0 @ 0x1403714E0
 * Callers:
 *     sub_1403713DC @ 0x1403713DC (sub_1403713DC.c)
 * Callees:
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 *     sub_1403715C4 @ 0x1403715C4 (sub_1403715C4.c)
 *     sub_14037193C @ 0x14037193C (sub_14037193C.c)
 */

__int64 __fastcall sub_1403714E0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 956) - 16
    || (v10 = sub_1403715C4(a1 + 896, a2, a3, a4), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 528) )
        v11 = sub_140370C40(a1, v7, v6, v5);
      else
        v11 = sub_14034FED0(a1 + (*(unsigned int *)(a1 + 336) < v6 ? 512LL : 320LL), v7, v6, v6, v5);
    }
    else
    {
      v11 = sub_14037193C(a1 + 704, a2, a3, v5);
    }
    v10 = v11;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
