/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0379004
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock2Internal @ 0x1C0317934 (DxgkLock2Internal.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03BC8A4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009C20 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C02D7560 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // edi
  char *v6; // rbx
  struct _D3DKMT_LOCK2 *v7; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  struct DXGALLOCATION *v18; // rbx
  int v19; // edi
  signed __int32 v20; // eax
  struct DXGALLOCATION *v21; // rdi
  char v22; // al
  __int64 v23; // rcx
  PVOID v24; // rax
  __int64 v25; // rsi
  int HostProcess; // eax
  struct _D3DKMT_LOCK2 *v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rdi
  unsigned int v30; // edi
  struct _MDL *v31; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v33; // eax
  __int64 v34; // rbx
  const wchar_t *v35; // r9
  PMDL Mdl; // rax
  __int64 v37; // r15
  struct _MDL *v38; // rdx
  struct _MDL *v39; // rcx
  __int64 v40; // r8
  struct _MDL *v41; // rax
  NTSTATUS v42; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v43; // rax
  unsigned int v45; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length[2]; // [rsp+58h] [rbp-A8h] BYREF
  PVOID VirtualAddress; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGALLOCATION *v48; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_LOCK2 *v49; // [rsp+70h] [rbp-90h]
  _BYTE v50[24]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+1B0h] [rbp+B0h] BYREF
  int v54; // [rsp+1C0h] [rbp+C0h]
  struct _EX_RUNDOWN_REF *v55[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v56; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned __int64 v57; // [rsp+2E8h] [rbp+1E8h]

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 248;
  v49 = a4;
  v48 = 0LL;
  v7 = a4;
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v55, v17);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v48, v55);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v55);
  v18 = v48;
  v19 = -1073741811;
  if ( !v48 )
  {
    WdLogSingleEntry1(3LL, 10493LL);
    goto LABEL_65;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v48 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
  {
    WdLogSingleEntry3(2LL, a3, v48, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)a3,
      (__int64)v18,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_65;
  }
  *(_QWORD *)Length = *((unsigned int *)v48 + 30);
  if ( !*((_QWORD *)v48 + 13) )
  {
    v28 = *((_QWORD *)v48 + 6);
    v53 = 0LL;
    v54 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v53, this, 0x40u, 0LL, 0LL, 0LL);
    v29 = v53;
    if ( !(_QWORD)v53 )
    {
      v19 = -1073741801;
LABEL_64:
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v53);
      goto LABEL_65;
    }
    *(_DWORD *)(v29 + 8) = DXGPROCESS::GetHostProcess(a2);
    *(_BYTE *)(v29 + 12) = 0;
    *(_DWORD *)(v29 + 12) &= 0x1FFu;
    *(_QWORD *)v29 = 0LL;
    *(_BYTE *)(v29 + 48) = 0;
    *(_QWORD *)(v29 + 52) = 0LL;
    *(_QWORD *)(v29 + 16) = 23LL;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, a2);
    *(_DWORD *)(v29 + 28) = *((_DWORD *)v18 + 5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
    *(_DWORD *)(v29 + 24) = *((_DWORD *)a3 + 110);
    *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v29 + 32) = v7->Flags.0;
    if ( a5 )
    {
      *(_BYTE *)(v29 + 48) = 1;
      *(_QWORD *)(v29 + 52) = 0LL;
    }
    v45 = 16;
    v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v53, &v56, &v45);
    if ( v19 < 0 || (v19 = -1073741823, v45 < 0x10) || (v19 = v56, v56 < 0) )
    {
LABEL_63:
      WdLogSingleEntry1(2LL, v19);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed: 0x%I64x", v19, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_64;
    }
    v30 = *(_DWORD *)(v28 + 4);
    v31 = 0LL;
    VirtualAddress = 0LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v33 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG *, int, unsigned int))VirtualMemoryInterface)(
            -1LL,
            &VirtualAddress,
            0LL,
            Length,
            8392704,
            ~(unsigned __int16)(v30 >> 9) & 0x400 | 4u);
    v19 = v33;
    if ( v33 >= 0 )
    {
      Mdl = IoAllocateMdl(0LL, Length[0], 0, 0, 0LL);
      v31 = Mdl;
      if ( !Mdl )
      {
        v37 = 10622LL;
        v19 = -1073741801;
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 9), -1073741801LL, 10622LL);
        this = (DXG_GUEST_VIRTUALGPU_VMBUS *)*((_QWORD *)this + 9);
        v35 = L"Adapter 0x%I64x: Failed to allocate memory for CPU visible buffer, returning 0x%I64x";
        v34 = -1073741801LL;
        goto LABEL_54;
      }
      v38 = Mdl + 1;
      v39 = (struct _MDL *)(v57 >> 12);
      if ( (unsigned int)(*(_QWORD *)Length >> 12) )
      {
        v40 = (unsigned int)(*(_QWORD *)Length >> 12);
        do
        {
          v41 = v39;
          v39 = (struct _MDL *)((char *)v39 + 1);
          v38->Next = v41;
          v38 = (struct _MDL *)((char *)v38 + 8);
          --v40;
        }
        while ( v40 );
      }
      v42 = MmRotatePhysicalView(VirtualAddress, (PSIZE_T)Length, v31, MmToFrameBufferNoCopy, 0LL, 0LL);
      v19 = v42;
      if ( v42 >= 0 )
      {
        *((_DWORD *)v18 + 18) |= 0x80000u;
        *((_QWORD *)v18 + 13) = VirtualAddress;
        *((_QWORD *)v18 + 14) = v57;
        _InterlockedIncrement((volatile signed __int32 *)v18 + 24);
        _InterlockedIncrement(&g_VgpuNumAllocationsUnderCpuAccess);
        _InterlockedIncrement(&g_VgpuNumAllocationsLocked);
        g_VgpuNumLockedBytes += *(_QWORD *)Length;
        v49->pData = VirtualAddress;
        goto LABEL_61;
      }
      v34 = 10637LL;
      this = (DXG_GUEST_VIRTUALGPU_VMBUS *)v42;
      WdLogSingleEntry2(2LL, v42, 10637LL);
      v35 = L"MmRotatePhysicalView failed: 0x%I64x";
    }
    else
    {
      v34 = v33;
      WdLogSingleEntry2(2LL, this, v33);
      v35 = L"Adapter 0x%I64x: Failed to allocate memory, returning 0x%I64x";
    }
    v37 = 0LL;
LABEL_54:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v35, (__int64)this, v34, v37, 0LL, 0LL);
    WdLogSingleEntry1(2LL, v19);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed: 0x%I64x", v19, 0LL, 0LL, 0LL, 0LL);
    if ( VirtualAddress )
    {
      if ( (*(_DWORD *)(v28 + 4) & 0x40000) != 0 )
      {
        MmUnmapLockedPages(VirtualAddress, v31);
      }
      else
      {
        v43 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, PVOID *, ULONG *, __int64))v43 + 2))(-1LL, &VirtualAddress, Length, 0x8000LL);
      }
    }
    if ( !v31 )
    {
LABEL_62:
      if ( v19 >= 0 )
        goto LABEL_64;
      goto LABEL_63;
    }
LABEL_61:
    IoFreeMdl(v31);
    goto LABEL_62;
  }
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v48 + 24, 1u);
  v21 = v48;
  if ( !v20 && !(*((_BYTE *)v48 + 128) & 1 | ((*((_BYTE *)v48 + 128) & 2) != 0)) )
  {
    _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
    v21 = v48;
  }
  v22 = *((_BYTE *)v21 + 128);
  if ( (v22 & 1) != 0 )
  {
    v23 = *((_QWORD *)v18 + 13);
    if ( (*(_BYTE *)(v23 + 10) & 5) != 0 )
      v24 = *(PVOID *)(v23 + 24);
    else
      v24 = MmMapLockedPagesSpecifyCache((PMDL)v23, 0, MmCached, 0LL, 0, 0x40000010u);
  }
  else
  {
    if ( *((_BYTE *)this + 80) && (v22 & 2) == 0 )
    {
      v52 = 0;
      v51 = 0LL;
      DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v51, this, 0x40u, 0LL, 0LL, 0LL);
      v25 = v51;
      HostProcess = DXGPROCESS::GetHostProcess(a2);
      *(_BYTE *)(v25 + 12) = 0;
      *(_DWORD *)(v25 + 12) &= 0x1FFu;
      *(_QWORD *)v25 = 0LL;
      *(_DWORD *)(v25 + 8) = HostProcess;
      *(_QWORD *)(v25 + 16) = 23LL;
      *(_BYTE *)(v25 + 48) = 0;
      *(_QWORD *)(v25 + 52) = 0LL;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, a2);
      *(_DWORD *)(v25 + 28) = *((_DWORD *)v21 + 5);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
      v27 = v49;
      *(_DWORD *)(v25 + 24) = *((_DWORD *)a3 + 110);
      *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v25 + 32) = v27->Flags.0;
      if ( a5 )
      {
        *(_BYTE *)(v25 + 48) = 1;
        *(_QWORD *)(v25 + 52) = 0LL;
      }
      v45 = 16;
      if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v51, v55, &v45) < 0
        || v45 < 0x10 )
      {
        UnlockParavirtualizedAllocationOnGuest(v21, 1);
        *((_QWORD *)v18 + 13) = 0LL;
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v51);
        v19 = -1073741823;
        goto LABEL_65;
      }
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v51);
      v7 = v49;
    }
    v24 = (PVOID)*((_QWORD *)v18 + 13);
  }
  v7->pData = v24;
  v19 = 0;
LABEL_65:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v48);
  return (unsigned int)v19;
}
