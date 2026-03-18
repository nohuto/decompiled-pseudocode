/*
 * XREFs of SymCryptModElementToInt @ 0x1403F919C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGenericSetRandom @ 0x1403FDC70 (SymCryptEcpointGenericSetRandom.c)
 * Callees:
 *     SymCryptFdefModElementToIntGeneric @ 0x140403E04 (SymCryptFdefModElementToIntGeneric.c)
 */

__int64 __fastcall SymCryptModElementToInt(_DWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v6; // edi
  int v8; // eax

  v5 = (int)a1;
  v6 = a4;
  v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_1400064D8 + (*a1 & 0x380)))(
         a1,
         a2,
         a4,
         a5);
  return SymCryptFdefModElementToIntGeneric(v5, v8, a3, v6, a5);
}
