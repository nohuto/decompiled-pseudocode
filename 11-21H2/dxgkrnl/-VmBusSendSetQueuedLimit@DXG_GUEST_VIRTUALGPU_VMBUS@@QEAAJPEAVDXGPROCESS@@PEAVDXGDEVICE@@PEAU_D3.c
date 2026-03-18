/*
 * XREFs of ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C037C910
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C01C60A0 (DxgkSetQueuedLimit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_SETQUEUEDLIMIT *a4)
{
  __int64 v8; // rbx
  int v9; // ebx
  int HostProcess; // eax
  __int128 v11; // xmm0
  D3DKMT_HANDLE hDevice; // eax
  unsigned int v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  struct _D3DKMT_SETQUEUEDLIMIT v17; // [rsp+160h] [rbp+60h] BYREF
  int v18; // [rsp+170h] [rbp+70h]

  v16 = 0;
  v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v15, this, 0x28u, 0LL, 0LL, 0LL);
  v8 = v15;
  if ( (_QWORD)v15 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 20) = 0;
    *(_BYTE *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_DWORD *)(v8 + 8) = HostProcess;
    *(_DWORD *)(v8 + 16) = 31;
    v11 = (__int128)*a4;
    v14[0] = 24;
    *(_OWORD *)(v8 + 24) = v11;
    *(_DWORD *)(v8 + 24) = *((_DWORD *)a3 + 110);
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v15, &v17, v14);
    if ( v9 < 0
      || a4->Type == D3DKMT_GET_QUEUEDLIMIT_PRESENT
      && ((v9 = -1073741823, v14[0] < 0x14)
       || (hDevice = a4->hDevice, v9 = v18, *a4 = v17, a4->hDevice = hDevice, v9 < 0)) )
    {
      WdLogSingleEntry1(3LL, v9);
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v15);
  return (unsigned int)v9;
}
