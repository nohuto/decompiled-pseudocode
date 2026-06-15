/*
 * XREFs of ?GetCurrentPadding@CSpatialCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14009A220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::GetCurrentPadding(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = 0LL;
    *(_OWORD *)&a3->u64PaddingFrames = 0LL;
    *(_QWORD *)&a3->f32FramesPerSecond = 0LL;
  }
}
