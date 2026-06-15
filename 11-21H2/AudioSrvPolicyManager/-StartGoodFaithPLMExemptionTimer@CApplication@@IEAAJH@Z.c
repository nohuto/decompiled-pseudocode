/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18001C440
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180017C80 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(const wchar_t **this)
{
  signed int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rdx
  signed int LastError; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v9 = v3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, this[3]);
  }
  if ( !this[53] )
  {
    v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
           this);
    this[53] = (const wchar_t *)v4;
    if ( v4 )
    {
      v7 = -200000000;
      v8 = -1;
      *((_DWORD *)this + 109) = 1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v4,
        &v7,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v2);
        }
        AudPolicyLogError("CApplication::StartGoodFaithPLMExemptionTimer", 1250, v2);
      }
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v2;
}
