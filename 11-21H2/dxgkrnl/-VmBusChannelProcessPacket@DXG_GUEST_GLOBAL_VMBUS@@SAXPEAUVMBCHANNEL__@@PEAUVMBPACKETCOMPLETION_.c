/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C005DEAC (-VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESE.c)
 *     ?VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z @ 0x1C005E96C (-VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z.c)
 *     ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C005E9C0 (-VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct _SLIST_ENTRY *a2,
        struct DXGKVMB_COMMAND_SETGUESTDATA *a3,
        int a4,
        unsigned int a5)
{
  int v9; // ebp
  int v10; // r10d
  __int64 v11; // r15
  int v12; // r10d
  struct DXGGLOBAL *Global; // rax
  char *v14; // rbx
  PSLIST_ENTRY v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64, __int64, char *); // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // r8
  __int64 v24; // [rsp+28h] [rbp-60h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = *((_DWORD *)a3 + 4);
  v10 = v9;
  v11 = *(_QWORD *)a3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketHostToVmDpcBegin,
      (__int64)a3,
      a1,
      v11,
      *((_DWORD *)a3 + 4));
    v10 = *((_DWORD *)a3 + 4);
  }
  if ( v10 )
  {
    v12 = v10 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData(a3);
      }
      else
      {
        Global = DXGGLOBAL_GetGlobal();
        v14 = (char *)Global + 160;
        ++*((_DWORD *)Global + 45);
        v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 10);
        if ( v15
          || (v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v14 + 6),
              v17 = *((unsigned int *)v14 + 11),
              v18 = *((unsigned int *)v14 + 10),
              v19 = *((unsigned int *)v14 + 9),
              ++*((_DWORD *)v14 + 6),
              (v15 = (PSLIST_ENTRY)v16(v19, v17, v18, v14)) != 0LL) )
        {
          memset(v15, 0, 0xA0uLL);
          *((_QWORD *)&v15[1].Next + 1) = v15;
          v15[1].Next = (struct _SLIST_ENTRY *)VmBusProcessPacket;
          v15->Next = 0LL;
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          HIDWORD(v15[9].Next) = a5;
          *((_QWORD *)&v15[4].Next + 1) = a1;
          LODWORD(v15[9].Next) = a4;
          v15[8].Next = a2;
          *((_QWORD *)&v15[8].Next + 1) = a3;
          v15[7].Next = (struct _SLIST_ENTRY *)((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C0131BE8)(a1);
          *((_DWORD *)&v15[9].Next + 2) = *((_DWORD *)DXGGLOBAL_GetGlobal() + 450);
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v15, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
          goto LABEL_16;
        }
        WdLogSingleEntry1(6LL, 14410LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v21,
            v20,
            v22,
            0LL,
            1,
            -1,
            L"Failed to allocated a work item",
            14410LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    else
    {
      DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(a3);
    }
  }
  else
  {
    DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(a3);
  }
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  ((void (__fastcall *)(struct _SLIST_ENTRY *, _QWORD, _QWORD))qword_1C0131C28)(a2, 0LL, 0LL);
LABEL_16:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    LODWORD(v24) = v9;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketHostToVmDpcEnd,
      v23,
      a1,
      v11,
      v24);
  }
}
