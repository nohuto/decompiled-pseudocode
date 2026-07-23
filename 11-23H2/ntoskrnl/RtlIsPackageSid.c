/*
 * XREFs of RtlIsPackageSid @ 0x1407F30F4
 * Callers:
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2EC0 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}
