/*
 * XREFs of sub_140294D28 @ 0x140294D28
 * Callers:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403DF020 @ 0x1403DF020 (sub_1403DF020.c)
 *     VslGetSecurePciEnabled @ 0x1403DF160 (VslGetSecurePciEnabled.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1404176A0 (VslGetSecurePciDeviceBootConfiguration.c)
 *     sub_14054DDD0 @ 0x14054DDD0 (sub_14054DDD0.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054E3F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     sub_14054EC88 @ 0x14054EC88 (sub_14054EC88.c)
 *     sub_14054EE64 @ 0x14054EE64 (sub_14054EE64.c)
 *     sub_14054F010 @ 0x14054F010 (sub_14054F010.c)
 *     sub_140593778 @ 0x140593778 (sub_140593778.c)
 *     sub_140932A4C @ 0x140932A4C (sub_140932A4C.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 *     sub_140B129C4 @ 0x140B129C4 (sub_140B129C4.c)
 *     sub_140B1D468 @ 0x140B1D468 (sub_140B1D468.c)
 *     sub_140B4EC40 @ 0x140B4EC40 (sub_140B4EC40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140294D28(_QWORD *a1)
{
  char result; // al

  result = qword_140E01868;
  if ( *(_QWORD *)&qword_140E01868 )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&qword_140E01868;
    return 1;
  }
  return result;
}
