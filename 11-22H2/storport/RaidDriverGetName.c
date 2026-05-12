/*
 * XREFs of RaidDriverGetName @ 0x1C0010550
 * Callers:
 *     StorEtwMiniportEvent @ 0x1C000D9FC (StorEtwMiniportEvent.c)
 *     StorTickEventQueue @ 0x1C000EAE0 (StorTickEventQueue.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterCreateDevmapEntry @ 0x1C0034DE0 (RaidAdapterCreateDevmapEntry.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C00377E4 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00384E4 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     StorLogMFNDCapability @ 0x1C003DACC (StorLogMFNDCapability.c)
 *     StorLogMFNDChildPFControl @ 0x1C003DCB4 (StorLogMFNDChildPFControl.c)
 *     StorLogMFNDNSPageMapControl @ 0x1C003DE04 (StorLogMFNDNSPageMapControl.c)
 *     StorLogMFNDNameSpaceRead @ 0x1C003DF64 (StorLogMFNDNameSpaceRead.c)
 *     StorLogMFNDNameSpaceWrite @ 0x1C003E15C (StorLogMFNDNameSpaceWrite.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1C003E370 (StorLogMFNDQueryOperationInfo.c)
 *     StorLogMFNDReconfigure @ 0x1C003E490 (StorLogMFNDReconfigure.c)
 *     StorLogRegisterMFNDInterface @ 0x1C003E5EC (StorLogRegisterMFNDInterface.c)
 *     StorEtwMiniportLogError @ 0x1C004510C (StorEtwMiniportLogError.c)
 *     StorReset @ 0x1C0047378 (StorReset.c)
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x1C0050684 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x1C0051624 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x1C0051834 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x1C0051A00 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x1C0051F10 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x1C0052688 (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1C0053174 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x1C00533E4 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x1C005369C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x1C00538C0 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x1C0053A80 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1C0053FBC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibEalLogCommandStatus @ 0x1C00556E8 (TcglibEalLogCommandStatus.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     RaCheckAllMiniportSystemThreadsExit @ 0x1C0056E60 (RaCheckAllMiniportSystemThreadsExit.c)
 *     RaidCaptureLiveDump @ 0x1C0058518 (RaidCaptureLiveDump.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0060F10 (RaidUnitAbortSrbCompletion.c)
 *     StorEtwMiniportLogByteStream @ 0x1C0068AAC (StorEtwMiniportLogByteStream.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C006CDD8 (StorpLogPhysicalTopologyInfo.c)
 *     StorLogMFNDQueryCCQueuesState @ 0x1C0075FC8 (StorLogMFNDQueryCCQueuesState.c)
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1C00762A4 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorLogMFNDQueryChildPFList @ 0x1C00763E4 (StorLogMFNDQueryChildPFList.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1C007653C (StorLogMFNDQueryChildPFProperty.c)
 *     StorLogMFNDQueryChildPFSettings @ 0x1C007669C (StorLogMFNDQueryChildPFSettings.c)
 *     StorLogMFNDQueryMigrationQoS @ 0x1C0076990 (StorLogMFNDQueryMigrationQoS.c)
 *     StorLogMFNDQueryNSPageMap @ 0x1C0076AF8 (StorLogMFNDQueryNSPageMap.c)
 *     StorLogMFNDSetCCQueuesState @ 0x1C0076C30 (StorLogMFNDSetCCQueuesState.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1C0076F30 (StorLogMFNDSetChildPFCommandPermission.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1C0077070 (StorLogMFNDSetChildPFProperty.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1C00771D0 (StorLogMFNDSetChildPFQoS.c)
 *     StorLogMFNDSetChildPFSettings @ 0x1C00773A8 (StorLogMFNDSetChildPFSettings.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1C007767C (StorLogMFNDSetMigrationQoS.c)
 *     StorLogMFNDSetOperationInfo @ 0x1C00777E4 (StorLogMFNDSetOperationInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00A55C8 (RaidAdapterCreateDriverInfo.c)
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rax
  _WORD *v7; // r9
  __int16 v8; // ax
  __int16 result; // ax

  v2 = *(_WORD **)(a1 + 48);
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(a1 + 40);
    if ( (_WORD)v4 )
    {
      v5 = v4 >> 1;
      if ( v4 >> 1 )
      {
        while ( 1 )
        {
          v6 = v5 - 1;
          v7 = &v2[v6];
          --v5;
          if ( *v7 == 92 )
            break;
          if ( !(_DWORD)v6 )
            goto LABEL_9;
        }
        if ( v7 )
          v2 = v7 + 1;
      }
    }
  }
LABEL_9:
  v8 = *(_WORD *)(a1 + 40) + *(_WORD *)(a1 + 48) - (_WORD)v2;
  *(_WORD *)a2 = v8;
  result = v8 + 2;
  *(_WORD *)(a2 + 2) = result;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
