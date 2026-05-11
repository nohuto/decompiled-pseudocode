/*
 * XREFs of IsSidebandIrp @ 0x1C0008868
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C0029A50 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall IsSidebandIrp(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *v2; // rsi
  unsigned int v3; // ebx
  PKSDEVICE DeviceForDeviceObject; // rax
  char v5; // di
  KSPIN_LOCK *Context; // rbp
  char v7; // al
  __int64 v8; // r14
  KIRQL v9; // dl
  KSPIN_LOCK *i; // rax
  int v12; // [rsp+20h] [rbp-28h]

  v2 = *(char **)(a2 + 184);
  v3 = 0;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(a1);
  if ( DeviceForDeviceObject )
  {
    Context = (KSPIN_LOCK *)DeviceForDeviceObject->Context;
    v7 = *v2;
    if ( *v2 )
    {
      if ( v7 == 2 || (unsigned __int8)(v7 - 14) <= 1u )
      {
        v8 = *((_QWORD *)v2 + 6);
        v9 = KeAcquireSpinLockRaiseToDpc(Context + 119);
        for ( i = (KSPIN_LOCK *)Context[117]; i != Context + 117; i = (KSPIN_LOCK *)*i )
        {
          if ( *(i - 1) == v8 )
          {
            v3 = 1;
            break;
          }
        }
        KeReleaseSpinLock(Context + 119, v9);
      }
    }
    else
    {
      LOBYTE(v3) = RtlCompareUnicodeString((PCUNICODE_STRING)(*((_QWORD *)v2 + 6) + 88LL), &String2, 1u) == 0;
    }
  }
  else
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        9u,
        0x10u,
        (__int64)&WPP_44af59a87f893648f64c3513847e50b7_Traceguids);
  }
  return v3;
}
