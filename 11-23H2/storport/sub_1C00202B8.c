/*
 * XREFs of sub_1C00202B8 @ 0x1C00202B8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C00202B8(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8

  v3 = 0;
  if ( !a1 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 55LL, &unk_1C0083380);
    }
    return (unsigned int)-1056964602;
  }
  v5 = sub_1C000E2EC(a1);
  if ( !v5 )
    return (unsigned int)-1056964602;
  if ( !*((_BYTE *)v5 + 4305) )
    return (unsigned int)-1056964601;
  v7 = *((_QWORD *)v5 + 536);
  if ( (unsigned int)v6 >= *(_DWORD *)(v7 + 4) )
    return (unsigned int)-1056964602;
  *a3 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v7 + 48 * v6 + 24));
  return v3;
}
