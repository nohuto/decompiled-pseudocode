/*
 * XREFs of ntoskrnl_24 @ 0x1409F9AC0
 * Callers:
 *     ExInitLicenseData @ 0x1408114F8 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140811DEC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
