/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372B50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C02D8F70 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bp
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rdx
  int *v16; // rsi
  __int64 v17; // r8
  int AllocationResidency; // eax
  _BYTE v20[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v21; // [rsp+58h] [rbp-30h]
  int v22; // [rsp+60h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v22 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 3034LL;
    WdLogSingleEntry1(2LL, 3034LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_25:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v8 = v6;
  if ( !v6 )
  {
LABEL_26:
    v3 = 0;
    goto LABEL_27;
  }
  v9 = *(_DWORD *)(v6 + 28);
  if ( v9 )
    v10 = 0LL;
  else
    v10 = *(unsigned int *)(v6 + 40);
  v11 = 4 * v10;
  if ( v11 > 0xFFFFFFFF )
  {
    v4 = 3041LL;
    WdLogSingleEntry1(2LL, 3041LL);
    goto LABEL_24;
  }
  if ( (unsigned int)v11 >= 0xFFFFFFC8 )
  {
    v4 = 3047LL;
    WdLogSingleEntry1(2LL, 3047LL);
    goto LABEL_24;
  }
  if ( (unsigned int)(v11 + 56) > *((_DWORD *)a1 + 36) )
  {
    v4 = 3052LL;
    WdLogSingleEntry1(2LL, 3052LL);
LABEL_24:
    v5 = L"Invalid packet size";
    goto LABEL_25;
  }
  v12 = 1LL;
  if ( !v9 )
    v12 = *(unsigned int *)(v8 + 40);
  v13 = 4 * v12;
  if ( v13 > 0xFFFFFFFF )
  {
    v4 = 3061LL;
    WdLogSingleEntry1(2LL, 3061LL);
    goto LABEL_24;
  }
  v14 = v13 + 4;
  if ( (unsigned int)v13 >= 0xFFFFFFFC )
  {
    v4 = 3066LL;
    WdLogSingleEntry1(2LL, 3066LL);
    goto LABEL_24;
  }
  v16 = (int *)operator new[](v14, 0x4B677844u, 64LL, v7);
  if ( !v16 )
  {
    v4 = 3073LL;
    WdLogSingleEntry1(2LL, 3073LL);
    v5 = L"Memory allocation failed";
    goto LABEL_25;
  }
  *(_QWORD *)(v8 + 32) = v8 + 56;
  *(_QWORD *)(v8 + 48) = v16 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v8 + 24, v15, v17);
  *v16 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    WdLogSingleEntry1(2LL, AllocationResidency);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryAllocationResidency failed: 0x%I64x",
      *v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v16, v14);
  operator delete[](v16);
LABEL_27:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v3;
}
