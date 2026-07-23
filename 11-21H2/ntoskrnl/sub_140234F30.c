/*
 * XREFs of sub_140234F30 @ 0x140234F30
 * Callers:
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140234F30(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 19);
  if ( (result & 2) != 0 )
  {
    --*(_BYTE *)(a2 + 92);
    *(_BYTE *)(a1 + 19) &= ~2u;
    result = *(_BYTE *)(a1 + 19);
  }
  if ( (result & 4) != 0 )
  {
    *(_DWORD *)(a2 + 92) ^= ((unsigned __int16)*(_DWORD *)(a2 + 92) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(a2 + 92) >> 8)
                                                                                        - 1) << 8)) & 0x7F00;
    result = *(_BYTE *)(a1 + 19) & 0xFB;
    *(_BYTE *)(a1 + 19) = result;
  }
  return result;
}
