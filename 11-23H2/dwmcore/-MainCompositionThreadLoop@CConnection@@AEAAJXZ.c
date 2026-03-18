/*
 * XREFs of ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800BF2D8
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800BF1CC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800BF3AC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800BF558 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z @ 0x1800FA9F4 (-Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801D1740 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CConnection::MainCompositionThreadLoop(struct CTransport **this)
{
  int v2; // ebx
  struct CTransport *v3; // rbx
  CPartitionVerticalBlankScheduler *v4; // rax
  CPartitionVerticalBlankScheduler *v5; // rax
  __int64 v6; // rcx
  CPartitionVerticalBlankScheduler *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  struct CTransport *v10; // rcx
  __int64 v11; // rdx
  char *v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CKernelTransport::Create(this + 1);
  if ( v2 < 0 )
  {
    v11 = 70LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v2,
      (int)v13);
    return (unsigned int)v2;
  }
  v3 = this[1];
  v4 = (CPartitionVerticalBlankScheduler *)DefaultHeap::AllocClear(0x2498uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v4, v3, (struct CConnection *)this);
  v7 = v5;
  if ( !v5 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x21u, 0LL);
    goto LABEL_12;
  }
  v8 = CPartitionVerticalBlankScheduler::Initialize(v5);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x22u, 0LL);
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v7, 1u);
LABEL_12:
    v11 = 75LL;
    goto LABEL_13;
  }
  v10 = this[6];
  this[4] = v7;
  SetEvent(v10);
  *((_BYTE *)this + 24) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v13 = &v14;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  }
  do
  {
    v2 = (*(__int64 (__fastcall **)(struct CTransport *))(*(_QWORD *)this[4] + 80LL))(this[4]);
    if ( v2 < 0 )
    {
      v11 = 89LL;
      goto LABEL_13;
    }
  }
  while ( *((_BYTE *)this + 24) );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
  return 0LL;
}
