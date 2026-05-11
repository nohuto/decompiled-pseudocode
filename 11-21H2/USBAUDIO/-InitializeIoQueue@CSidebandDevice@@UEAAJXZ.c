/*
 * XREFs of ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000D460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C000FB7C (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 */

__int64 __fastcall CSidebandDevice::InitializeIoQueue(CSidebandDevice *this)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  NTSTATUS v5; // edi
  char v6; // dl
  char v7; // dl
  char v8; // dl
  int ClientId; // [rsp+20h] [rbp-58h]
  int ClientIda; // [rsp+20h] [rbp-58h]
  void *ThreadHandle; // [rsp+80h] [rbp+8h] BYREF

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      ClientId,
      9u,
      0xAu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  ThreadHandle = 0LL;
  KeClearEvent((PRKEVENT)((char *)this + 184));
  *((_OWORD *)this + 13) = 0LL;
  *((_OWORD *)this + 14) = 0LL;
  KeInitializeSemaphore((PRKSEMAPHORE)((char *)this + 208), 0, 0x7FFFFFFF);
  v5 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, CSidebandDevice::staticIoQueueThread, this);
  if ( v5 >= 0 )
  {
    v5 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, (PVOID *)this + 22, 0LL);
    ZwClose(ThreadHandle);
    if ( v5 >= 0 )
    {
      v5 = IoCsqInitializeEx(
             (PIO_CSQ)(*((_QWORD *)this + 6) + 160LL),
             CSidebandDevice::staticCsqInsertIrpEx,
             (PIO_CSQ_REMOVE_IRP)CSidebandDevice::staticCsqRemoveIrp,
             CSidebandDevice::staticCsqPeekNextIrp,
             CSidebandDevice::staticCsqAcquireLock,
             CSidebandDevice::staticCsqReleaseLock,
             CSidebandDevice::staticCsqCompleteCanceledIrp);
      if ( v5 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v7 = 0;
        }
        if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v7,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            ClientIda,
            9u,
            0xBu,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        CSidebandDevice::StopIoQueueThread(this);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v6 = 0;
    }
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        ClientIda,
        9u,
        0x11u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v8 || v2 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v2,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      ClientIda,
      9u,
      0xCu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)v5;
}
