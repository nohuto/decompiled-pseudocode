/*
 * XREFs of sub_1C004997C @ 0x1C004997C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 */

__int64 __fastcall sub_1C004997C(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x45u, (__int64)&unk_1C0083380, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v6 = sub_1C000E2EC(a1);
    v7 = v6;
    if ( v6 )
    {
      v8 = sub_1C0007CF4(64LL, 160LL, 1413570898LL, *((_QWORD *)v6 + 1));
      v9 = v8;
      if ( v8 )
      {
        *(_QWORD *)v8 = v7;
        KeInitializeTimer((PKTIMER)(v8 + 8));
        KeInitializeDpc((PRKDPC)(v9 + 72), (PKDEFERRED_ROUTINE)sub_1C00077E0, (PVOID)v9);
        _InterlockedIncrement(v7 + 1016);
        *a2 = v9;
      }
      else
      {
        return (unsigned int)-1056964605;
      }
      return v2;
    }
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x47u, (__int64)&unk_1C0083380, a1);
    }
    return 3238002694LL;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 1) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x46u, (__int64)&unk_1C0083380);
  }
  return 3238002696LL;
}
