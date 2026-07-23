/*
 * XREFs of sub_140798D30 @ 0x140798D30
 * Callers:
 *     sub_1403B4AB0 @ 0x1403B4AB0 (sub_1403B4AB0.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140798D30(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // eax
  __int64 v5; // rcx

  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 )
    v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v3;
  if ( a3 != 1 && v3 == 72 )
    return 2147483682LL;
  *(_WORD *)(a2 + 52) = a3 | 0x20;
  if ( *(_QWORD *)(a1 + 800) || (a3 & 0x40) == 0 )
  {
    v5 = *(unsigned int *)(a2 + 48);
    if ( *(_DWORD *)a2 - (int)v5 > 0 )
      memset((void *)(a2 + v5), 255, *(_DWORD *)a2 - (int)v5);
  }
  if ( *(_DWORD *)(a2 + 48) == 72 )
    return 2147483682LL;
  else
    return 0LL;
}
