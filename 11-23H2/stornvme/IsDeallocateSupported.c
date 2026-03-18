/*
 * XREFs of IsDeallocateSupported @ 0x1C0014C30
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C001210C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012334 (FormInquiryBlockProvisioningData.c)
 *     ScsiUnmapRequest @ 0x1C001AFCC (ScsiUnmapRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 520LL) & 4) == 0 && !*(_BYTE *)(a1 + 4355) )
  {
    return 0;
  }
  return v1;
}
