/*
 * XREFs of SymCryptFdefIntSetValue @ 0x140405AFC
 * Callers:
 *     SymCryptIntSetValue @ 0x1403F967C (SymCryptIntSetValue.c)
 * Callees:
 *     SymCryptFdefRawSetValue @ 0x140405C98 (SymCryptFdefRawSetValue.c)
 */

__int64 __fastcall SymCryptFdefIntSetValue(int a1, int a2, int a3, __int64 a4)
{
  return SymCryptFdefRawSetValue(a1, a2, a3, (int)a4 + 32, *(_DWORD *)(a4 + 4));
}
