/*
 * XREFs of ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D807C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01C44C8 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C01DB01C (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 */

_UNKNOWN **__fastcall CTouchProcessor::TrackCoalesceOnReassign(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v4; // rbx
  _UNKNOWN **result; // rax

  v3 = a3;
  v4 = a2;
  LOBYTE(a3) = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(a3) = 0;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dqd(
                            WPP_GLOBAL_Control->AttachedDevice,
                            a2,
                            a3,
                            242,
                            5,
                            7,
                            242,
                            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
                            *(_DWORD *)v4,
                            *(_QWORD *)(v4 + 8),
                            v3);
  *(_DWORD *)(v4 + 148) = v3;
  return result;
}
