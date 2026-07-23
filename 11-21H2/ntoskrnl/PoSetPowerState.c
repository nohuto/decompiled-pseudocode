/*
 * XREFs of PoSetPowerState @ 0x1403A5380
 * Callers:
 *     sub_140395B50 @ 0x140395B50 (sub_140395B50.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  int v6; // edi
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C23000);
  if ( Type == SystemPowerState )
  {
    v6 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v6 == State.SystemState )
      goto LABEL_6;
    v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0;
    v9 = State.SystemState & 0xF;
    goto LABEL_5;
  }
  if ( Type == DevicePowerState )
  {
    v6 = (DeviceObjectExtension->PowerFlags >> 4) & 0xF;
    if ( v6 != State.SystemState )
    {
      v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFF0F;
      v9 = 16 * (State.SystemState & 0xF);
LABEL_5:
      DeviceObjectExtension->PowerFlags = v8 | v9;
    }
  }
LABEL_6:
  KeReleaseSpinLockFromDpcLevel(&qword_140C23000);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return (POWER_STATE)v6;
}
