/*
 * XREFs of IsDeallocateSupported @ 0x1C000566C
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C0002824 (FormInquiryBlockLimitsData.c)
 *     ScsiUnmapRequest @ 0x1C0002F48 (ScsiUnmapRequest.c)
 *     FormInquiryBlockProvisioningData @ 0x1C000E4A4 (FormInquiryBlockProvisioningData.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 520LL) & 4) == 0 && !*(_BYTE *)(a1 + 4147) )
  {
    return 0;
  }
  return v1;
}
