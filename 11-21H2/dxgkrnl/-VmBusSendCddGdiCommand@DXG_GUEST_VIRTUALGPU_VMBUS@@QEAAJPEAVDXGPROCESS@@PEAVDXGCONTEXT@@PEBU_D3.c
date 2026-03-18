/*
 * XREFs of ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0374070
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_RENDER *a4)
{
  struct DXG_VMBUS_CHANNEL_BASE *v4; // r12
  UINT CommandLength; // ecx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  UINT AllocationCount; // eax
  size_t v13; // rbx
  struct DXGKVMB_COMMAND_BASE *v14; // rsi
  __int64 v15; // rsi
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdx
  int v17; // r15d
  struct _EX_RUNDOWN_REF *v18; // r12
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdx
  int v27; // eax
  struct _MDL *v28; // [rsp+20h] [rbp-1A8h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+50h] [rbp-178h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v30; // [rsp+58h] [rbp-170h]
  struct DXGKVMB_COMMAND_BASE *v31[2]; // [rsp+60h] [rbp-168h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-158h]

  v4 = this;
  v30 = this;
  CommandLength = a4->CommandLength;
  if ( CommandLength > 0x20000 )
  {
    v9 = 10834LL;
    WdLogSingleEntry1(2LL, 10834LL);
    v10 = L"CommandLength is invalid";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount > 0x4000 )
  {
    v9 = 10839LL;
    WdLogSingleEntry1(2LL, 10839LL);
    v10 = L"AllocationCount is invalid";
    goto LABEL_3;
  }
  v13 = 8 * AllocationCount;
  *(_OWORD *)v31 = 0LL;
  v32 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v31, v4, v13 + CommandLength + 56, 0LL, 0LL, 0LL);
  v14 = v31[0];
  if ( v31[0] )
  {
    *((_BYTE *)v31[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *((_DWORD *)v14 + 2) = 0;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 2) = 40LL;
    *((_DWORD *)v14 + 2) = *((_DWORD *)a2 + 126);
    *((_DWORD *)v14 + 8) = a4->AllocationCount;
    *((_DWORD *)v14 + 7) = a4->CommandLength;
    *((_QWORD *)v14 + 5) = a4->pNewCommandBuffer;
    *((_DWORD *)v14 + 12) = a4->Flags;
    *((_DWORD *)v14 + 6) = *((_DWORD *)a3 + 7);
    pNewAllocationList = a4->pNewAllocationList;
    v29 = (struct _EX_RUNDOWN_REF *)((char *)v14 + 56);
    memmove((char *)v14 + 56, pNewAllocationList, v13);
    memmove((char *)v14 + v13 + 56, a4->pNewCommandBuffer, a4->CommandLength);
    v17 = 0;
    if ( !a4->AllocationCount )
    {
LABEL_25:
      v27 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v4, (unsigned __int8 *)v31[1], v31[0], v32, v28);
      v15 = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(2LL, v27);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendCddGdiCommand failed: 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_27;
    }
    v18 = v29;
    while ( 1 )
    {
      hAllocation = a4->pNewAllocationList[v17].hAllocation;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a2 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v22 = *((_DWORD *)a2 + 68);
          if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, v22);
        }
        ExAcquirePushLockSharedEx((char *)a2 + 248, 0LL);
      }
      v23 = (hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)a2 + 74) )
      {
        v24 = *((_QWORD *)a2 + 35);
        v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
          && (v25 & 0x2000) == 0
          && (v25 & 0x1F) != 0 )
        {
          if ( (v25 & 0x1F) == 5 )
          {
            v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v23);
            goto LABEL_23;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v26 = 0LL;
LABEL_23:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29, v26);
      ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      LODWORD(v18[v17].Count) = HIDWORD(v29[2].Ptr);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
      if ( ++v17 >= a4->AllocationCount )
      {
        v4 = v30;
        goto LABEL_25;
      }
    }
  }
  LODWORD(v15) = -1073741801;
LABEL_27:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v31);
  return (unsigned int)v15;
}
