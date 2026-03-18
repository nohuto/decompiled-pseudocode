/*
 * XREFs of ntoskrnl_24 @ 0x1409F9A10
 * Callers:
 *     ExInitLicenseData @ 0x14080EF78 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14080F86C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
