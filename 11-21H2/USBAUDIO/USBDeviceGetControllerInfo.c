/*
 * XREFs of USBDeviceGetControllerInfo @ 0x1C0032600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     USBDeviceIsBehindHub @ 0x1C0032818 (USBDeviceIsBehindHub.c)
 */

__int64 __fastcall USBDeviceGetControllerInfo(int a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  ULONG *v6; // r8
  void *v8; // r9
  char v9; // di
  int IsBehindHub; // ebx
  char v11; // dl
  char v12; // dl
  int v13; // ebp
  char v14; // dl
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+80h] [rbp+8h] BYREF

  v6 = &WPP_RECORDER_INITIALIZED;
  v8 = &WPP_095d95ce0f0432d0db0279138e88c492_Traceguids;
  v9 = 1;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v11 = 0;
    }
    LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        (char)v6,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        9u,
        0xCu,
        (__int64)&WPP_095d95ce0f0432d0db0279138e88c492_Traceguids);
    if ( *a4 )
    {
      if ( *a4 < 4u )
      {
        *a4 = 0;
        IsBehindHub = -1073741811;
        goto LABEL_24;
      }
      v17 = 0;
      IsBehindHub = USBDeviceIsBehindHub(a2, &v17, v6, v8);
      if ( IsBehindHub < 0 )
        goto LABEL_24;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v12 = 0;
      }
      v13 = v17;
      if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v12,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v16,
          9u,
          0xDu,
          (__int64)&WPP_095d95ce0f0432d0db0279138e88c492_Traceguids);
      *a3 = v13;
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
    || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v14 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( v14 || v9 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v9,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v16,
      9u,
      0xEu,
      (__int64)&WPP_095d95ce0f0432d0db0279138e88c492_Traceguids);
  return (unsigned int)IsBehindHub;
}
