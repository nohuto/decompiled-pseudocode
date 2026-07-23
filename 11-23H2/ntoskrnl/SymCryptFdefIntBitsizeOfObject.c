/*
 * XREFs of SymCryptFdefIntBitsizeOfObject @ 0x1404058A0
 * Callers:
 *     SymCryptIntBitsizeOfObject @ 0x1403F9498 (SymCryptIntBitsizeOfObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfObject(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 4) << 9);
}
