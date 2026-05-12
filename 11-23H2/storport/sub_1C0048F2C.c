/*
 * XREFs of sub_1C0048F2C @ 0x1C0048F2C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C0048F2C(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _DWORD *v6; // rsi
  unsigned __int8 v7; // r9
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  _QWORD *v10; // r9
  struct _IO_WORKITEM *WorkItem; // rax

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x4Bu, (__int64)&unk_1C0083380, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v6 = sub_1C000E2EC(a1);
    if ( v6 )
    {
      if ( *a2 && *(_DWORD *)*a2 == 1094997074 )
      {
        _InterlockedExchange64(a2 + 17, 0LL);
        if ( !KeCancelTimer((PKTIMER)(a2 + 1)) )
        {
          KeRemoveQueueDpc((PRKDPC)(a2 + 9));
          if ( KeGetCurrentIrql() )
          {
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v6 + 1));
            a2[19] = WorkItem;
            if ( WorkItem )
              IoQueueWorkItem(WorkItem, sub_1C0049160, DelayedWorkQueue, a2);
            else
              return (unsigned int)-1056964605;
            return v2;
          }
          KeFlushQueuedDpcs();
        }
        ExFreePoolWithTag(a2, 0x54416152u);
        _InterlockedDecrement(v6 + 1016);
        return 0LL;
      }
      v8 = off_1C0093070;
      if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
        || (HIDWORD(off_1C0093070->Timer) & 1) == 0
        || BYTE1(off_1C0093070->Timer) < v7 )
      {
        return 3238002694LL;
      }
      v9 = 78;
      v10 = a2;
    }
    else
    {
      v8 = off_1C0093070;
      if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
        || (HIDWORD(off_1C0093070->Timer) & 1) == 0
        || BYTE1(off_1C0093070->Timer) < v7 )
      {
        return 3238002694LL;
      }
      v9 = 77;
      v10 = (_QWORD *)a1;
    }
    sub_1C003EF0C((__int64)v8->AttachedDevice, v9, (__int64)&unk_1C0083380, v10);
    return 3238002694LL;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 1) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x4Cu, (__int64)&unk_1C0083380);
  }
  return 3238002696LL;
}
