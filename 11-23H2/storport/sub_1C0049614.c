/*
 * XREFs of sub_1C0049614 @ 0x1C0049614
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0049614(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  unsigned __int16 v4; // dx
  unsigned int v5; // r9d
  _DWORD *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int8 *v9; // r8

  if ( !a1 )
  {
    v3 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v4 = 57;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v3 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v4 = 58;
LABEL_6:
    sub_1C003EDF0((__int64)v3->AttachedDevice, v4, (__int64)&unk_1C0083380);
    return (unsigned int)-1056964602;
  }
  v6 = sub_1C000E2EC(a1);
  if ( v6 )
  {
    if ( *((_BYTE *)v6 + 4305) == (_BYTE)v5 )
      return (unsigned int)-1056964601;
    v9 = (unsigned __int8 *)*((_QWORD *)v6 + 536);
    if ( (unsigned int)v8 < *((_DWORD *)v9 + 1) )
    {
      *(_DWORD *)v7 = v8;
      *(_DWORD *)(v7 + 4) = *(_DWORD *)&v9[48 * v8 + 32];
      *(_QWORD *)(v7 + 8) = *(_QWORD *)&v9[48 * v8 + 8];
      *(_DWORD *)(v7 + 16) = *(_DWORD *)&v9[48 * v8 + 36];
      *(_DWORD *)(v7 + 20) = *v9;
      *(_DWORD *)(v7 + 24) = *(_DWORD *)&v9[48 * v8 + 44];
      return v5;
    }
  }
  return (unsigned int)-1056964602;
}
