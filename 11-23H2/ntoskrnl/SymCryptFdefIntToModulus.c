/*
 * XREFs of SymCryptFdefIntToModulus @ 0x1404040CC
 * Callers:
 *     SymCryptIntToModulus @ 0x1403F9770 (SymCryptIntToModulus.c)
 * Callees:
 *     SymCryptIntToDivisor @ 0x1403F9724 (SymCryptIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x140403F70 (SymCryptFdefDecideModulusType.c)
 *     _guard_dispatch_icall_nop @ 0x14041A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptFdefIntToModulus(__int64 a1, _DWORD *a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // bl

  v6 = a4;
  a2[3] = a4;
  SymCryptIntToDivisor(a1, (_DWORD)a2 + 64, a3, a4 & 1, a5, a6);
  *a2 = SymCryptFdefDecideModulusType(a1, a2[1], a3, v6);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))((char *)&off_1400064E8
                                                               + (*a2 & (unsigned int)g_SymCryptModFnsMask)))(
           a2,
           a5,
           a6);
}
