/*
 * XREFs of sub_140AB2168 @ 0x140AB2168
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB2608 @ 0x140AB2608 (sub_140AB2608.c)
 *     sub_140AB26C8 @ 0x140AB26C8 (sub_140AB26C8.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB304C @ 0x140AB304C (sub_140AB304C.c)
 * Callees:
 *     sub_140AB3290 @ 0x140AB3290 (sub_140AB3290.c)
 */

__int64 __fastcall sub_140AB2168(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  _BYTE *v5; // rdi
  __int64 result; // rax
  _BYTE *v7; // r9
  char v8; // cl

  v3 = *a3;
  if ( a2 )
  {
    *a3 = v3 + *(unsigned __int8 *)(a1 + 22);
    return 0LL;
  }
  v5 = (_BYTE *)(a1 + 26);
  result = sub_140AB3290(a1, a1 + 26, 1LL, a3);
  if ( (int)result >= 0 )
  {
    if ( (*v5 & 0xC0) == 0xC0 || (*v5 & 7) != 4 || (result = sub_140AB3290(a1, a1 + 27, 1LL, v7), (int)result >= 0) )
    {
      v8 = *v5 >> 6;
      if ( !v8 && ((*v5 & 7) == 5 || (*(_BYTE *)(a1 + 27) & 7) == 5) || v8 == 2 )
      {
        result = sub_140AB3290(a1, a1 + 28, 4LL, v7);
        if ( (int)result < 0 )
          return result;
      }
      else if ( v8 == 1 )
      {
        result = sub_140AB3290(a1, a1 + 28, 1LL, v7);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(a1 + 28) = *(char *)(a1 + 28);
      }
      *(_BYTE *)(a1 + 22) = *v7 - v3;
      return 0LL;
    }
  }
  return result;
}
