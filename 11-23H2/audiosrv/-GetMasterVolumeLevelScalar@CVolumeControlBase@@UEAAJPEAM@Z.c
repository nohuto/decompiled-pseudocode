/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18001A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001A4CC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800E4118 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int64 v5; // rcx
  float Wiper; // xmm0_4
  unsigned int v7; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( a2 )
  {
    v5 = *((unsigned int *)this + 28);
    if ( v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + (v5 << 6)));
    *a2 = Wiper;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        this,
        *((_DWORD *)this + 28),
        Wiper);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevelScalar", 0x1F9u, -2147467261);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
