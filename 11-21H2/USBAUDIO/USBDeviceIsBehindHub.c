/*
 * XREFs of USBDeviceIsBehindHub @ 0x1C0032818
 * Callers:
 *     USBDeviceGetControllerInfo @ 0x1C0032600 (USBDeviceGetControllerInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall USBDeviceIsBehindHub(__int64 a1, _DWORD *a2)
{
  struct _DEVICE_OBJECT *v4; // rdx
  int v5; // ebx
  PIRP v6; // rax
  IRP *v7; // rdx
  NTSTATUS Status; // edi
  PDEVICE_OBJECT v9; // rcx
  char v10; // dl
  char v11; // r8
  unsigned __int16 v12; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int StartingOffset; // [rsp+20h] [rbp-39h]
  struct _KEVENT Event; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v18; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v19; // [rsp+88h] [rbp+2Fh]

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 40);
  v5 = 0;
  IoStatusBlock = 0LL;
  v6 = IoBuildSynchronousFsdRequest(0xFu, v4, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v7 = v6;
  if ( v6 )
  {
    v18 = 0LL;
    v19 = 0LL;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2229311;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&v18;
    v7->IoStatus.Status = -1073741637;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), v7);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      LOBYTE(v5) = WORD1(v19) != 0;
      *a2 = v5;
      return (unsigned int)Status;
    }
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = 11;
      goto LABEL_9;
    }
  }
  else
  {
    Status = -1073741670;
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = 10;
LABEL_9:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v9->AttachedDevice,
        v10,
        v11,
        (__int64)v9->DeviceExtension,
        StartingOffset,
        9u,
        v12,
        (__int64)&WPP_095d95ce0f0432d0db0279138e88c492_Traceguids);
    }
  }
  return (unsigned int)Status;
}
