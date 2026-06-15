/*
 * XREFs of ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18002A2D4
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002994C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5F0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::SetupProcessTerminationWatcher(CProcess *this)
{
  signed int v2; // ebx
  __int64 v3; // rax
  volatile int *v4; // rdx
  signed int LastError; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CProcess *))(*(_QWORD *)ThreadPool + 80LL))(
         ThreadPool,
         CProcess::ProcessTerminationWatcherCallback,
         this);
  *((_QWORD *)this + 51) = v3;
  if ( v3 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CProcess *)((char *)this + 20), v4);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ThreadPool + 88LL))(
      ThreadPool,
      *((_QWORD *)this + 51),
      *((_QWORD *)this + 19),
      0LL);
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v2);
      }
      AudPolicyLogError("CProcess::SetupProcessTerminationWatcher", 3561, v2);
    }
  }
  return (unsigned int)v2;
}
