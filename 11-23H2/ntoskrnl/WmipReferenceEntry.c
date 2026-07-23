/*
 * XREFs of WmipReferenceEntry @ 0x1406C68BC
 * Callers:
 *     WmipFindGEByGuid @ 0x1406C6434 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406C7EE0 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1407D615C (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6260 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1407FFD98 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407FFFDC (WmipFindISInDSByGuid.c)
 *     WmipFindMRByNames @ 0x14080F0FC (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x14080F1C4 (WmipInsertMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140850180 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x140852F7C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140853010 (WmipQueueLegacyEtwWork.c)
 *     WmipGenerateRegistrationNotification @ 0x14086AC88 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x14086B2A0 (WmipFindISinGEbyName.c)
 *     WmipDereferenceEvent @ 0x1409E0780 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0B84 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409E1B50 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
