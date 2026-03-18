/*
 * XREFs of KiOpFetchBytes @ 0x1403B6038
 * Callers:
 *     KiOpDecodeModRM @ 0x14030CBFC (KiOpDecodeModRM.c)
 *     KiOpDecode @ 0x14030E584 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x14030E6EC (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, int a2, _BYTE *a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = KiOpFetchNextByte(a1, a3);
    if ( (int)result < 0 )
      break;
    ++a3;
    if ( !--a2 )
      return 0LL;
  }
  return result;
}
