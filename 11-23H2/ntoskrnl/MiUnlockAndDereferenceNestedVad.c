/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x14066116C
 * Callers:
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x14028AB20 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A47EA8 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
