/*
 * XREFs of sub_14074B21C @ 0x14074B21C
 * Callers:
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     sub_140749A80 @ 0x140749A80 (sub_140749A80.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 */

__int64 __fastcall sub_14074B21C(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[36]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v5, 0, sizeof(v5));
  v5[0] = 2843;
  result = sub_14074CA9C(a1, (unsigned int)v5, -1073741637, 0, (__int64)a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
