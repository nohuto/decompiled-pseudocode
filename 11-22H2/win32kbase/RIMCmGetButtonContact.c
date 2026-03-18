/*
 * XREFs of RIMCmGetButtonContact @ 0x1C00E358C
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A7E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11E0 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C01AA398 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8FC (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C01AFB4C (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 968);
  else
    return 0LL;
}
