/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x18010A4B8
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010A1C0 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18010A300 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
