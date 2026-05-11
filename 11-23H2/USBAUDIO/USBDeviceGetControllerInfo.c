/*
 * XREFs of USBDeviceGetControllerInfo @ 0x1C00317E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     USBDeviceIsBehindHub @ 0x1C00319F8 (USBDeviceIsBehindHub.c)
 */

__int64 __fastcall USBDeviceGetControllerInfo(int a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  ULONG *v6; // r8
  __int64 v7; // rbx
  void *v8; // r9
  char v9; // di
  int IsBehindHub; // ebx
  int v11; // r8d
  int v12; // ebp
  void *v13; // r8
  int v15; // [rsp+80h] [rbp+8h] BYREF

  v6 = &WPP_RECORDER_INITIALIZED;
  v7 = a2;
  v8 = &WPP_095d95ce0f0432d0db0279138e88c492_Traceguids;
  v9 = 1;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v6,
        WPP_GLOBAL_Control->DeviceExtension);
    if ( *a4 )
    {
      if ( *a4 < 4u )
      {
        *a4 = 0;
        IsBehindHub = -1073741811;
        goto LABEL_24;
      }
      v15 = 0;
      IsBehindHub = USBDeviceIsBehindHub(v7, &v15, v6, v8);
      if ( IsBehindHub < 0 )
        goto LABEL_24;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      v12 = v15;
      if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, a2, v11, WPP_GLOBAL_Control->DeviceExtension);
      }
      *a3 = v12;
    }
    else
    {
      IsBehindHub = -1073741789;
    }
    *a4 = 4;
    goto LABEL_24;
  }
  IsBehindHub = -1073741811;
  *a4 = 0;
LABEL_24:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)a2 || v9 )
  {
    v13 = &WPP_095d95ce0f0432d0db0279138e88c492_Traceguids;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v13,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)IsBehindHub;
}
