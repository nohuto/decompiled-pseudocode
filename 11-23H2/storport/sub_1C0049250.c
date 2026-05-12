/*
 * XREFs of sub_1C0049250 @ 0x1C0049250
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0049250(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // r10
  _QWORD *v3; // r11
  unsigned int v4; // r9d
  __int64 v6; // rcx

  v1 = sub_1C000E2EC(a1);
  v4 = 0;
  if ( !v1 )
    return 3238002694LL;
  if ( (*((_BYTE *)v1 + 4307) & 4) == 0 )
  {
    if ( v3 )
    {
      if ( *(_BYTE *)(v2 + 2) == 40 )
        v6 = *(_QWORD *)(v2 + 96);
      else
        v6 = *(_QWORD *)(v2 + 48);
      *v3 = *(_QWORD *)(v6 + 152);
      return v4;
    }
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x2Cu, (__int64)&unk_1C0083380);
    }
  }
  return (unsigned int)-1056964602;
}
