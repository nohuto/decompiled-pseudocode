/*
 * XREFs of sub_1405F2F0C @ 0x1405F2F0C
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 * Callees:
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 */

unsigned __int64 __fastcall sub_1405F2F0C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // edi
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0;
  v5 = a3;
  v7 = sub_1405F30C0(a1, a2, a3, v11);
  result = -1LL;
  if ( v7 != -1 )
  {
    if ( a4 )
      *a4 = v7;
    if ( v11[0] )
    {
      v9 = a2 + v7;
      v10 = v9 + 16;
      if ( (v5 & 0x10000000) == 0 )
        v10 = v9;
      return (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
