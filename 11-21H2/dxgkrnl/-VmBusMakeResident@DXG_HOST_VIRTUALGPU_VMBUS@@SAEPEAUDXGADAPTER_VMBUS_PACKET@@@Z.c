/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036F930
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C694 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C9BF0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rsi
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  struct _KTHREAD **v7; // r8
  DXGDEVICE *v8; // r15
  struct DXGDEVICE *v9; // rax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rsi
  int v22; // eax
  struct DXGDEVICE *v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h]
  DXGDEVICE *v29; // [rsp+88h] [rbp-80h] BYREF
  __int64 v30; // [rsp+90h] [rbp-78h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-60h]
  D3DDDI_MAKERESIDENT v34; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v35[8]; // [rsp+E0h] [rbp-28h] BYREF
  DXGPUSHLOCK *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  __int128 v38; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v39; // [rsp+108h] [rbp+0h]
  _BYTE v40[8]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v41[64]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v42[88]; // [rsp+160h] [rbp+58h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v36);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v37 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v4 )
      goto LABEL_52;
    v38 = 0LL;
    v39 = 0LL;
    v5 = *(unsigned int *)(v4 + 36);
    if ( !(_DWORD)v5 || ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 < 4 )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size 0x%I64x",
        *((unsigned int *)a1 + 36),
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v39) = -1073741811;
      goto LABEL_49;
    }
    v6 = *(_DWORD *)(v4 + 24);
    if ( !v6 )
    {
      v34.Flags.Value = *(_DWORD *)(v4 + 32);
      v34.NumAllocations = v5;
      v34.AllocationList = (const D3DKMT_HANDLE *)(v4 + 40);
      v34.hPagingQueue = *(_DWORD *)(v4 + 28);
      v34.PriorityList = 0LL;
      memset(&v34.Flags + 1, 0, 20);
      LODWORD(v39) = DxgkMakeResidentInternal(&v34, 0, 0LL);
      v38 = *(_OWORD *)&v34.PagingFenceValue;
      goto LABEL_49;
    }
    if ( (_DWORD)v5 != 1 )
    {
      WdLogSingleEntry1(2LL, 4797LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NumAllocation mist be 1 when hDevice is not 0",
        4797LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v39) = -1073741811;
      goto LABEL_50;
    }
    v7 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
    v29 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v6, v7, &v29);
    v8 = v29;
    if ( !v29 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        *(unsigned int *)(v4 + 24),
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = v24;
      LODWORD(v39) = -1073741811;
      if ( !v24 )
        goto LABEL_50;
      goto LABEL_11;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v29);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v8, 0, v10, 0);
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
    LODWORD(v39) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device was removed: 0x%I64x",
        (int)v39,
        0LL,
        0LL,
        0LL,
        0LL);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      COREACCESS::~COREACCESS((COREACCESS *)v41);
      if ( v27[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
      v9 = v24;
      if ( v24 )
      {
LABEL_11:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
      }
LABEL_49:
      if ( (int)v39 >= 0 )
      {
LABEL_51:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v38, 0x18u);
        v3 = 1;
        goto LABEL_52;
      }
LABEL_50:
      WdLogSingleEntry1(3LL, (int)v39);
      goto LABEL_51;
    }
    if ( !DXGDEVICE::UmdManagesResidency(v8) )
    {
LABEL_36:
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      COREACCESS::~COREACCESS((COREACCESS *)v41);
      if ( v27[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
      v9 = v24;
      if ( v24 )
        goto LABEL_11;
      goto LABEL_49;
    }
    v12 = *(_DWORD *)(v4 + 40);
    v30 = 0LL;
    v32 = 0LL;
    v28 = *((_QWORD *)v8 + 2);
    v33 = *((_QWORD *)a1 + 11);
    v13 = v33 + 248;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v16 = *(_DWORD *)(v13 + 24);
        if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, (const EVENT_DESCRIPTOR *)"g", v15, v16);
      }
      ExAcquirePushLockSharedEx(v13, 0LL);
    }
    v17 = (v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *(_DWORD *)(v33 + 296) )
    {
      v18 = *(_QWORD *)(v33 + 280);
      v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
      if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      {
        if ( (v19 & 0x1F) == 5 )
        {
          v20 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
LABEL_32:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v25, v20);
          ExReleasePushLockSharedEx(v13, 0LL);
          KeLeaveCriticalRegion();
          if ( v25 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) )
            {
              v21 = v28;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v28 + 648) + 8LL)
                                                                           + 992LL))(
                *((_QWORD *)v8 + 95),
                0LL,
                &v30,
                &v32);
              v31 = 0LL;
              v26 = 0LL;
              v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v21 + 648) + 8LL) + 784LL))(
                      *(_QWORD *)(v21 + 656),
                      v30,
                      v25 + 3,
                      1LL,
                      3,
                      &v31,
                      &v26);
              LODWORD(v39) = v22;
              if ( v22 >= 0 )
              {
                if ( v22 == 259 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v21 + 648)
                                                                                            + 8LL)
                                                                                + 1000LL))(
                    *(_QWORD *)(v21 + 656),
                    &v32,
                    &v31,
                    1LL);
                  LODWORD(v39) = 0;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, v22);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to make staging allocation resident. Returning 0x%I64x",
                  (int)v39,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              goto LABEL_35;
            }
            WdLogSingleEntry3(2LL, v8, v25, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              (__int64)v8,
              (__int64)v25,
              -1073741811LL,
              0LL,
              0LL);
          }
          else
          {
            WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 40));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid allocation handle: 0x%I64x",
              *(unsigned int *)(v4 + 40),
              0LL,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v39) = -1073741811;
LABEL_35:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
          goto LABEL_36;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v20 = 0LL;
    goto LABEL_32;
  }
  WdLogSingleEntry1(2LL, 4771LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4771LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_52:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  return v3;
}
