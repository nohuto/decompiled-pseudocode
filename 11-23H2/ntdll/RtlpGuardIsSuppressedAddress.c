/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x18010BB18
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B820 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB50 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18010B960 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(unsigned __int64 a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
