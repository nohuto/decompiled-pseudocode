/*
 * XREFs of sub_1409745FC @ 0x1409745FC
 * Callers:
 *     sub_140976790 @ 0x140976790 (sub_140976790.c)
 * Callees:
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1409C03F8 @ 0x1409C03F8 (sub_1409C03F8.c)
 */

__int64 __fastcall sub_1409745FC(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  int v6; // ebx
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 result; // rax
  unsigned int v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0;
  v6 = a3;
  v13 = 0;
  v8 = a4;
  if ( !a3 )
    return 0LL;
  v10 = a6;
  while ( 1 )
  {
    sub_1409C03F8(a5, *(_DWORD *)(a2 + 4 * v10), 34404, (unsigned int)&v12, (__int64)&v13);
    result = sub_140581D58(a1, v12, v13, 1, 0LL);
    if ( (int)result < 0 )
      break;
    a2 += 4 * v8;
    if ( !--v6 )
      return 0LL;
  }
  return result;
}
