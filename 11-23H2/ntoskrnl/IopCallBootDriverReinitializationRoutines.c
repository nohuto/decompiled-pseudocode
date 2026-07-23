/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x140B6D2E0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IopInterlockedRemoveHeadList @ 0x14035B350 (IopInterlockedRemoveHeadList.c)
 *     PnpDiagnosticTrace @ 0x140362CF8 (PnpDiagnosticTrace.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  char v0; // di
  PVOID *v1; // rax
  PVOID *v2; // rbx

  v0 = 0;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Start, 0, 0LL);
  while ( 1 )
  {
    v1 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
    v2 = v1;
    if ( !v1 )
      break;
    v0 = 1;
    ++*(_DWORD *)(*((_QWORD *)v1[2] + 6) + 16LL);
    *((_DWORD *)v1[2] + 4) &= ~0x20u;
    ((void (__fastcall *)(PVOID, PVOID, _QWORD))v1[3])(v1[2], v1[4], *(unsigned int *)(*((_QWORD *)v1[2] + 6) + 16LL));
    ObfDereferenceObjectWithTag(v2[2], 0x746C6644u);
    ExFreePoolWithTag(v2, 0);
  }
  IopBootDriverReinitCompleted = 1;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Stop, 0, 0LL);
  return v0;
}
