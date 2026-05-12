/*
 * XREFs of sub_1C0012B64 @ 0x1C0012B64
 * Callers:
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C001313C @ 0x1C001313C (sub_1C001313C.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C004B254 @ 0x1C004B254 (sub_1C004B254.c)
 *     sub_1C004C09C @ 0x1C004C09C (sub_1C004C09C.c)
 */

__int64 __fastcall sub_1C0012B64(char *Context, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  POWER_STATE v5; // ebx
  struct _DEVICE_OBJECT *v6; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PEX_RUNDOWN_REF_CACHE_AWARE *v12; // rsi
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24; // [rsp+68h] [rbp-30h] BYREF

  Irp->IoStatus.Status = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 1);
  *((POWER_STATE *)Context + 123) = v5;
  PoSetPowerState(v6, DevicePowerState, v5);
  if ( v5.SystemState == PowerSystemWorking && Context[448] < 0 )
  {
    sub_1C0012FC0(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    sub_1C001A194(Context, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *((_DWORD *)Context + 123) == 1 )
  {
    if ( sub_1C0008B84((__int64)Context) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 0x100) != 0 )
      {
        ++*((_DWORD *)Context + 816);
        if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 114, 1u) )
        {
          WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
          v8 = WorkItem;
          if ( WorkItem )
          {
            sub_1C00071D4((__int64)Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v8, sub_1C00152B0, DelayedWorkQueue, Context);
          }
        }
        *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) &= ~0x200u;
      }
      v12 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784);
      if ( !sub_1C0008B84((__int64)Context)
        || (v13 = *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*v12),
            (v13 & 1) != 0) )
      {
        if ( Context[695] )
        {
          Context[695] = 0;
          sub_1C001A194(Context, 0LL);
        }
      }
      sub_1C001313C(v10, v9, v11, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 5976LL));
      v16 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v16 + 110) & 0x40) != 0 )
      {
        LOBYTE(v15) = 1;
        sub_1C004C09C(v16, 0xFFFFFFFFLL, v14, v15);
      }
      ExReleaseRundownProtectionCacheAware(*v12);
    }
    else if ( Context[695] )
    {
      Context[695] = 0;
      sub_1C001A194(Context, 0LL);
    }
    if ( *((_DWORD *)Context + 244) )
      sub_1C0012E40(*((_QWORD *)Context + 3));
    v17 = Context + 24;
  }
  else
  {
    if ( !Context[695] )
    {
      Context[695] = 1;
      sub_1C001A2F4();
    }
    v17 = Context + 24;
    if ( *((_DWORD *)Context + 244) )
      sub_1C0012E40(*v17);
    if ( sub_1C0008B84((__int64)Context) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*v17 + 5976LL));
      v22 = *v17;
      if ( (*(_BYTE *)(*v17 + 110LL) & 0x40) != 0 && *(_DWORD *)(v22 + 5976) == *(_DWORD *)(v22 + 168) )
      {
        LOBYTE(v21) = 1;
        sub_1C004C09C(v22, 0LL, v20, v21);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
    }
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 52LL, &unk_1C008A080, Context, Irp, 0);
  }
  if ( byte_1C0093BE8 )
  {
    v24 = 0LL;
    IoGetActivityIdIrp(Irp, &v24);
    if ( (byte_1C0093A02 & 0x10) != 0 )
      sub_1C004B254(
        v18,
        *v17,
        (unsigned int)&v24,
        *(_DWORD *)(*v17 + 56LL),
        Context[96],
        Context[97],
        Context[98],
        (char)Irp);
  }
  return sub_1C0003440(Irp, 0, 0);
}
