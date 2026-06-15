/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180129A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     pow @ 0x1800679F4 (pow.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180081642 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // r14
  _QWORD *v4; // r15
  float *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  float v9; // xmm1_4
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  void *Block; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+D0h] [rbp+50h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v19 = v3;
  v4 = (_QWORD *)((char *)this + 248);
  if ( *((_QWORD *)this + 31) )
  {
    Block = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 29));
    v5 = (float *)Block;
    if ( !Block )
    {
      v2 = -2147024882;
      free(0LL);
LABEL_11:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 2069, v2);
      goto LABEL_18;
    }
    v6 = 0LL;
    v7 = *((unsigned int *)this + 29);
    if ( (_DWORD)v7 )
    {
      do
      {
        v8 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
               (_QWORD *)this + 10,
               (unsigned int)v6);
        v9 = pow(10.0, *(float *)(v8 + 4) / 20.0);
        v5[v6] = v9;
        v6 = (unsigned int)(v6 + 1);
        v7 = *((unsigned int *)this + 29);
      }
      while ( (unsigned int)v6 < (unsigned int)v7 );
      v4 = (_QWORD *)((char *)this + 248);
    }
    v18 = 50000LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *, _QWORD, int, __int64 *))(*(_QWORD *)*v4 + 32LL))(
            *v4,
            v7,
            v5,
            0LL,
            1,
            &v18);
    v2 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 )
    {
      ATL::CComPtrBase<IPart>::Release(v4);
      v2 = 0;
    }
    free(v5);
    if ( v2 < 0 )
      goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x34u,
      (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this);
  }
  _InterlockedExchange((volatile __int32 *)this + 75, 1);
  v11 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  v15[0] = off_18017CC40;
  v15[1] = this;
  v15[7] = v15;
  v13 = CSerialWorkQueue::QueueRecurringItem(v11, 0x3E8u, v12, (__int64)v15, (PTP_TIMER **)this + 38);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x811,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v2;
}
