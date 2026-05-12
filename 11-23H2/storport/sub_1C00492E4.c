/*
 * XREFs of sub_1C00492E4 @ 0x1C00492E4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C00492E4(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  unsigned int v7; // r10d
  _QWORD *v8; // rax
  _QWORD *v9; // r9
  _QWORD *v10; // r11

  if ( !a1 )
  {
    v5 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 45;
    goto LABEL_6;
  }
  if ( !a2 )
  {
    v5 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 46;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v5 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 47;
    goto LABEL_6;
  }
  if ( !a4 )
  {
    v5 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 48;
LABEL_6:
    sub_1C003EDF0((__int64)v5->AttachedDevice, v6, (__int64)&unk_1C0083380);
    return (unsigned int)-1056964602;
  }
  v8 = sub_1C000E2EC(a1);
  if ( v8 )
  {
    *a2 = v8[1];
    *v10 = v8[4];
    *v9 = v8[3];
    return v7;
  }
  return (unsigned int)-1056964602;
}
