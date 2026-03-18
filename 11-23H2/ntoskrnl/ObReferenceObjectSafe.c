/*
 * XREFs of ObReferenceObjectSafe @ 0x140337710
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140716058 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFlushMessagesPort @ 0x1407188F0 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x140718EC0 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14071B460 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BB90 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14071D0C8 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140739AF0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D5D0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14077920C (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x1407C4534 (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x14086AE10 (WmipProcessEvent.c)
 *     AlpcpPortQueryServerInfo @ 0x1409790C8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140979C10 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x14097BF7C (ObpCreateTypeArray.c)
 *     CmUnRegisterCallback @ 0x140A0F1C0 (CmUnRegisterCallback.c)
 *     IovpBuildDriverObjectList @ 0x140AC18F8 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
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
