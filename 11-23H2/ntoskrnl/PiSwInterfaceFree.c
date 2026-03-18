/*
 * XREFs of PiSwInterfaceFree @ 0x1409674E0
 * Callers:
 *     PiSwFreeInterfaceList @ 0x14081A0EC (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x14081AD94 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x14081B368 (PiSwInterfaceCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140789698 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
