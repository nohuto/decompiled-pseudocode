/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0377BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0004480 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C00045AC (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0024B90 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0024ED8 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Feature_275551545__private_IsEnabledDeviceUsage @ 0x1C0026C2C (Feature_275551545__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B7D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C033BDE8 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v11; // r15
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rax
  __int64 v14; // r9
  char *v15; // rcx
  unsigned int v16; // r8d
  struct tagRECT v17; // xmm1
  unsigned int v18; // edx
  int v19; // eax
  char *v20; // rcx
  UINT v22; // [rsp+38h] [rbp-C8h]
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v26[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  char v29; // [rsp+88h] [rbp-78h]
  _BYTE v30[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[8]; // [rsp+A0h] [rbp-60h] BYREF
  DXGPUSHLOCK *v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp-50h]
  struct tagRECT v34; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v35; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v36[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v37[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v38[88]; // [rsp+128h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v32);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v33 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v5 = v4;
    if ( !v4 )
      goto LABEL_26;
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
    v7 = 16LL * *(unsigned int *)(v4 + 72);
    if ( v7 > 0xFFFFFFFF
      || (v8 = (unsigned int)(v7 + 80), (unsigned int)v7 >= 0xFFFFFFB0)
      || (v9 = v8 + *(_DWORD *)(v5 + 76), v9 < (unsigned int)v8)
      || v9 > *((_DWORD *)a1 + 36) )
    {
      v23 = -1073741811;
      goto LABEL_25;
    }
    v26[0] = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v25, *(_DWORD *)(v5 + 24), Current, v26);
    v11 = v26[0];
    if ( !v26[0] )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        *(unsigned int *)(v5 + 24),
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = -1073741811;
LABEL_10:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v25);
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v23, 4u);
      v3 = 1;
      goto LABEL_26;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v26[0]);
    v24 = 0LL;
    v13 = DXGPROCESS::GetCurrent(v12);
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26, *(_DWORD *)(v5 + 28), v13, &v24, 0, 1);
    if ( v24 )
    {
      if ( !(unsigned int)Feature_275551545__private_IsEnabledDeviceUsage() || *((struct DXGDEVICE **)v24 + 2) == v11 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v24 + 448));
        v28 = v6;
        v29 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v11, 0, v14, 0);
        v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
        if ( v23 >= 0 )
        {
          v16 = *(_DWORD *)(v5 + 36);
          v17 = *(struct tagRECT *)(v5 + 40);
          v18 = *(_DWORD *)(v5 + 32);
          v22 = *(_DWORD *)(v5 + 72);
          v34 = *(struct tagRECT *)(v5 + 56);
          v35 = v17;
          v19 = DXGCONTEXT::BltFromVm(
                  v24,
                  v18,
                  v16,
                  0LL,
                  &v24,
                  &v35,
                  &v34,
                  v22,
                  (const struct tagRECT *)(v5 + 80),
                  (struct COREDEVICEACCESS *)v36);
          v20 = (char *)v24 + 448;
          v23 = v19;
          *((_QWORD *)v24 + 57) = 0LL;
          ExReleasePushLockExclusiveEx(v20, 0LL);
          KeLeaveCriticalRegion();
          if ( v23 < 0 )
          {
            WdLogSingleEntry1(2LL, v23);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusBlt failed: 0x%I64x", v23, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v15 = (char *)v24 + 448;
          *((_QWORD *)v24 + 57) = 0LL;
          ExReleasePushLockExclusiveEx(v15, 0LL);
          KeLeaveCriticalRegion();
        }
        COREACCESS::~COREACCESS((COREACCESS *)v38);
        COREACCESS::~COREACCESS((COREACCESS *)v37);
        if ( v29 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        goto LABEL_14;
      }
      WdLogSingleEntry2(2LL, v24, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Context 0x%I64x does not belong to device 0x%I64x",
        (__int64)v24,
        (__int64)v11,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        *(unsigned int *)(v5 + 24),
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v23 = -1073741811;
LABEL_14:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    goto LABEL_10;
  }
  WdLogSingleEntry1(2LL, 2107LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    2107LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_26:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v31);
  return v3;
}
