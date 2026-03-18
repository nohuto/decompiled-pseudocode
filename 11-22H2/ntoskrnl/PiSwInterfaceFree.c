/*
 * XREFs of PiSwInterfaceFree @ 0x140967590
 * Callers:
 *     PiSwFreeInterfaceList @ 0x14081C66C (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x14081D314 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x14081D8E8 (PiSwInterfaceCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140789BA8 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (char *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
