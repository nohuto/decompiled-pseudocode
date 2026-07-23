/*
 * XREFs of sub_1405C7638 @ 0x1405C7638
 * Callers:
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 *     sub_1405C7A38 @ 0x1405C7A38 (sub_1405C7A38.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 *     sub_1405C8420 @ 0x1405C8420 (sub_1405C8420.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 */

__int64 __fastcall sub_1405C7638(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // edi
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rsi
  int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v10 = 0;
  if ( !a6 )
    return 0LL;
  v14 = a7 + 8;
  v15 = a10;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 - 8);
    if ( v16 == -1 )
    {
      result = sub_1405C7798(a1, a2, a4, a5, a3, v14, a8, a9, v15);
    }
    else if ( v16 == *(_DWORD *)(a1 + 36) )
    {
      result = sub_1405C8420(a1, a2, a4, a5, v14, a8);
    }
    else
    {
      v18 = sub_140348800(v16);
      if ( (int)sub_1405C8D78(v18, a10, v14) >= 0 )
        result = *(_BYTE *)(qword_140D068A8 + 12)
              && *(_DWORD *)(344LL * *(unsigned int *)(v18 + 33660) + *(_QWORD *)(v18 + 33600) + 1384) > a4
               ? 2147483650LL
               : 0LL;
      else
        result = 2147483653LL;
      v15 = a10;
    }
    if ( result )
      break;
    a3 = v19;
    ++v10;
    v14 += 24LL;
    if ( v10 >= a6 )
      return 0LL;
  }
  return result;
}
