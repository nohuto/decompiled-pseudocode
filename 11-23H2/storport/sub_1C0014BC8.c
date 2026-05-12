/*
 * XREFs of sub_1C0014BC8 @ 0x1C0014BC8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C0014BC8(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _QWORD *v7; // r14
  PIO_WORKITEM WorkItem; // rax

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F074(off_1C0093070->AttachedDevice, 59LL, &unk_1C0083380, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v5 = sub_1C000E2EC(a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = (_QWORD *)sub_1C0007CF4(64LL, 32LL, 1230463314LL, *((_QWORD *)v5 + 1));
      if ( v7 )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v6 + 1));
        *v7 = WorkItem;
        if ( WorkItem )
        {
          _InterlockedIncrement(v6 + 1206);
          *a2 = v7;
          return v2;
        }
        ExFreePoolWithTag(v7, 0x49576152u);
      }
      return (unsigned int)-1056964605;
    }
    return 3238002694LL;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 1) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EDF0(off_1C0093070->AttachedDevice, 60LL, &unk_1C0083380);
  }
  return 3238002696LL;
}
