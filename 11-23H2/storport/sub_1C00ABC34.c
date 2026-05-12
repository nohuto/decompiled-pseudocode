/*
 * XREFs of sub_1C00ABC34 @ 0x1C00ABC34
 * Callers:
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 * Callees:
 *     <none>
 */

bool sub_1C00ABC34()
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return MmIsVerifierEnabled(&VerifierFlags) >= 0 && MmAddVerifierThunks(&off_1C00824A0, 0x180u) >= 0;
}
