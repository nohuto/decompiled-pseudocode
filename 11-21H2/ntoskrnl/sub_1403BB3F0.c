/*
 * XREFs of sub_1403BB3F0 @ 0x1403BB3F0
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 */

ULONG_PTR *sub_1403BB3F0()
{
  KPCR *Pcr; // rbx
  ULONG_PTR *v1; // rax
  unsigned __int64 v2; // rcx
  ULONG_PTR *result; // rax

  Pcr = KeGetPcr();
  v1 = sub_1403ACEFC(5, 0, 0, 0, 1);
  if ( v1 )
  {
    *(_QWORD *)Pcr->HalReserved = 10000 * ((v1[24] + 5000) / 0x2710);
    v2 = 1000000 * ((v1[24] + 500000) / 0xF4240);
    Pcr->StallScaleFactor = v2 / 0xF4240;
    *((_DWORD *)KeGetCurrentPrcb() + 17) = v2 / 0xF4240;
  }
  result = sub_1403ACEFC(7, 0, 0, 0, 1);
  if ( result )
  {
    result = (ULONG_PTR *)(10000 * (unsigned int)((result[24] + 5000) / 0x2710));
    Pcr->HalReserved[3] = (unsigned int)result;
  }
  return result;
}
