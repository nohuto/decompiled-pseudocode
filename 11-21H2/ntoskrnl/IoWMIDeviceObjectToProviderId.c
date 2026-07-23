/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x1402487F0
 * Callers:
 *     sub_1405D85F0 @ 0x1405D85F0 (sub_1405D85F0.c)
 *     sub_140810B00 @ 0x140810B00 (sub_140810B00.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402488E4 @ 0x1402488E4 (sub_1402488E4.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  ULONG v4; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  v3 = sub_1402488E4(DeviceObject);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 56);
  else
    v4 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v4;
}
