/*
 * XREFs of RtlGuardGrantSuppressedCallAccess @ 0x18010B820
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4F50 (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800E6B30 (AVrfpSnapDllImports.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18010B894 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18010BA74 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGuardIsSuppressedAddress @ 0x18010BB18 (RtlpGuardIsSuppressedAddress.c)
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
