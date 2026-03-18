/*
 * XREFs of SymCryptFdefIntToModElement @ 0x14040B76C
 * Callers:
 *     SymCryptIntToModElement @ 0x140400DE4 (SymCryptIntToModElement.c)
 * Callees:
 *     SymCryptFdefRawDivMod @ 0x14040B1B0 (SymCryptFdefRawDivMod.c)
 *     _guard_dispatch_icall_nop @ 0x14041AF50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptFdefIntToModElement(__int64 a1, _DWORD *a2, void *a3, _DWORD *a4, __int64 a5)
{
  SymCryptFdefRawDivMod((void *)(a1 + 32), *(_DWORD *)(a1 + 4), a2 + 16, 0LL, a3, a4);
  return (*(__int64 (__fastcall **)(_DWORD *, void *, _DWORD *, __int64))((char *)off_140006960
                                                                        + (*a2 & (unsigned int)g_SymCryptModFnsMask)))(
           a2,
           a3,
           a4,
           a5);
}
