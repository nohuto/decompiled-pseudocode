/*
 * XREFs of IovUtilWatermarkIrp @ 0x140302C64
 * Callers:
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790230 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140794F94 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x14096CD18 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAD8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140ACDC58 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
