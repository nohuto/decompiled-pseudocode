/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C01AFE8C
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A7E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C017BC38 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CDA4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C2BC (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E494 (rimEndAllActiveContactsWorker.c)
 *     rimIsWakeablePointerFrame @ 0x1C01A0FB8 (rimIsWakeablePointerFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11E0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F9C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A75A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A792C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A894C (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB398 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01AFE08 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableEnd @ 0x1C00E375E (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x1C00E37FA (ListTableIteratorNext.c)
 */

__int64 *__fastcall RIMCmActiveContactsNext(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 *result; // rax
  __int64 v6; // xmm0_8
  __int64 v7[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 1000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 478);
  if ( *(_QWORD *)a2 != a1 + 992 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 479);
  v4 = (_QWORD *)ListTableEnd((__int64)v7, *(_QWORD *)a2);
  if ( *(_QWORD *)a2 == *v4 && *(_DWORD *)(a2 + 8) == (unsigned int)v4[1] && *(_QWORD *)(a2 + 16) == v4[2] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 480);
  result = ListTableIteratorNext(v7, a2);
  v6 = result[2];
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
