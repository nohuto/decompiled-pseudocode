/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402A3F30
 * Callers:
 *     sub_14020C4D4 @ 0x14020C4D4 (sub_14020C4D4.c)
 *     sub_14020C530 @ 0x14020C530 (sub_14020C530.c)
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_140233104 @ 0x140233104 (sub_140233104.c)
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     sub_140247300 @ 0x140247300 (sub_140247300.c)
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024A5B4 @ 0x14024A5B4 (sub_14024A5B4.c)
 *     sub_14024B024 @ 0x14024B024 (sub_14024B024.c)
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     sub_14024E6F0 @ 0x14024E6F0 (sub_14024E6F0.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     sub_14024FC04 @ 0x14024FC04 (sub_14024FC04.c)
 *     sub_140252E20 @ 0x140252E20 (sub_140252E20.c)
 *     IoReleaseVpbSpinLock @ 0x140253010 (IoReleaseVpbSpinLock.c)
 *     sub_140255C70 @ 0x140255C70 (sub_140255C70.c)
 *     IoDetachDevice @ 0x140256080 (IoDetachDevice.c)
 *     IoGetDriverObjectExtension @ 0x140256300 (IoGetDriverObjectExtension.c)
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     IoStartPacket @ 0x1402576D0 (IoStartPacket.c)
 *     sub_140257964 @ 0x140257964 (sub_140257964.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 *     IoAllocateDriverObjectExtension @ 0x14025B7E0 (IoAllocateDriverObjectExtension.c)
 *     sub_14025BB20 @ 0x14025BB20 (sub_14025BB20.c)
 *     sub_14025DD20 @ 0x14025DD20 (sub_14025DD20.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_1402A2260 @ 0x1402A2260 (sub_1402A2260.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A3EF0 @ 0x1402A3EF0 (sub_1402A3EF0.c)
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 *     sub_1402D2E74 @ 0x1402D2E74 (sub_1402D2E74.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402D5A04 @ 0x1402D5A04 (sub_1402D5A04.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_1402DDE58 @ 0x1402DDE58 (sub_1402DDE58.c)
 *     sub_1402DE33C @ 0x1402DE33C (sub_1402DE33C.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14036CCBC @ 0x14036CCBC (sub_14036CCBC.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 *     sub_1403770A8 @ 0x1403770A8 (sub_1403770A8.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_1403A0064 @ 0x1403A0064 (sub_1403A0064.c)
 *     sub_1403A0154 @ 0x1403A0154 (sub_1403A0154.c)
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     sub_1403A0B00 @ 0x1403A0B00 (sub_1403A0B00.c)
 *     sub_1403A156C @ 0x1403A156C (sub_1403A156C.c)
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1403A5298 @ 0x1403A5298 (sub_1403A5298.c)
 *     sub_1403A55B8 @ 0x1403A55B8 (sub_1403A55B8.c)
 *     sub_1403A5A30 @ 0x1403A5A30 (sub_1403A5A30.c)
 *     IoGetDiskDeviceObject @ 0x1403A6F80 (IoGetDiskDeviceObject.c)
 *     IoEnumerateDeviceObjectList @ 0x1403A7030 (IoEnumerateDeviceObjectList.c)
 *     sub_1403D1490 @ 0x1403D1490 (sub_1403D1490.c)
 *     sub_1403D23B8 @ 0x1403D23B8 (sub_1403D23B8.c)
 *     sub_1403D7D9C @ 0x1403D7D9C (sub_1403D7D9C.c)
 *     sub_1403D8834 @ 0x1403D8834 (sub_1403D8834.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     sub_14053B0B8 @ 0x14053B0B8 (sub_14053B0B8.c)
 *     sub_14053B160 @ 0x14053B160 (sub_14053B160.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 *     sub_14053E3AC @ 0x14053E3AC (sub_14053E3AC.c)
 *     sub_140541E40 @ 0x140541E40 (sub_140541E40.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_14054268C @ 0x14054268C (sub_14054268C.c)
 *     sub_14054276C @ 0x14054276C (sub_14054276C.c)
 *     sub_140542834 @ 0x140542834 (sub_140542834.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 *     sub_1405566C0 @ 0x1405566C0 (sub_1405566C0.c)
 *     sub_140556AEC @ 0x140556AEC (sub_140556AEC.c)
 *     sub_140556F1C @ 0x140556F1C (sub_140556F1C.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405572B0 (IoAdjustStackSizeForRedirection.c)
 *     sub_140557FF8 @ 0x140557FF8 (sub_140557FF8.c)
 *     sub_14055838C @ 0x14055838C (sub_14055838C.c)
 *     sub_140560680 @ 0x140560680 (sub_140560680.c)
 *     sub_14056117C @ 0x14056117C (sub_14056117C.c)
 *     sub_1405616A0 @ 0x1405616A0 (sub_1405616A0.c)
 *     sub_140564310 @ 0x140564310 (sub_140564310.c)
 *     sub_140564E78 @ 0x140564E78 (sub_140564E78.c)
 *     sub_1405E364C @ 0x1405E364C (sub_1405E364C.c)
 *     sub_140614B20 @ 0x140614B20 (sub_140614B20.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     sub_140A92010 @ 0x140A92010 (sub_140A92010.c)
 *     sub_140A92074 @ 0x140A92074 (sub_140A92074.c)
 *     sub_140A920D0 @ 0x140A920D0 (sub_140A920D0.c)
 *     sub_140A92178 @ 0x140A92178 (sub_140A92178.c)
 *     sub_140A921E0 @ 0x140A921E0 (sub_140A921E0.c)
 *     sub_140A922F8 @ 0x140A922F8 (sub_140A922F8.c)
 *     sub_140A9235C @ 0x140A9235C (sub_140A9235C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  v2 = OldIrql;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                 + 16 * Number));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
}
