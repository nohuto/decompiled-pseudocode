/*
 * XREFs of MapAdddressSpaceForGenAddr @ 0x1C0003BE8
 * Callers:
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapAdddressSpaceForGenAddr(__int64 a1)
{
  __int64 v2; // rax

  v2 = MmMapIoSpaceEx(*(_QWORD *)(a1 + 4), (unsigned __int64)*(unsigned __int8 *)(a1 + 3) >> 3, 516LL);
  *(_QWORD *)(a1 + 16) = v2;
  return v2 == 0 ? 0xC0000001 : 0;
}
