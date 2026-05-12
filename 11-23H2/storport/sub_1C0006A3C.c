/*
 * XREFs of sub_1C0006A3C @ 0x1C0006A3C
 * Callers:
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C0006430 @ 0x1C0006430 (sub_1C0006430.c)
 * Callees:
 *     sub_1C0006B40 @ 0x1C0006B40 (sub_1C0006B40.c)
 */

__int64 __fastcall sub_1C0006A3C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // cl
  __int64 result; // rax
  __int64 v7; // rax

  if ( *(_DWORD *)(a1 + 28) )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 88);
  if ( ((v4 >> 1) & 0x7FFFFFFF) >= *(_DWORD *)(a1 + 4) )
    return 1LL;
  if ( *(_BYTE *)(a1 + 37) && (*(_BYTE *)(a2 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(a1 + 36) && (*(_BYTE *)(a2 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(a1 + 24) > 0 )
    return 4LL;
  if ( *(_BYTE *)(a1 + 38) )
    return 5LL;
  if ( !*(_DWORD *)(a1 + 16) && !(unsigned int)(v4 / 0x100000000LL)
    || (v7 = sub_1C0006B40(a1), a2 == v7)
    || (*(_BYTE *)(v7 + 22) & 1) == 0
    || (result = 6LL, (*(_BYTE *)(a2 + 22) & 6) != 0) )
  {
    v5 = *(_BYTE *)(a2 + 22);
    if ( (v5 & 1) != 0 && (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) != 0 )
    {
      return 7LL;
    }
    else if ( !*(_BYTE *)(a1 + 39) || (result = 8LL, (v5 & 8) != 0) )
    {
      if ( (v5 & 0x10) != 0 )
        return 9LL;
      else
        return (v5 & 0x40) != 0 ? 0xA : 0;
    }
  }
  return result;
}
