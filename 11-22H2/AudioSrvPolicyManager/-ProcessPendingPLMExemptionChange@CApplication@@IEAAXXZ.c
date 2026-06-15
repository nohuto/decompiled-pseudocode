/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180009420
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006780 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007EE0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x1800097E0 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // ebp
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 94) && *((_DWORD *)this + 94) != GetCurrentThreadId() )
    {
      if ( !v2 )
        return;
      goto LABEL_18;
    }
    if ( !*((_DWORD *)this + 95) )
      break;
    *((_DWORD *)this + 94) = GetCurrentThreadId();
    v3 = *((_DWORD *)this + 95);
    *((_DWORD *)this + 95) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v3);
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
LABEL_18:
  LeaveCriticalSection(v2);
}
