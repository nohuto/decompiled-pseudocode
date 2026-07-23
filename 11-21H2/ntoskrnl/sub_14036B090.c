/*
 * XREFs of sub_14036B090 @ 0x14036B090
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     sub_1402E3150 @ 0x1402E3150 (sub_1402E3150.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_140356E00 @ 0x140356E00 (sub_140356E00.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     PoCreatePowerRequest @ 0x140369E10 (PoCreatePowerRequest.c)
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 *     sub_1403749A0 @ 0x1403749A0 (sub_1403749A0.c)
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 *     sub_1407EF930 @ 0x1407EF930 (sub_1407EF930.c)
 *     PoCreateThermalRequest @ 0x140829400 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14098B2F0 (PoDeleteThermalRequest.c)
 *     sub_140B02408 @ 0x140B02408 (sub_140B02408.c)
 *     sub_140B2D588 @ 0x140B2D588 (sub_140B2D588.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14036B090(_QWORD *P)
{
  void *v2; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
