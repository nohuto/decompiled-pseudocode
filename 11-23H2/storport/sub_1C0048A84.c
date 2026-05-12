/*
 * XREFs of sub_1C0048A84 @ 0x1C0048A84
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0048A84(__int64 a1, struct _MDL *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      MmBuildMdlForNonPagedPool(a2);
    }
    else
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x26u, (__int64)&unk_1C0083380);
      }
      return (unsigned int)-1056964600;
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x25u, (__int64)&unk_1C0083380);
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
