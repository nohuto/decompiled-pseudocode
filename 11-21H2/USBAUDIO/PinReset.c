/*
 * XREFs of PinReset @ 0x1C002B950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

ULONG *PinReset()
{
  char v0; // r8
  char v1; // dl
  ULONG *result; // rax
  int v3; // [rsp+20h] [rbp-28h]

  v0 = 1;
  v1 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v1 || v0 )
    return (ULONG *)WPP_RECORDER_AND_TRACE_SF_(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v1,
                      v0,
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v3,
                      8u,
                      0x13u,
                      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  return result;
}
