/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C01F8428
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C01E8430 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0054C20 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0055180 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1C02330E0 (IsEditionComputeInjectorUIPISupported.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  char v5; // si
  struct CMouseProcessor::RawMouseEvent *v6; // rax
  int v7; // edx
  int v8; // r8d
  char v9; // bp
  struct CMouseProcessor::RawMouseEvent *v10; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // eax
  __int128 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+58h] [rbp-30h]

  v2 = (char *)this + 2768;
  v5 = 0;
  RIMLockExclusive((__int64)this + 2768);
  if ( *((_WORD *)this + 1381) )
  {
    v6 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 72), 1);
    if ( v6 )
    {
      *((_QWORD *)v6 + 20) = a2;
      v5 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          17,
          (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
      }
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
  {
    v9 = 0;
    v15 = 0LL;
    v16 = 0;
    if ( (int)IsEditionComputeInjectorUIPISupported() >= 0 )
    {
      if ( qword_1C0296BD8 )
        qword_1C0296BD8(&v15);
      v9 = 1;
    }
    RIMLockExclusive((__int64)v2);
    v10 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 72), 0);
    if ( v10 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)((char *)v10 + 52) = 0LL;
      *((LARGE_INTEGER *)v10 + 11) = PerformanceCounter;
      v12 = 2;
      *((_DWORD *)v10 + 26) = 2;
      if ( v9 && v16 )
        v12 = 1;
      *((_DWORD *)v10 + 27) = v12;
      *((_DWORD *)v10 + 28) = 32896;
      if ( v9 )
      {
        *(_QWORD *)&v14 = v15;
        DWORD2(v14) = v16;
        BYTE12(v14) = 1;
        *(_OWORD *)((char *)v10 + 116) = v14;
      }
      *((_QWORD *)v10 + 20) = a2;
      v5 = 1;
      ApiSetEditionInitiateMouseEventProcessing(0, 1u);
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
