/*
 * XREFs of sub_1405F2650 @ 0x1405F2650
 * Callers:
 *     sub_1405F2400 @ 0x1405F2400 (sub_1405F2400.c)
 *     sub_1405F24B0 @ 0x1405F24B0 (sub_1405F24B0.c)
 *     sub_1405F26CC @ 0x1405F26CC (sub_1405F26CC.c)
 * Callees:
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_1405F2650(ULONG_PTR a1, __int64 a2, int a3, char a4)
{
  int v7; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v7 = *(_DWORD *)(a2 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(a2 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        sub_1405F1BBC(3, a1, a2 - 16, 0LL, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v7);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
