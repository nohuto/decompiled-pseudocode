/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x18010A380
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E02B4 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfCallAPILookupCallback @ 0x1800E3C20 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800E5800 (AVrfpSnapDllImports.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18010A3F4 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010A5D4 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010A678 (RtlpGuardIsSuppressedAddress.c)
 */

__int64 __fastcall RtlGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = LdrControlFlowGuardEnforced();
  if ( !(_DWORD)result )
    goto LABEL_7;
  if ( (a2 & 4) != 0 && (unsigned __int8)RtlGuardIsExportSuppressedAddress(a1) != 1
    || (a2 & 1) != 0 && (unsigned __int8)RtlpGuardIsSuppressedAddress(a1) != 1 )
  {
    result = 3221225485LL;
LABEL_7:
    *a3 = 0;
    return result;
  }
  *a3 = 1;
  return RtlpGuardGrantSuppressedCallAccess(a1, a2);
}
