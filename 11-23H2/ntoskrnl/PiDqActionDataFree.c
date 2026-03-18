/*
 * XREFs of PiDqActionDataFree @ 0x1407F9B14
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1407DFD48 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1407F94D0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x1407F9854 (PiDqActionDataCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140789698 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqActionDataFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = (char *)*((_QWORD *)P + 4);
    if ( v3 )
      PnpFreeDevPropertyArray(*((_DWORD *)P + 6), v3, 0x58706E50u);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
