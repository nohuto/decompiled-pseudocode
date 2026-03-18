/*
 * XREFs of DpiRequestIoPowerState @ 0x1C01F0D70
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C01EFEE0 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C01F0950 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0389190 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 *     DpiFdoResetFdo @ 0x1C038B234 (DpiFdoResetFdo.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C00237BC (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  NTSTATUS v7; // ebx
  struct _KEVENT v9[4]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v9, 0, 0x58uLL);
  v9[1].Header.WaitListHead.Flink = 0LL;
  v9[3].Header.WaitListHead.Flink = 0LL;
  v9[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v9[1].Header.LockNV = a2;
  LODWORD(v9[1].Header.WaitListHead.Blink) = a4;
  KeInitializeEvent(&v9[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4288));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v9);
  KeSetEvent((PRKEVENT)(v4 + 3936), 0, 0);
  if ( a2 == 7 )
  {
    v7 = KeWaitForSingleObject(*(PVOID *)(v4 + 3928), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 3928));
  }
  else
  {
    v7 = KeWaitForSingleObject(&v9[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4288));
  if ( v7 )
    WdLogSingleEntry1(2LL, v7);
  else
    return (unsigned int)v9[3].Header.Lock;
  return (unsigned int)v7;
}
