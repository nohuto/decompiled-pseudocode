/*
 * XREFs of ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0394760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x1C002A942 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0047E24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005BAA4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRES.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A420 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C01EEB6C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C0362064 (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C03761A4 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C03765C8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rdi
  const wchar_t *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  int v9; // edx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r13d
  void *v15; // rsi
  struct _KTHREAD **v16; // r12
  unsigned int v17; // ecx
  __int64 RefCountedBuffer; // rax
  int v19; // eax
  int v20; // eax
  _BYTE v22[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+48h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v23);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v24 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v25 = -1073741637;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x18u )
      goto LABEL_32;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
    v7 = v6;
    if ( !v6 )
      goto LABEL_33;
    v8 = *(unsigned int *)(v6 + 1152);
    v9 = v25;
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 1160 < v8 )
      v9 = -1073741811;
    v25 = v9;
    if ( *(_DWORD *)(v6 + 72) == 9 )
    {
      v4 = 6171LL;
      WdLogSingleEntry1(2LL, 6171LL);
      v5 = L"Token of type D3DKMT_PM_FLIPMANAGER is unsupported for VAIL";
      goto LABEL_3;
    }
    Current = DXGPROCESS::GetCurrent(v8);
    if ( v25 != -1073741637 )
    {
LABEL_32:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v25, 4u);
      v3 = 1;
      goto LABEL_33;
    }
    if ( !DXGVAILOBJECT::IsIFlipFeatureEnabled() )
      goto LABEL_29;
    if ( !CIFlipPresentHistoryToken::IsIFlipSupported((const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v7 + 72)) )
      goto LABEL_29;
    v12 = *((_DWORD *)Current + 106);
    if ( (v12 & 0x100) == 0 || (v12 & 4) == 0 || !*(_DWORD *)(v7 + 68) || !*(_QWORD *)(v7 + 96) )
      goto LABEL_29;
    v13 = *((_QWORD *)a1 + 12);
    v14 = *(_DWORD *)(v7 + 96);
    v15 = 0LL;
    v26 = 0;
    v16 = *(struct _KTHREAD ***)(v13 + 608);
    *(_DWORD *)(v7 + 132) &= ~0x2000000u;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_QWORD *)(v7 + 136) = 0LL;
    *(_QWORD *)(v7 + 120) = 0LL;
    *(_QWORD *)(v7 + 144) = 0LL;
    *(_DWORD *)(v7 + 892) = 0;
    *(_OWORD *)(v7 + 172) = 0LL;
    v17 = *(_DWORD *)(v7 + 1152);
    if ( v17 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v17, v11, 64LL);
      v15 = (void *)RefCountedBuffer;
      if ( RefCountedBuffer )
      {
        *(_DWORD *)(RefCountedBuffer + 8) = *(_DWORD *)(v7 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        *(_DWORD *)(RefCountedBuffer + 12) = 1;
        memmove((void *)(RefCountedBuffer + 16), (const void *)(v7 + 1160), *(unsigned int *)(v7 + 1152));
      }
    }
    if ( *(_DWORD *)(v7 + 1152) && !v15 )
      goto LABEL_29;
    v19 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v16,
            v14,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v7 + 72),
            &v26);
    v25 = v19;
    if ( v19 >= 0 )
    {
      v20 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
              *(_DWORD *)(v7 + 24),
              *(_QWORD *)(v7 + 56),
              *(_QWORD *)(v7 + 32),
              *(_QWORD *)(v7 + 40),
              (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v7 + 72),
              *(_QWORD *)(v7 + 48),
              *(_DWORD *)(v7 + 64),
              *(_DWORD *)(v7 + 68),
              v15,
              v26);
      v25 = v20;
      if ( v20 >= 0 )
      {
LABEL_27:
        if ( !v15 )
          goto LABEL_30;
        CRefCountedBuffer::RefCountedBufferRelease(v15);
LABEL_29:
        v20 = v25;
LABEL_30:
        if ( v20 == -1073741637 )
          v25 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                  *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
                  *(_DWORD *)(v7 + 24),
                  *(_QWORD *)(v7 + 56),
                  *(_QWORD *)(v7 + 32),
                  *(_QWORD *)(v7 + 40),
                  0LL,
                  *(_QWORD *)(v7 + 48),
                  *(_DWORD *)(v7 + 64),
                  0,
                  0LL,
                  0xFFFFFFFF);
        goto LABEL_32;
      }
      WdLogSingleEntry1(2LL, v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SubmitPresentHistoryTokenFromVm failed",
        v25,
        0LL,
        0LL,
        0LL,
        0LL);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v7 + 72));
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 80), v19);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QuerySwapChainBindingStatusFromVm failed. BindId = 0x%I64x, Status = 0x%I64x",
        *(_QWORD *)(v7 + 80),
        v25,
        0LL,
        0LL,
        0LL);
    }
    v20 = -1073741637;
    v25 = -1073741637;
    goto LABEL_27;
  }
  v4 = 6156LL;
  WdLogSingleEntry1(2LL, 6156LL);
  v5 = L"The adapter is already closed by the guest";
LABEL_3:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_33:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v22);
  return v3;
}
