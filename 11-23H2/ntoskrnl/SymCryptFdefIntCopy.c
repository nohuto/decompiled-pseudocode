/*
 * XREFs of SymCryptFdefIntCopy @ 0x140405980
 * Callers:
 *     SymCryptIntCopy @ 0x1403F94F8 (SymCryptIntCopy.c)
 *     SymCryptFdefIntToDivisor @ 0x14040395C (SymCryptFdefIntToDivisor.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

void *__fastcall SymCryptFdefIntCopy(__int64 a1, __int64 a2)
{
  void *result; // rax

  if ( a1 != a2 )
    return memmove((void *)(a2 + 32), (const void *)(a1 + 32), (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  return result;
}
