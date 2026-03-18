/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C037A88C
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C019F7B4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int *v9; // r14
  __int64 v14; // rbx
  __int64 v15; // r9
  int v16; // edi
  unsigned int *v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // rdx
  unsigned int v21[4]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v22; // [rsp+60h] [rbp-168h] BYREF
  int v23; // [rsp+70h] [rbp-158h]

  v9 = a9;
  v23 = 0;
  v22 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v22, this, 0x30u, 0LL, 0LL, 0LL);
  v14 = v22;
  if ( !(_QWORD)v22 )
    goto LABEL_5;
  *(_DWORD *)(v14 + 8) = DXGPROCESS::GetHostProcess(a2);
  *(_BYTE *)(v14 + 12) = 0;
  *(_DWORD *)(v14 + 12) &= 0x1FFu;
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 16) = 32LL;
  *(_DWORD *)(v14 + 24) = *((_DWORD *)a3 + 110);
  *(_DWORD *)(v14 + 32) = a5;
  *(_DWORD *)(v14 + 40) = a7;
  *(_BYTE *)(v14 + 28) = a4;
  *(_DWORD *)(v14 + 36) = a6;
  if ( a6 >= 0x8000 )
  {
    WdLogSingleEntry1(2LL, 9975LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocatoins is invalid", 9975LL, 0LL, 0LL, 0LL, 0LL);
    v16 = -1073741811;
    goto LABEL_15;
  }
  v17 = (unsigned int *)operator new[]((4 * a6 + 15) & 0xFFFFFFF8, 0x4B677844u, 64LL, v15);
  v18 = v17;
  if ( !v17 )
  {
LABEL_5:
    v16 = -1073741801;
    goto LABEL_15;
  }
  v21[0] = (4 * a6 + 15) & 0xFFFFFFF8;
  v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v22, v17, v21);
  if ( v16 < 0 || (v16 = -1073741823, v21[0] < ((4 * a6 + 15) & 0xFFFFFFF8)) || (v16 = v18[1], v16 < 0) )
  {
    WdLogSingleEntry1(2LL, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendOpenResource failed: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *a8 = *v18;
    if ( a6 )
    {
      v19 = a6;
      do
      {
        *v9 = *(unsigned int *)((char *)v9 + (char *)(v18 + 2) - (char *)a9);
        ++v9;
        --v19;
      }
      while ( v19 );
    }
  }
  operator delete[](v18);
LABEL_15:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v22);
  return (unsigned int)v16;
}
