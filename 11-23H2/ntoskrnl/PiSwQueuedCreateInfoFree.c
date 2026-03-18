/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x140967B10
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x1409670C0 (PiSwCloseDevice.c)
 *     PiSwDeviceFree @ 0x1409671E0 (PiSwDeviceFree.c)
 *     PiSwProcessRemove @ 0x1409676D0 (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967A00 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140789698 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x140967644 (PiSwPnPInfoFree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwQueuedCreateInfoFree(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)P = 0LL;
  }
  PiSwPnPInfoFree((__int64)P + 8);
  v3 = (void *)*((_QWORD *)P + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)P + 7) = 0LL;
  }
  v4 = (char *)*((_QWORD *)P + 9);
  if ( v4 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
