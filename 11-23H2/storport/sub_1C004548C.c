/*
 * XREFs of sub_1C004548C @ 0x1C004548C
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

char __fastcall sub_1C004548C(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // r9

  v1 = sub_1C000E2EC(a1);
  if ( !v1 )
    return 0;
  if ( (v1[26] & 0x10) == 0 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0 )
    {
      if ( BYTE1(off_1C0093070->Timer) )
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x17u, (__int64)&unk_1C0083380);
    }
    return 0;
  }
  *((_QWORD *)v1 + 533) = v2;
  return 1;
}
