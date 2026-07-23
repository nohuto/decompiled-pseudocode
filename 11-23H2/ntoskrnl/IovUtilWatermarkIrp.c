/*
 * XREFs of IovUtilWatermarkIrp @ 0x140302EF4
 * Callers:
 *     IopSynchronousCall @ 0x140768594 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790420 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140795184 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x14096CF18 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAC8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140ACDC48 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
