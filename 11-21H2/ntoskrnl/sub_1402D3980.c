/*
 * XREFs of sub_1402D3980 @ 0x1402D3980
 * Callers:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1402D3A70 (PoRegisterDeviceForIdleDetection.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PULONG __fastcall sub_1402D3980(struct _DEVICE_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rsi
  PULONG result; // rax
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rbx
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf

  DeviceObjectExtension = a1->DeviceObjectExtension;
  result = PoRegisterDeviceForIdleDetection(a1, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ImageSectionHandle);
    ExAcquireFastMutex(&stru_140C23160);
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C23068);
    v5 = (_QWORD *)((char *)Dope + 72);
    v6 = v4;
    v7 = *((_QWORD *)Dope + 9);
    if ( v7 )
    {
      v8 = (_QWORD *)*((_QWORD *)Dope + 10);
      if ( *(_QWORD **)(v7 + 8) != v5 || (_QWORD *)*v8 != v5 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *v5 = 0LL;
      *((_QWORD *)Dope + 10) = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KeReleaseSpinLockFromDpcLevel(&qword_140C23068);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    KeReleaseGuardedMutex(&stru_140C23160);
    return (PULONG)sub_1402FD820((ULONG_PTR)ImageSectionHandle, 0LL);
  }
  return result;
}
