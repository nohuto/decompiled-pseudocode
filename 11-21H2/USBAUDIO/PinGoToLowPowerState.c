/*
 * XREFs of PinGoToLowPowerState @ 0x1C002B5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PinGoToLowPowerState(PKSPIN Pin, unsigned int State)
{
  _QWORD *Context; // rdi
  int v5; // esi
  __int64 v6; // r8
  __int64 (__fastcall *v7)(PKSPIN, _QWORD, __int64); // r14
  char v8; // bl
  char v9; // dl
  int v10; // [rsp+20h] [rbp-48h]

  Context = Pin->Context;
  v5 = 0;
  v6 = *(_QWORD *)(Context[18] + 128LL);
  v7 = *(__int64 (__fastcall **)(PKSPIN, _QWORD, __int64))(v6 + 40);
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v6,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      2u,
      0xAu,
      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  if ( *((_BYTE *)Context + 168) )
  {
    if ( v7 )
      v5 = v7(Pin, State, v6);
    *((_BYTE *)Context + 168) = 0;
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v8,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v10,
          2u,
          0xBu,
          (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
    }
  }
}
