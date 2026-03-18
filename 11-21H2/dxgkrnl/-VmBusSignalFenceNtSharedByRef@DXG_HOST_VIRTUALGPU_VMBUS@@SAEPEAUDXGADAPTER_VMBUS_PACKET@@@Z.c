/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03811D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C016F250 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0361198 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0364C78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // r8d
  unsigned int **v11; // r14
  __int64 v12; // r9
  _BYTE v13[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  _BYTE v16[24]; // [rsp+68h] [rbp-20h] BYREF
  int v17; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v15 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3990LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3990LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_14;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, *((struct DXGPROCESS **)a1 + 12));
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *((_QWORD *)a1 + 12);
  v7 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *(_DWORD *)(v6 + 296) )
  {
    v8 = *(_QWORD *)(v6 + 280);
    v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60)
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      if ( (v9 & 0x1F) == 0xD )
      {
        v11 = *(unsigned int ***)(v8 + 16LL * (unsigned int)v7);
        if ( v11 && (*(_DWORD *)v11 == 11 || *(_DWORD *)v11 == 8) )
        {
          DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v11);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
          v17 = DxgkSignalSynchronizationObjectFromGpuByReference(
                  v11[1],
                  *(_QWORD *)(v4 + 32),
                  *(unsigned int *)(v4 + 28),
                  v12);
          DXGSHAREDVMOBJECT::ReleaseReference((DXGSHAREDVMOBJECT *)v11);
          goto LABEL_11;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v5 = *(unsigned int *)(v4 + 24);
      }
    }
  }
  WdLogSingleEntry1(2LL, v5);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid shared object handle: 0x%I64x",
    *(unsigned int *)(v4 + 24),
    0LL,
    0LL,
    0LL,
    0LL);
  v17 = -1073741811;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
LABEL_11:
  if ( v17 < 0 )
    HandleAsyncCommandError((__int64 *)a1, v17, *(_DWORD *)(v4 + 28), 1);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v17, 4u);
  v3 = 1;
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
