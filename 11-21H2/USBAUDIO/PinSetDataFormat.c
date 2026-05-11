/*
 * XREFs of PinSetDataFormat @ 0x1C002B9E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     PinValidateDataFormat @ 0x1C002BBF0 (PinValidateDataFormat.c)
 */

__int64 __fastcall PinSetDataFormat(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 (__fastcall *v7)(_QWORD *); // rax
  char v8; // r8
  char v9; // dl
  int v11; // [rsp+20h] [rbp-38h]

  v6 = PinValidateDataFormat(*a1, a4, a1[12]);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      v7 = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(a1[2] + 144LL) + 128LL) + 24LL);
      if ( v7 )
        v6 = v7(a1);
    }
  }
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( v9 || v8 )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v8,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      8u,
      0x14u,
      (__int64)&WPP_8cf403cd479d3afc9ed08bafed0b0283_Traceguids);
  return (unsigned int)v6;
}
