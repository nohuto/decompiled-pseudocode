/*
 * XREFs of sub_1C0020334 @ 0x1C0020334
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0020334(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rax
  __int64 v3; // r9
  KIRQL v4; // r10
  __int64 v5; // r8

  v1 = 0;
  if ( !a1 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 56LL, &unk_1C0083380);
    }
    return (unsigned int)-1056964602;
  }
  v2 = sub_1C000E2EC(a1);
  if ( !v2 )
    return (unsigned int)-1056964602;
  if ( !*((_BYTE *)v2 + 4305) )
    return (unsigned int)-1056964601;
  v5 = *((_QWORD *)v2 + 536);
  if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 4) )
    return (unsigned int)-1056964602;
  KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48 * v3 + 24), v4);
  return v1;
}
