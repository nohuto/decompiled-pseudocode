/*
 * XREFs of PiSwQueuedCreateInfoFree @ 0x140967D10
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x1409672C0 (PiSwCloseDevice.c)
 *     PiSwDeviceFree @ 0x1409673E0 (PiSwDeviceFree.c)
 *     PiSwProcessRemove @ 0x1409678D0 (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967C00 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140789888 (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x140967844 (PiSwPnPInfoFree.c)
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
