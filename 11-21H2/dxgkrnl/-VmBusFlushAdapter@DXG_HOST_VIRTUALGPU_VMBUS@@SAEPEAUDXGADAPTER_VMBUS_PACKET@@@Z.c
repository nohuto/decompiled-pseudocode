/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036D1F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r15
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r12
  _QWORD **v16; // r14
  _QWORD *i; // rdi
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *v20; // [rsp+60h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v21[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h]
  DXGADAPTER *v23; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v24[144]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v21[1]);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  LODWORD(v22) = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3232LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3232LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_25;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v6 = *((_QWORD *)a1 + 10);
  LODWORD(v19) = -1073741811;
  v7 = *(_DWORD *)(v4 + 24);
  v20 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v23, v7, *(struct _KTHREAD ***)(v6 + 96), &v20, 1);
  if ( v20 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 28) - 1) > 9 )
    {
      WdLogSingleEntry1(2LL, *(int *)(v5 + 28));
      v8 = *(int *)(v5 + 28);
      v9 = L"Invalid adapter flush reason: 0x%I64x";
      goto LABEL_22;
    }
    if ( !*((_QWORD *)v20 + 350) )
    {
      WdLogSingleEntry1(2LL, 3255LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Must be render adapter", 3255LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_23;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v20, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v24) >= 0 )
    {
      v10 = *(_DWORD *)(v5 + 28);
      v11 = 3;
      v12 = *((_QWORD *)a1 + 10);
      v13 = v10 - 3;
      if ( !v13 )
      {
        v11 = 2;
LABEL_16:
        v15 = v12 + 288;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 288));
        v16 = (_QWORD **)(v12 + 320);
        for ( i = *v16; i != v16; i = (_QWORD *)*i )
          DXGDEVICE::FlushScheduler(i - 15, v11, 0xFFFFFFFD, 0);
        ExReleasePushLockSharedEx(v15, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_16;
      if ( v14 == 1 )
      {
        v11 = 4;
        goto LABEL_16;
      }
    }
LABEL_20:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
  v8 = *(unsigned int *)(v5 + 24);
  v9 = L"Invalid adapter handle: 0x%I64x";
LABEL_22:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_23:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v19, 4u);
  if ( v23 )
    DXGADAPTER::ReleaseReference(v23);
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v3;
}
