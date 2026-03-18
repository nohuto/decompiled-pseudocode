/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C037FAB0
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C03119C0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C037E9E4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const unsigned int *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        void *a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct DXGHWQUEUE *a10)
{
  DXGSYNCOBJECT **v10; // r14
  struct DXGCONTEXT *v11; // rbp
  __int64 v12; // rbx
  const wchar_t *v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rdi
  _DWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  signed __int64 v22; // r8
  char *v23; // r12
  int v24; // r13d
  int HostHandle; // eax
  int v26; // eax
  _BYTE v32[24]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v33; // [rsp+90h] [rbp-168h] BYREF
  int v34; // [rsp+A0h] [rbp-158h]
  struct DXGDEVICESYNCOBJECT **v35; // [rsp+228h] [rbp+30h]

  v10 = a5;
  v11 = a3;
  if ( !a10 )
  {
    if ( a3 )
      goto LABEL_8;
LABEL_7:
    v12 = 9129LL;
    WdLogSingleEntry1(2LL, 9129LL);
    v13 = L"Only and atleast one of HwQueue or Context must be specified";
    goto LABEL_28;
  }
  if ( a3 )
    goto LABEL_7;
  if ( !a4 || !a7 )
  {
    v12 = 9137LL;
    WdLogSingleEntry1(2LL, 9137LL);
    v13 = L"Submit wait to HwQueue requires SyncObjectHandles and MonitoredFenceValueArray";
LABEL_28:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
LABEL_8:
  v14 = a9;
  if ( a9 - 1 > 0x1FFFF )
  {
    v12 = 9144LL;
    WdLogSingleEntry1(2LL, 9144LL);
    v13 = L"ObjectCount is invalid";
    goto LABEL_28;
  }
  v15 = 8 * a9 + 40;
  v16 = 4 * a9 + v15;
  if ( v16 > 0x20000 )
  {
    WdLogSingleEntry1(2LL, 9152LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Command size is too big", 9152LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v33 = 0LL;
  v34 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v33, this, v16, 0LL, 0LL, 0LL);
  v17 = v33;
  if ( (_QWORD)v33 )
  {
    *(_BYTE *)(v33 + 12) = 0;
    v19 = (_DWORD *)(v17 + v15);
    *(_DWORD *)(v17 + 12) &= 0x1FFu;
    *(_QWORD *)v17 = 0LL;
    *(_DWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 25LL;
    if ( a10 )
    {
      memmove(v19, a4, 4 * a9);
      memmove((void *)(v17 + 40), a7, 8 * a9);
      v20 = *((_DWORD *)a10 + 7);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, a2);
      if ( a9 )
      {
        v21 = v17 - (_QWORD)a5;
        v22 = (char *)a6 - (char *)a5;
        v35 = (struct DXGDEVICESYNCOBJECT **)((char *)a6 - (char *)a5);
        v23 = (char *)((char *)a4 - (char *)v19);
        do
        {
          v24 = *((_DWORD *)*v10 + 50);
          if ( (unsigned int)(v24 - 5) <= 1 )
          {
            *v19 = (*(_DWORD **)((char *)v10 + v22))[11];
            *(DXGSYNCOBJECT **)((char *)v10 + v21 + 40) = *(DXGSYNCOBJECT **)((char *)v10 + (_BYTE *)a7 - (_BYTE *)a5);
          }
          else
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(*v10, *(_DWORD *)((char *)v19 + (_QWORD)v23));
            v21 = v17 - (_QWORD)a5;
            v22 = (signed __int64)v35;
            *v19 = HostHandle;
            if ( v24 == 3 )
            {
              *(_QWORD *)(v17 + 40) = a8;
              *(_BYTE *)(v17 + 32) = 1;
            }
          }
          ++v19;
          ++v10;
          --v14;
        }
        while ( v14 );
        LODWORD(v14) = a9;
        v11 = a3;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      v20 = *((_DWORD *)v11 + 7);
    }
    *(_DWORD *)(v17 + 24) = v20;
    *(_DWORD *)(v17 + 8) = DXGPROCESS::GetHostProcess(a2);
    *(_DWORD *)(v17 + 28) = v14;
    v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(
            (struct _KTHREAD **)this,
            (struct DXGVMBUSMESSAGE *)&v33);
    v18 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(2LL, v26);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
        v18,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 9160LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for command",
      9160LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v18) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v33);
  return (unsigned int)v18;
}
