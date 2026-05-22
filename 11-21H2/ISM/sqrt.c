/*
 * XREFs of sqrt @ 0x18004A8B8
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800D92C0 (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?NormalizedDotProduct@MathHelper@@SANUtagPOINT@@0@Z @ 0x18019D468 (-NormalizedDotProduct@MathHelper@@SANUtagPOINT@@0@Z.c)
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7D60 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sqrt(double X)
{
  return _o_sqrt(X);
}
