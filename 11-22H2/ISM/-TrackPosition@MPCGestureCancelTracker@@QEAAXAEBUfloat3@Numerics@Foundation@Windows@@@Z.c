/*
 * XREFs of ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801F7DEC
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2728 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F3CD0 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x1800573C4 (_o_sqrtf_0.c)
 */

void __fastcall MPCGestureCancelTracker::TrackPosition(
        MPCGestureCancelTracker *this,
        const struct Windows::Foundation::Numerics::float3 *a2)
{
  if ( !*((_BYTE *)this + 16)
    && *((_BYTE *)this + 17)
    && (o_sqrtf_0(
          (float)((float)((float)(*((float *)a2 + 1) - *((float *)this + 1))
                        * (float)(*((float *)a2 + 1) - *((float *)this + 1)))
                + (float)((float)(*(float *)a2 - *(float *)this) * (float)(*(float *)a2 - *(float *)this)))
        + (float)((float)(*((float *)a2 + 2) - *((float *)this + 2)) * (float)(*((float *)a2 + 2) - *((float *)this + 2)))) > *((float *)this + 3)
     || GetTickCount64() - *((_QWORD *)this + 3) > 0x1F4) )
  {
    *((_BYTE *)this + 16) = 1;
  }
}
