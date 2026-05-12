/*
 * XREFs of sub_1C001AC20 @ 0x1C001AC20
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C001AC20(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax

  v4 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( KeGetCurrentIrql() > 2u )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0(off_1C0093070->AttachedDevice, 27LL, &unk_1C0083380);
      }
      return (unsigned int)-1056964600;
    }
    else
    {
      v8 = sub_1C0007CF4(64LL, a2, a3, 0LL);
      *a4 = v8;
      if ( !v8 )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
          && BYTE1(off_1C0093070->Timer) >= 2u )
        {
          sub_1C003EDF0(off_1C0093070->AttachedDevice, 28LL, &unk_1C0083380);
        }
        return (unsigned int)-1056964605;
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v4;
}
