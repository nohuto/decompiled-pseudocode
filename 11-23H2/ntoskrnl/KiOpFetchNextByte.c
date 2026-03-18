/*
 * XREFs of KiOpFetchNextByte @ 0x14030E6EC
 * Callers:
 *     KiOpDecodeModRM @ 0x14030CBFC (KiOpDecodeModRM.c)
 *     KiOpDecode @ 0x14030E584 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x14030E7B8 (KiOpLocateDecodeEntry.c)
 *     KiOpFetchBytes @ 0x1403B6038 (KiOpFetchBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpFetchNextByte(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 == *(_BYTE **)(a1 + 8) )
    return 3221225473LL;
  *a2 = *v2;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}
