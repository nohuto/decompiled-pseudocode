/*
 * XREFs of PinSetDataFormat @ 0x1C0038CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     PinValidateDataFormat @ 0x1C0038DF0 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinSetDataFormat(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // r8d
  __int64 (__fastcall *v10)(_QWORD *); // rax

  v7 = PinValidateDataFormat(*a1, a4, a1[12]);
  if ( v7 >= 0 )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1[2] + 144LL) + 128LL);
      v10 = *(__int64 (__fastcall **)(_QWORD *))(v6 + 24);
      if ( v10 )
        v7 = v10(a1);
    }
  }
  LOBYTE(v8) = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v8) = 0;
  if ( (_BYTE)v6 || (_BYTE)v8 )
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v6, v8, WPP_GLOBAL_Control->DeviceExtension);
  return (unsigned int)v7;
}
