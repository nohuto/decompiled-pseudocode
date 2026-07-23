/*
 * XREFs of sub_140299D74 @ 0x140299D74
 * Callers:
 *     sub_140299A64 @ 0x140299A64 (sub_140299A64.c)
 * Callees:
 *     sub_140299BF0 @ 0x140299BF0 (sub_140299BF0.c)
 *     sub_1403B6C24 @ 0x1403B6C24 (sub_1403B6C24.c)
 */

__int64 __fastcall sub_140299D74(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax
  char v4; // al
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 80) == 0;
  v5 = 0;
  if ( v1 )
  {
    result = sub_140299BF0(a1, (_BYTE *)(a1 + 65));
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0
    || (*(_BYTE *)(a1 + 65) & 7) != 4
    || (result = sub_140299BF0(a1, (_BYTE *)(a1 + 66)), (int)result >= 0) )
  {
    v4 = *(_BYTE *)(a1 + 65) >> 6;
    if ( !v4 && (*(_BYTE *)(a1 + 65) & 7) == 5 || v4 == 2 )
    {
      result = sub_1403B6C24(a1, 4LL, a1 + 68);
      if ( (int)result < 0 )
        return result;
      return 0LL;
    }
    if ( v4 != 1 )
      return 0LL;
    result = sub_1403B6C24(a1, 1LL, &v5);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 68) = v5;
      return 0LL;
    }
  }
  return result;
}
