/*
 * XREFs of ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x1801EA73C
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x1801EA85C (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180112E80 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x1801EA650 (-ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801EA9FC (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801EAAF4 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Schedule(
        RTL_SRWLOCK *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rbp
  __int64 v7; // rsi
  char *Ptr; // rcx
  __int64 v10; // rcx
  int ready; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = this + 11;
  v5 = a4;
  v7 = a3;
  AcquireSRWLockExclusive(this + 11);
  Ptr = (char *)this[14].Ptr;
  v19 = v4;
  while ( Ptr != this[15].Ptr )
  {
    if ( !*(_BYTE *)(*(_QWORD *)Ptr + 240LL) )
      goto LABEL_8;
    Ptr += 8;
  }
  if ( (int)v7 - LODWORD(this[20].Ptr) > 5 )
  {
    CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)this);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0xqq_EventWriteTransfer(
        v10,
        &EVTDESC_COMPUTESCRIBBLE_WORKERHANG,
        *(_QWORD *)a2,
        v7,
        (char)this[20].Ptr);
  }
LABEL_8:
  if ( this[12].Ptr )
    goto LABEL_14;
  ready = CComputeScribbleScheduler::SetupWakeupFence((CComputeScribbleScheduler *)this, a2);
  v12 = ready;
  if ( ready >= 0 )
  {
    ready = CComputeScribbleScheduler::ReadyWakeupFence((CComputeScribbleScheduler *)this, v7);
    v12 = ready;
    if ( ready < 0 )
    {
      v13 = 344LL;
      goto LABEL_13;
    }
LABEL_14:
    v14 = (char *)this[17].Ptr;
    v15 = 32 * v5;
    v16 = *((_OWORD *)a2 + 1);
    v12 = 0;
    *(_OWORD *)&v14[v15] = *(_OWORD *)a2;
    *(_OWORD *)&v14[v15 + 16] = v16;
    goto LABEL_15;
  }
  v13 = 343LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)ready);
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
  return v12;
}
