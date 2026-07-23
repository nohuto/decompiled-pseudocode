/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1402D3A70
 * Callers:
 *     sub_1402D3980 @ 0x1402D3980 (sub_1402D3980.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14025A904 @ 0x14025A904 (sub_14025A904.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  unsigned __int64 v9; // rbp
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  ULONG DeviceType; // eax
  int v16; // r14d
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r8
  int v29; // eax

  v4 = 0LL;
  if ( !ConservationIdleTime && !PerformanceIdleTime )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C23068);
    Dope = DeviceObject->DeviceObjectExtension->Dope;
    if ( !Dope )
      goto LABEL_4;
    v12 = (_QWORD *)((char *)Dope + 32);
    v13 = (_QWORD *)*((_QWORD *)Dope + 4);
    if ( v13 == (_QWORD *)((char *)Dope + 32) )
      goto LABEL_4;
    v14 = (_QWORD *)*((_QWORD *)Dope + 5);
    if ( (_QWORD *)v13[1] == v12 && (_QWORD *)*v14 == v12 )
    {
      *v14 = v13;
      v13[1] = v14;
      *((_QWORD *)Dope + 6) = 0LL;
      *((_QWORD *)Dope + 2) = 0LL;
      *((_DWORD *)Dope + 14) = 0;
      *(_DWORD *)Dope = 0;
      *((_DWORD *)Dope + 1) = 0;
      *((_DWORD *)Dope + 2) = 0;
      *((_DWORD *)Dope + 3) = 0;
      *((_QWORD *)Dope + 11) = 0LL;
      *((_QWORD *)Dope + 5) = (char *)Dope + 32;
      *v12 = v12;
LABEL_4:
      KeReleaseSpinLockFromDpcLevel(&qword_140C23068);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v25 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      return v4;
    }
LABEL_29:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v16 = 0;
  if ( DeviceType == 7 || DeviceType == 45 )
  {
    if ( !byte_140C5AC3C && (DeviceObject->Characteristics & 1) != 0 )
      return v4;
    v16 = 1;
  }
  v17 = sub_14025A904((__int64)DeviceObject);
  if ( !v17 )
    return v4;
  v18 = KeAcquireSpinLockRaiseToDpc(&qword_140C23068);
  v19 = (_QWORD *)(v17 + 32);
  *(_DWORD *)(v17 + 16) = ConservationIdleTime;
  *(_DWORD *)(v17 + 20) = PerformanceIdleTime;
  *(_DWORD *)(v17 + 52) = State;
  *(_DWORD *)(v17 + 48) = v16;
  if ( (_QWORD *)*v19 == v19 )
  {
    *(_DWORD *)(v17 + 56) = 1;
    v20 = (_QWORD *)qword_140C23058;
    if ( *(__int64 **)qword_140C23058 != &qword_140C23050 )
      goto LABEL_29;
    *v19 = &qword_140C23050;
    *(_QWORD *)(v17 + 40) = v20;
    *v20 = v19;
    qword_140C23058 = v17 + 32;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C23068);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = *((_QWORD *)v27 + 4375);
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v25 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v25 )
          sub_140418E4C(v27);
      }
    }
  }
  __writecr8(v18);
  sub_1402D62A8();
  return (PULONG)v17;
}
