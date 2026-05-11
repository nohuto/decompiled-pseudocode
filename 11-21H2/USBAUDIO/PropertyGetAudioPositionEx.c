/*
 * XREFs of PropertyGetAudioPositionEx @ 0x1C002E510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0002720 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     WmiLogStreamPosition @ 0x1C000290C (WmiLogStreamPosition.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyGetAudioPositionEx(IRP *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  PKSPIN PinFromIrp; // rax
  _QWORD *Context; // rdi
  char v7; // r8
  char v8; // dl
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]

  v4 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(a1);
  if ( PinFromIrp )
  {
    Context = PinFromIrp->Context;
    if ( *((_BYTE *)Context + 46) )
    {
      v4 = -1073741130;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(PKSPIN, _QWORD *))(*(_QWORD *)(Context[18] + 128LL) + 56LL))(PinFromIrp, a3);
      a3[3] = Context[10];
    }
    v7 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v8 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( v8 || v7 )
      WPP_RECORDER_AND_TRACE_SF_ii(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v7,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        v11,
        0xAu,
        (__int64)&WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids);
  }
  WmiLogStreamPosition(a3, v4);
  return v4;
}
