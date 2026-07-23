/*
 * XREFs of sub_14064ED40 @ 0x14064ED40
 * Callers:
 *     sub_14064D880 @ 0x14064D880 (sub_14064D880.c)
 *     sub_14064D8A0 @ 0x14064D8A0 (sub_14064D8A0.c)
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 * Callees:
 *     sub_1403CA20C @ 0x1403CA20C (sub_1403CA20C.c)
 */

__int64 __fastcall sub_14064ED40(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v5 = (__int64 *)&v8;
  v9 = 0LL;
  if ( a5 )
    v5 = a5;
  v8 = 0LL;
  result = sub_1403CA20C(a2, a1, a3, a2, v7, v5);
  v5[2] = 0LL;
  return result;
}
