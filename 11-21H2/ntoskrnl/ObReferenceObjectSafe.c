/*
 * XREFs of ObReferenceObjectSafe @ 0x1402240B0
 * Callers:
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x140663FAC (AlpcpQueryRemoteView.c)
 *     AlpcpDispatchConnectionRequest @ 0x140667F24 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceConnectedPort @ 0x14069B58C (AlpcpReferenceConnectedPort.c)
 *     AlpcpFlushMessagesPort @ 0x14074DD38 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14074E130 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14074EA08 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     WmipProcessEvent @ 0x14075DD3C (WmipProcessEvent.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x1407A7098 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407A7850 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1407AA950 (AlpcpDispatchNewMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     AlpcpPortQueryServerInfo @ 0x140966F60 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140967470 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x14098501C (ObpCreateTypeArray.c)
 *     IovpBuildDriverObjectList @ 0x140A80A58 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
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
