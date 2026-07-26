/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1C012D9E4
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x1C012D860 (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x1C00569BC (-ndisLiveBugCheck@@YAX_K000@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1C0056A04 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     ndisGetMiniportFromObject @ 0x1C012D9B0 (ndisGetMiniportFromObject.c)
 */

void __fastcall ndisReportTimeoutWaitingForExternalDriver(unsigned int a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromObject; // rbx
  bool v5; // cl
  ULONG VerifierFlags; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  MiniportFromObject = (struct _NDIS_MINIPORT_BLOCK *)ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
  v5 = 0;
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    VerifierFlags = 0;
    if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
      v5 = 1;
  }
  if ( MiniportFromObject
    && (MiniportFromObject->AoAc
     && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
     && !ndisWatchdogForceBugCheckForWDI
     || (_DWORD)v2 == 39
     && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
     && !ndisBugCheckOnReenumerationTimeout)
    || v5 )
  {
    ndisBugCheckEx(0x25uLL, v2, a2, *(_QWORD *)(a2 + 40));
  }
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !MiniportFromObject || (_DWORD)v2 == 34 )
      ndisLiveBugCheck(37LL, v2, a2, *(_QWORD *)(a2 + 40));
    else
      ndisMLiveBugCheck(MiniportFromObject, 37LL, v2, a2, *(_QWORD *)(a2 + 40));
  }
}
