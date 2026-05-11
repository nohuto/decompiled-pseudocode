/*
 * XREFs of UsbAudioIrpDispatcher @ 0x1C0029A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     IsSidebandIrp @ 0x1C0008868 (IsSidebandIrp.c)
 *     SidebandDispatchIrp @ 0x1C00089C8 (SidebandDispatchIrp.c)
 */

__int64 __fastcall UsbAudioIrpDispatcher(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  unsigned int v6; // ebx
  char v7; // dl
  char *Context; // rbp
  char v10; // dl
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-38h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( DeviceForDeviceObject )
  {
    Context = (char *)DeviceForDeviceObject->Context;
    if ( (unsigned int)IsSidebandIrp(FunctionalDeviceObject, (__int64)Irp) )
    {
      return (unsigned int)SidebandDispatchIrp(FunctionalDeviceObject, Irp);
    }
    else
    {
      if ( CurrentStackLocation->MajorFunction == 27 && CurrentStackLocation->MinorFunction == 20 )
      {
        v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v13,
            9u,
            0x26u,
            (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
        KeWaitForSingleObject(Context + 752, Executive, 0, 0, 0LL);
        v11 = *((unsigned int *)Context + 246);
        if ( (_DWORD)v11 )
          Irp->IoStatus.Information = v11 | LODWORD(Irp->IoStatus.Information);
        KeReleaseMutex((PRKMUTEX)(Context + 752), 0);
      }
      return (unsigned int)KsDispatchIrp(FunctionalDeviceObject, Irp);
    }
  }
  else
  {
    v6 = -1073741811;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        9u,
        0x25u,
        (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
  }
  return v6;
}
