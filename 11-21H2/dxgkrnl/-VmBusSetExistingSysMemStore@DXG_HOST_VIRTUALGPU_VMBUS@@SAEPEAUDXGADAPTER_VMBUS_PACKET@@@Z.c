/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380480
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // rax
  unsigned int v10; // edx
  struct _KTHREAD **v11; // r14
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  struct _KTHREAD *v19; // r8
  int v20; // ecx
  struct _EX_RUNDOWN_REF *v21; // rdx
  _QWORD *v22; // rdx
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGDEVICE *v26; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGDEVICE *v27; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v28[16]; // [rsp+78h] [rbp-90h] BYREF
  char v29[8]; // [rsp+88h] [rbp-80h] BYREF
  DXGPUSHLOCK *v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+98h] [rbp-70h]
  char v32[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v33[64]; // [rsp+B0h] [rbp-58h] BYREF
  char v34[88]; // [rsp+F0h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v30);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v31 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 1915LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1915LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_34;
  }
  v6 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v6 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v7, v8);
  v10 = v6[6];
  v26 = 0LL;
  v11 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v10, Current, &v26);
  v12 = v26;
  if ( v26 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28,
      v26);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v12, 0, v13, 0);
    LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
    if ( (int)v24 < 0 )
    {
LABEL_30:
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28);
      goto LABEL_31;
    }
    v14 = v6[7];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 31, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *((_DWORD *)v11 + 68);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v17);
      }
      ExAcquirePushLockSharedEx(v11 + 31, 0LL);
    }
    v18 = (v14 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *((_DWORD *)v11 + 74) )
    {
      v19 = v11[35];
      v20 = *((_DWORD *)v19 + 4 * v18 + 2);
      if ( ((v14 >> 25) & 0x60) == (*((_BYTE *)v19 + 16 * v18 + 8) & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
      {
        if ( (v20 & 0x1F) == 5 )
        {
          v21 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v19 + 2 * (unsigned int)v18);
LABEL_22:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v25, v21);
          ExReleasePushLockSharedEx(v11 + 31, 0LL);
          KeLeaveCriticalRegion();
          if ( v25 && v25[3].Count )
          {
            v22 = (_QWORD *)*((_QWORD *)v12 + 2);
            if ( *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL) == v22[2] )
            {
              LODWORD(v24) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v22[81] + 8LL) + 1208LL))(
                               v22[82],
                               v25[3].Count,
                               (unsigned int)v6[8]);
LABEL_29:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
              goto LABEL_30;
            }
            WdLogSingleEntry3(2LL, v12, v25, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              (__int64)v12,
              (__int64)v25,
              -1073741811LL,
              0LL,
              0LL);
          }
          else
          {
            WdLogSingleEntry1(2LL, (unsigned int)v6[7]);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid allocation handle: 0x%I64x",
              (unsigned int)v6[7],
              0LL,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v24) = -1073741811;
          goto LABEL_29;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v21 = 0LL;
    goto LABEL_22;
  }
  WdLogSingleEntry1(2LL, (unsigned int)v6[6]);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid device handle: 0x%I64x",
    (unsigned int)v6[6],
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v24) = -1073741811;
LABEL_31:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v24, 4u);
  if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return v3;
}
