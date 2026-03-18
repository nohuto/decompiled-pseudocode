/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C037EA44
 * Callers:
 *     DxgkLock2 @ 0x1C017D050 (DxgkLock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkUnlock2Internal @ 0x1C0317BFC (DxgkUnlock2Internal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C02D7560 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // edi
  char *v6; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  struct DXGALLOCATION *v18; // rbx
  __int64 v19; // rdi
  struct DXGKVMB_COMMAND_BASE *v20; // rcx
  int v21; // eax
  struct DXGALLOCATION *v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+70h] [rbp-90h]

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v6 + 6);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v13);
    }
    ExAcquirePushLockSharedEx(v6, 0LL);
  }
  v14 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)a2 + 74) )
    goto LABEL_13;
  v15 = *((_QWORD *)a2 + 35);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  if ( (v16 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    v17 = 0LL;
    goto LABEL_14;
  }
  v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v23, v17);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v18 = v23[0];
  LODWORD(v19) = -1073741811;
  if ( v23[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23[0] + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
    {
      if ( *((_DWORD *)v23[0] + 24)
        && _InterlockedExchangeAdd((volatile signed __int32 *)v23[0] + 24, 0xFFFFFFFF) == 1
        && (*((_BYTE *)v18 + 128) & 3) == 0 )
      {
        _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        if ( !*((_BYTE *)this + 80) )
          UnlockParavirtualizedAllocationOnGuest(v23[0], 1);
        v25 = 0;
        *(_OWORD *)v24 = 0LL;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v24, this, 0x28u, 0LL, 0LL, 0LL);
        v20 = v24[0];
        if ( v24[0] )
        {
          *((_DWORD *)v24[0] + 2) = *((_DWORD *)a2 + 126);
          *((_BYTE *)v20 + 12) = 0;
          *((_DWORD *)v20 + 3) &= 0x1FFu;
          *((_BYTE *)v20 + 32) = a5;
          *(_QWORD *)v20 = 0LL;
          *((_QWORD *)v20 + 2) = 24LL;
          *((_DWORD *)v20 + 7) = *((_DWORD *)v18 + 5);
          *((_DWORD *)v20 + 6) = *((_DWORD *)a3 + 110);
          v21 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                  (struct _KTHREAD **)this,
                  (unsigned __int8 *)v24[1],
                  v24[0],
                  v25);
          v19 = v21;
          if ( v21 < 0 )
          {
            WdLogSingleEntry1(2LL, v21);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VmBusSendUnlock2 failed: 0x%I64x",
              v19,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          LODWORD(v19) = -1073741801;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v24);
      }
      else
      {
        LODWORD(v19) = 0;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, a3, v23[0], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)a3,
        (__int64)v23[0],
        -1073741811LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a4->hAllocation);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid allocation handle: 0x%I64x",
      a4->hAllocation,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v23);
  return (unsigned int)v19;
}
