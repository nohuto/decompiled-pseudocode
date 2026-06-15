/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x180128430
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

void __fastcall CVolumeSoftware::NotifyAudioDGTerminated(CVolumeSoftware *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
  if ( this != (CVolumeSoftware *)-256LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
}
