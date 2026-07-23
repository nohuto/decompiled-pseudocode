/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x18010B7F0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4F50 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800E6B30 (AVrfpSnapDllImports.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18010B864 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010BA44 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010BAE8 (RtlpGuardIsSuppressedAddress.c)
 */

char __fastcall RtlGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v6; // eax

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    if ( ((a2 & 4) == 0 || (unsigned __int8)RtlGuardIsExportSuppressedAddress(a1) == 1)
      && ((a2 & 1) == 0 || (unsigned __int8)RtlpGuardIsSuppressedAddress(a1) == 1) )
    {
      *a3 = 1;
      LOBYTE(v6) = RtlpGuardGrantSuppressedCallAccess(a1, a2);
      return v6;
    }
    LOBYTE(v6) = 13;
  }
  *a3 = 0;
  return v6;
}
