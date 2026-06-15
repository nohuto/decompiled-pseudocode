/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180017C80
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800204A0 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18001C440 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(const wchar_t **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edx
  _UNKNOWN **v4; // rcx
  int started; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if ( *((_DWORD *)this + 108) )
  {
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, this[3]);
      v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    started = -2147024809;
  }
  else
  {
    *((_DWORD *)this + 155) = 2;
    *((_DWORD *)this + 156) = 1;
    *((_DWORD *)this + 157) = 0;
    *((_DWORD *)this + 158) = 1;
    *((_DWORD *)this + 159) = 2;
    *((_DWORD *)this + 160) = 1;
    *((_DWORD *)this + 161) = 2;
    started = CApplication::StartGoodFaithPLMExemptionTimer((CApplication *)this, v3);
    if ( started >= 0 )
    {
      *((_DWORD *)this + 108) = 1;
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)this, 0xA3u, 0);
      goto LABEL_15;
    }
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 2u )
    WPP_SF_d((TRACEHANDLE)v4[2], 0x11u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, started);
  AudPolicyLogError("CApplication::GrantGoodFaithPLMExemption", 1212, started);
LABEL_15:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)started;
}
