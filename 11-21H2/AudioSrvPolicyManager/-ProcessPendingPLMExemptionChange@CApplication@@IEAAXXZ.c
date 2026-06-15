/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800192B0
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016B1C (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001C3E0 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebp
  _QWORD *v4; // r14
  __int64 v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 94) && *((_DWORD *)this + 94) != GetCurrentThreadId() )
    {
      if ( !v2 )
        return;
      goto LABEL_19;
    }
    if ( !*((_DWORD *)this + 95) )
      break;
    *((_DWORD *)this + 94) = GetCurrentThreadId();
    v3 = *((_DWORD *)this + 95);
    *((_DWORD *)this + 95) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v3);
    }
    v4 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      CProcess::NotifyPLM(v5, v3);
    }
    if ( this != (CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  *((_DWORD *)this + 94) = 0;
  if ( !v2 )
    return;
LABEL_19:
  LeaveCriticalSection(v2);
}
