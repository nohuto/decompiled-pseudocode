/*
 * XREFs of ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01214F0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisSetTimer @ 0x1C0035910 (NdisSetTimer.c)
 */

void __fastcall ndisMStartInitMode(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( ndisReferenceMiniport(a1, 0x17u) )
  {
    a1->InitMode = 1;
    a1->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferListsWithLock;
    a1->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferListsWithLock;
    a1->NormalTopReceive = 0;
    KeClearEvent(&a1->InitModeTimeoutTimerQueuedEvent);
    NdisSetTimer(&a1->InitModeTimeoutTimer, 0x7530u);
  }
}
