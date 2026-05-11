/*
 * XREFs of PinClose @ 0x1C002AD60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PinRemovePinFromList @ 0x1C00021DC (PinRemovePinFromList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinClose(_QWORD *a1)
{
  __int64 v1; // rbx
  char v3; // r8
  char v4; // dl
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-38h]

  v1 = a1[2];
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
      v7,
      8u,
      0x11u,
      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  --*(_DWORD *)(*(_QWORD *)(v1 + 32) + 140LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(v1 + 144) + 128LL) + 8LL))(a1);
  PinRemovePinFromList(a1);
  return v5;
}
