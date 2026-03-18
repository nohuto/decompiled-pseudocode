/*
 * XREFs of KiOpDecodeModRM @ 0x140299D74
 * Callers:
 *     KiOpDecode @ 0x140299A64 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x140299BF0 (KiOpFetchNextByte.c)
 *     KiOpFetchBytes @ 0x1403B6C24 (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpDecodeModRM(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax
  char v4; // al
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 80) == 0;
  v5 = 0;
  if ( v1 )
  {
    result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 65));
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0
    || (*(_BYTE *)(a1 + 65) & 7) != 4
    || (result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 66)), (int)result >= 0) )
  {
    v4 = *(_BYTE *)(a1 + 65) >> 6;
    if ( !v4 && (*(_BYTE *)(a1 + 65) & 7) == 5 || v4 == 2 )
    {
      result = KiOpFetchBytes(a1, 4LL, a1 + 68);
      if ( (int)result < 0 )
        return result;
      return 0LL;
    }
    if ( v4 != 1 )
      return 0LL;
    result = KiOpFetchBytes(a1, 1LL, &v5);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 68) = v5;
      return 0LL;
    }
  }
  return result;
}
