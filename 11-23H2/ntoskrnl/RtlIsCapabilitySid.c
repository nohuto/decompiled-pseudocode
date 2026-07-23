/*
 * XREFs of RtlIsCapabilitySid @ 0x1407F2E78
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403707D0 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}
