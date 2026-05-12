/*
 * XREFs of RaidDriverGetName @ 0x1C0019BC4
 * Callers:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     StorTickEventQueue @ 0x1C0013B30 (StorTickEventQueue.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorEtwMiniportEvent @ 0x1C0019528 (StorEtwMiniportEvent.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0020490 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterCreateDevmapEntry @ 0x1C0034178 (RaidAdapterCreateDevmapEntry.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00370BC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     StorLogMFNDCapability @ 0x1C003BD14 (StorLogMFNDCapability.c)
 *     StorLogMFNDChildPFControl @ 0x1C003BEFC (StorLogMFNDChildPFControl.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1C003C044 (StorLogMFNDQueryOperationInfo.c)
 *     StorLogMFNDReconfigure @ 0x1C003C15C (StorLogMFNDReconfigure.c)
 *     StorLogRegisterMFNDInterface @ 0x1C003C2B8 (StorLogRegisterMFNDInterface.c)
 *     StorEtwMiniportLogError @ 0x1C00424D0 (StorEtwMiniportLogError.c)
 *     StorReset @ 0x1C0044438 (StorReset.c)
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 *     RaCheckAllMiniportSystemThreadsExit @ 0x1C004DADC (RaCheckAllMiniportSystemThreadsExit.c)
 *     RaidCaptureLiveDump @ 0x1C004E240 (RaidCaptureLiveDump.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0054540 (RaidUnitAbortSrbCompletion.c)
 *     StorEtwMiniportLogByteStream @ 0x1C005BA78 (StorEtwMiniportLogByteStream.c)
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1C0067190 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorLogMFNDQueryChildPFList @ 0x1C00672D0 (StorLogMFNDQueryChildPFList.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1C0067428 (StorLogMFNDQueryChildPFProperty.c)
 *     StorLogMFNDQueryChildPFSettings @ 0x1C006758C (StorLogMFNDQueryChildPFSettings.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1C0067880 (StorLogMFNDSetChildPFCommandPermission.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1C00679C0 (StorLogMFNDSetChildPFProperty.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1C0067B24 (StorLogMFNDSetChildPFQoS.c)
 *     StorLogMFNDSetChildPFSettings @ 0x1C0067CFC (StorLogMFNDSetChildPFSettings.c)
 *     StorLogMFNDSetOperationInfo @ 0x1C0067FD0 (StorLogMFNDSetOperationInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00852F0 (RaidAdapterCreateDriverInfo.c)
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  unsigned int v4; // eax
  __int64 v5; // rdx
  _WORD *v6; // r9
  __int16 v7; // ax
  __int16 result; // ax

  v2 = *(_WORD **)(a1 + 48);
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(a1 + 40);
    if ( (_WORD)v4 )
    {
      LODWORD(v5) = v4 >> 1;
      if ( v4 >> 1 )
      {
        while ( 1 )
        {
          v5 = (unsigned int)(v5 - 1);
          v6 = &v2[v5];
          if ( *v6 == 92 )
            break;
          if ( !(_DWORD)v5 )
            goto LABEL_9;
        }
        if ( v6 )
          v2 = v6 + 1;
      }
    }
  }
LABEL_9:
  v7 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 40) - (_WORD)v2;
  *(_WORD *)a2 = v7;
  result = v7 + 2;
  *(_WORD *)(a2 + 2) = result;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
