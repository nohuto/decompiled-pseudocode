/*
 * XREFs of WmipReferenceEntry @ 0x1406C688C
 * Callers:
 *     WmipFindGEByGuid @ 0x1406C6404 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406C7EB0 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1407D5E8C (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407D5F90 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1407FFAC8 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407FFD0C (WmipFindISInDSByGuid.c)
 *     WmipFindMRByNames @ 0x14080EE2C (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x14080EEF4 (WmipInsertMofResource.c)
 *     WmipLegacyEtwWorker @ 0x14084FE80 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x140852C7C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140852D10 (WmipQueueLegacyEtwWork.c)
 *     WmipGenerateRegistrationNotification @ 0x14086AA48 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x14086B060 (WmipFindISinGEbyName.c)
 *     WmipDereferenceEvent @ 0x1409E0580 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0984 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409E18C0 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
