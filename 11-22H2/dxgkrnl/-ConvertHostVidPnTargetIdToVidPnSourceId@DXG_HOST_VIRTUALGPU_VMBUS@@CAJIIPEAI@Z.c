/*
 * XREFs of ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C0372130
 * Callers:
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379BF0 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037F1D0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007C60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007E34 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C019D5FC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v10; // rsi
  const wchar_t *v11; // r9
  _QWORD *v12; // rcx
  struct DXGDEVICE *v14; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v19[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v14 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v5, Current, &v14);
  v7 = v14;
  if ( !v14 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741811;
    WdLogSingleEntry1(2LL, 6376LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle", 6376LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v16,
    v14);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v7, 2, v8, 0);
  SourceConnectedToTargetInClientVidPn = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17, 0LL);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)v7 + 235);
    if ( v12 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v12, a2, a3);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_5;
      v10 = 6369LL;
      WdLogSingleEntry1(2LL, 6369LL);
      v11 = L"Fail to locate VidPnSourceId";
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = -1073741811;
      v10 = 6359LL;
      WdLogSingleEntry1(2LL, 6359LL);
      v11 = L"Fail to locate display adapter";
    }
  }
  else
  {
    v10 = 6351LL;
    WdLogSingleEntry1(2LL, 6351LL);
    v11 = L"Fail to lock device";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v16);
LABEL_11:
  if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
