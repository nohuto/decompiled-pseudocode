/*
 * XREFs of sub_1C0015050 @ 0x1C0015050
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C0015050(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rsi
  signed __int32 v6; // r9d
  signed __int32 v7; // eax
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rdx

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F074(off_1C0093070->AttachedDevice, 64LL, &unk_1C0083380, a1, a2);
    }
    return (unsigned int)-1056964602;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 1) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964607;
    }
    v10 = 65LL;
    goto LABEL_30;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 66LL, &unk_1C0083380);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 67LL, &unk_1C0083380);
    }
    return (unsigned int)-1056964600;
  }
  v5 = sub_1C000E2EC(a1);
  if ( v5 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), v6, 1);
    if ( !v7 )
    {
      IoFreeWorkItem(*(PIO_WORKITEM *)a2);
      *(_QWORD *)a2 = 0LL;
      ExFreePoolWithTag((PVOID)a2, 0x49576152u);
      _InterlockedDecrement(v5 + 1206);
      return v2;
    }
    if ( v7 != v6 )
      return v2;
    v9 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 1) == 0
      || BYTE1(off_1C0093070->Timer) < (unsigned __int8)v6 )
    {
      return (unsigned int)-1056964607;
    }
    v10 = 68LL;
LABEL_30:
    sub_1C003EDF0(v9->AttachedDevice, v10, &unk_1C0083380);
    return (unsigned int)-1056964607;
  }
  return 3238002694LL;
}
