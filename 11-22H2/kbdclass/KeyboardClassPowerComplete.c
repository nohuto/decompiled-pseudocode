/*
 * XREFs of KeyboardClassPowerComplete @ 0x1C00010D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001310 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall KeyboardClassPowerComplete(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // rsi
  char v6; // bl
  UCHAR MinorFunction; // al
  ULONG Options; // edx
  POWER_STATE v9; // edi
  struct _DEVICE_OBJECT *v10; // rcx
  NTSTATUS v11; // eax
  PIRP Irp; // rax
  IRP *v14; // rdi
  struct _FILE_OBJECT *FileObject; // r8
  __int64 v16; // rdx
  struct _IO_STACK_LOCATION *v17; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  IRP *v19; // r15

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  v6 = 1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( MinorFunction )
  {
    if ( MinorFunction == 2 )
    {
      if ( Options )
      {
        if ( Options == 1 )
        {
          PoSetPowerState(*(PDEVICE_OBJECT *)v3, DevicePowerState, v9);
          *(POWER_STATE *)(v3 + 188) = v9;
          Irp = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
          v14 = Irp;
          if ( Irp )
          {
            if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), Irp, File, 1u, 0x20u) < 0 )
            {
              IoFreeIrp(v14);
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 100);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                v16 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL;
                FileObject = (struct _FILE_OBJECT *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                                    + 3 * *(unsigned int *)(v3 + 196));
              }
              else
              {
                FileObject = CurrentStackLocation->FileObject;
                v16 = v3 + 156;
              }
              v17 = v14->Tail.Overlay.CurrentStackLocation;
              v17[-1].MajorFunction = 15;
              v17[-1].Parameters.Read.ByteOffset.LowPart = 720904;
              v17[-1].Parameters.Create.Options = 4;
              v17[-1].Parameters.Read.Length = 0;
              v17[-1].FileObject = FileObject;
              v18 = v14->Tail.Overlay.CurrentStackLocation;
              v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassSetLedsComplete;
              v18[-1].Context = (PVOID)v3;
              v18[-1].Control = -32;
              v14->AssociatedIrp.MasterIrp = (struct _IRP *)v16;
              v19 = (IRP *)_InterlockedExchange64((volatile __int64 *)(v3 + 368), 0LL);
              if ( v19 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 89);
                IoCancelIrp(v19);
                if ( _InterlockedExchange((volatile __int32 *)(v3 + 376), 2) == 3 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 90);
                  IoFreeIrp(v19);
                }
              }
              _InterlockedExchange64((volatile __int64 *)(v3 + 368), (__int64)v14);
              _InterlockedExchange((volatile __int32 *)(v3 + 376), 1);
              IofCallDriver(*(PDEVICE_OBJECT *)(v3 + 16), v14);
            }
          }
        }
      }
      else
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v3, SystemPowerState, v9);
        v10 = *(struct _DEVICE_OBJECT **)v3;
        *(POWER_STATE *)(v3 + 192) = v9;
        v11 = PoRequestPowerIrp(v10, 2u, (POWER_STATE)1, KeyboardClassPoRequestComplete, 0LL, 0LL);
        if ( v11 < 0 )
          a2->IoStatus.Status = v11;
      }
      PoStartNextPowerIrp(a2);
LABEL_7:
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
      return 0LL;
    }
LABEL_18:
    PoStartNextPowerIrp(a2);
    if ( !v6 )
      return 0LL;
    goto LABEL_7;
  }
  v6 = 0;
  if ( a2 != *(IRP **)(v3 + 296) || _InterlockedExchange((volatile __int32 *)(v3 + 320), 3) != 1 )
    goto LABEL_18;
  PoStartNextPowerIrp(a2);
  return 3221225494LL;
}
