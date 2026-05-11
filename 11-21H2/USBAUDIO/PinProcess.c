/*
 * XREFs of PinProcess @ 0x1C002B890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinProcess(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // r8
  char v4; // dl
  __int64 v6; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v4 || v3 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      8u,
      0x12u,
      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v1 + 144) + 128LL) + 16LL))(a1);
}
