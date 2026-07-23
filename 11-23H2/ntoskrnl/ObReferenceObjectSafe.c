/*
 * XREFs of ObReferenceObjectSafe @ 0x1403379A0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140716258 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFlushMessagesPort @ 0x140718AF0 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1407190C0 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14071B660 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BD90 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14071D2C8 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140739CE0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D7C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x1407C4804 (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x14086B050 (WmipProcessEvent.c)
 *     AlpcpPortQueryServerInfo @ 0x1409792C8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140979E10 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x14097C17C (ObpCreateTypeArray.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 *     IovpBuildDriverObjectList @ 0x140AC18E8 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
