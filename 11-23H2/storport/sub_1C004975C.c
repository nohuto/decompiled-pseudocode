/*
 * XREFs of sub_1C004975C @ 0x1C004975C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C004975C(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx

  v4 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v5 = *(_QWORD *)(a2 + 96);
    else
      v5 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      *a4 = *(_QWORD *)(v5 + 136);
    else
      *a4 = *(_QWORD *)(v5 + 104);
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x2Bu, (__int64)&unk_1C0083380);
    }
    return (unsigned int)-1056964602;
  }
  return v4;
}
