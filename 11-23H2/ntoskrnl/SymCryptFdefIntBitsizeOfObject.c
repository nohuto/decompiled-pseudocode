/*
 * XREFs of SymCryptFdefIntBitsizeOfObject @ 0x1404056C0
 * Callers:
 *     SymCryptIntBitsizeOfObject @ 0x1403F92B8 (SymCryptIntBitsizeOfObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfObject(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 4) << 9);
}
