/*
 * XREFs of sub_1C0011BE0 @ 0x1C0011BE0
 * Callers:
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 *     sub_1C004BFA0 @ 0x1C004BFA0 (sub_1C004BFA0.c)
 *     sub_1C004C410 @ 0x1C004C410 (sub_1C004C410.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0011DBC @ 0x1C0011DBC (sub_1C0011DBC.c)
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C003766C @ 0x1C003766C (sub_1C003766C.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C004B0F4 @ 0x1C004B0F4 (sub_1C004B0F4.c)
 */

void __fastcall sub_1C0011BE0(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  DWORD LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rbx
  IRP *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v12 = 0LL;
  LODWORD(v13) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)sub_1C0007798(a2, 2) )
    sub_1C0011DBC(a2);
  else
    sub_1C003766C(a2);
  sub_1C0019D54(a2, 0LL);
  v4 = KfRaiseIrql(2u);
  sub_1C0019ED0(a2, 0LL);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 308) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 28LL, &unk_1C008A080, a2, Irp, Irp->IoStatus.Status);
  }
  if ( byte_1C0093BE8 )
  {
    v15 = 0LL;
    IoGetActivityIdIrp(Irp, &v15);
    if ( (byte_1C0093A02 & 0x10) != 0 )
      sub_1C004B0F4(v7, v6, (unsigned int)&v15, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v12) = *(_DWORD *)(a2 + 740);
    v13 = *(_QWORD *)(a2 + 728);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 4952) )
    sub_1C0012E40(a2);
  sub_1C0003440(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 4880));
    if ( !v8 )
      break;
    v9 = (__int64)&v8[-124];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1968);
      *(_QWORD *)(v9 + 1968) = 0LL;
      *(_BYTE *)(v9 + 1961) = 0;
      sub_1C00129D8(&v8[-124], v10);
      sub_1C000729C(v9);
    }
    else if ( *(_BYTE *)(v9 + 1960) )
    {
      v11 = *(unsigned int *)(v9 + 1964);
      *(_BYTE *)(v9 + 1960) = 0;
      sub_1C0026320(&v8[-124], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 296));
}
