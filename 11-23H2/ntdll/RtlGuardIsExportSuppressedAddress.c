/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x18010B864
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B7F0 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB20 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18010B930 (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)RtlpGetTargetRvaFlag(a1) && (v2 & 3) == 2;
}
