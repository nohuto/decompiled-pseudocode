/*
 * XREFs of MouseClassPowerComplete @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseClassPowerComplete(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v4; // rsi
  char v5; // r14
  UCHAR MinorFunction; // dl
  ULONG Options; // ecx
  POWER_STATE v8; // ebx
  struct _DEVICE_OBJECT *v9; // rcx
  NTSTATUS v10; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( MinorFunction )
  {
    if ( MinorFunction == 2 )
    {
      if ( Options )
      {
        if ( Options == 1 )
        {
          *(POWER_STATE *)(v4 + 172) = v8;
          PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, v8);
        }
      }
      else
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, SystemPowerState, v8);
        v9 = *(struct _DEVICE_OBJECT **)v4;
        *(POWER_STATE *)(v4 + 176) = v8;
        v10 = PoRequestPowerIrp(v9, 2u, (POWER_STATE)1, MouseClassPoRequestComplete, 0LL, 0LL);
        if ( v10 < 0 )
          a2->IoStatus.Status = v10;
      }
      PoStartNextPowerIrp(a2);
LABEL_7:
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
      return 0LL;
    }
LABEL_11:
    PoStartNextPowerIrp(a2);
    if ( !v5 )
      return 0LL;
    goto LABEL_7;
  }
  v5 = 0;
  if ( a2 != *(IRP **)(v4 + 280) || _InterlockedExchange((volatile __int32 *)(v4 + 304), 3) != 1 )
    goto LABEL_11;
  PoStartNextPowerIrp(a2);
  return 3221225494LL;
}
