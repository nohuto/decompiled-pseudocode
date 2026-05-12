/*
 * XREFs of sub_1C004E4D0 @ 0x1C004E4D0
 * Callers:
 *     sub_1C004E300 @ 0x1C004E300 (sub_1C004E300.c)
 * Callees:
 *     sub_1C003FFD8 @ 0x1C003FFD8 (sub_1C003FFD8.c)
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 */

void __fastcall sub_1C004E4D0(char *Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*((_DWORD *)Context + 77) != 1 || (Context[107] & 4) != 0)
    && PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         (PREQUEST_POWER_COMPLETE)sub_1C004E400,
         Context,
         0LL) == 259 )
  {
    Context[107] |= 2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 612));
    if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    {
      LODWORD(v5) = 0;
      LODWORD(Contexta) = *((_DWORD *)Context + 14);
      sub_1C00441C8(v2, &stru_1C0089560, v3, **((_QWORD **)Context + 612), Contexta, v5);
    }
    if ( *((char **)Context + 707) == Context + 5656 )
      Context[109] &= ~0x40u;
    else
      sub_1C003FFD8(*((struct _DEVICE_OBJECT **)Context + 1));
  }
}
