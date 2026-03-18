/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037CEC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B864 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkDestroyAllocation2 @ 0x1C01B8360 (DxgkDestroyAllocation2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  _DWORD *v7; // rax
  unsigned __int64 v8; // r9
  int v9; // eax
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  _DWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  _BYTE v15[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+78h] [rbp-8h]
  int v18; // [rsp+90h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v17 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v7 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v7 )
      goto LABEL_4;
    v8 = (unsigned int)v7[8];
    if ( !(_DWORD)v8 || ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v8 >= 4 )
    {
      v11[0] = v7[6];
      v11[1] = v7[7];
      v12 = v7 + 10;
      v14 = v7[9];
      v13 = v8;
      v9 = DxgkDestroyAllocation2((ULONG64)v11);
      v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v18 = v9;
      VmBusCompletePacket(v10, &v18, 4u);
      goto LABEL_5;
    }
    v4 = 1571LL;
    WdLogSingleEntry1(2LL, 1571LL);
    v5 = L"Invalid packet size";
  }
  else
  {
    v4 = 1564LL;
    WdLogSingleEntry1(2LL, 1564LL);
    v5 = L"The adapter is already closed by the guest";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
  v3 = 0;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
