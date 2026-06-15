/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180128720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x180128060 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  char *v1; // rbx
  struct _TP_TIMER *v3; // rcx

  v1 = (char *)this + 288;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  v3 = (struct _TP_TIMER *)*((_QWORD *)v1 + 6);
  v1[56] = 1;
  SetThreadpoolTimer(v3, 0LL, 0, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)v1);
  WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)v1 + 6), 1);
  CloseThreadpoolTimer(*((PTP_TIMER *)v1 + 6));
  VolumeHardwareLogger::LogBurst((struct _RTL_CRITICAL_SECTION *)v1);
  *((_QWORD *)v1 + 8) = 0LL;
  if ( *((_QWORD *)this + 31) && *((_DWORD *)this + 70) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(**((_QWORD **)this + 31) + 120LL))(*((_QWORD *)this + 31), this);
    *((_DWORD *)this + 70) = 0;
  }
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
}
