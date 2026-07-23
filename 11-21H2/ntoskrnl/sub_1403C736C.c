/*
 * XREFs of sub_1403C736C @ 0x1403C736C
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1403C6E24 @ 0x1403C6E24 (sub_1403C6E24.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 */

unsigned __int64 __fastcall sub_1403C736C(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // r8d
  int v15; // [rsp+70h] [rbp+18h]

  v15 = a3;
  v6 = 13;
  if ( a2 != 9 )
    v6 = a2;
  v8 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v9 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v9 = a1 >> 9;
  v10 = sub_14026B32C(v9, v6, a3);
  v11 = v10;
  if ( v10 )
  {
    v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 3 - (a2 != 12);
    if ( !v15 )
      v13 = 7 - (a2 != 12);
    if ( (unsigned int)sub_14026DC5C(v12, v12 + 8 * (v8 - 1), v13, a2, a4)
      && (a1 == v8 || (unsigned int)sub_14026DC5C(v12 + 8 * v8, v12 + 8 * (a1 - 1), a2 == 12, a2, a4)) )
    {
      return v11;
    }
    sub_14026DAB0(v11, v11 + (v9 << 21), v6);
  }
  return 0LL;
}
