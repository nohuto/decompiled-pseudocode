/*
 * XREFs of sub_1C004892C @ 0x1C004892C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C004892C(__int64 a1, void *a2, ULONG a3, PMDL *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  PMDL Mdl; // rax

  v4 = 0;
  if ( !a2 )
  {
    v8 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 31;
LABEL_6:
    sub_1C003EDF0((__int64)v8->AttachedDevice, v9, (__int64)&unk_1C0083380);
    return (unsigned int)-1056964602;
  }
  if ( !a4 )
  {
    v8 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 32;
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
    *a4 = Mdl;
    if ( !Mdl )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x22u, (__int64)&unk_1C0083380);
      }
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x21u, (__int64)&unk_1C0083380);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
