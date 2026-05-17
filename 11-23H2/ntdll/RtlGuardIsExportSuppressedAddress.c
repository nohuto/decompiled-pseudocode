/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x18010B894
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B820 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB50 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18010B960 (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(__int64 a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  return (unsigned __int8)RtlpGetTargetRvaFlag(a1, &v2) && (v2 & 3) == 2;
}
