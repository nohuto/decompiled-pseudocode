/*
 * XREFs of ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180016144
 * Callers:
 *     ??1CApplication@@MEAA@XZ @ 0x180014F70 (--1CApplication@@MEAA@XZ.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::CleanupDelayedInteractivityNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  char *v5; // rdi
  char *v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  if ( *((_QWORD *)this + 67) )
  {
    v3 = *((_QWORD *)this + 67);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((const wchar_t **)this + 3));
      v3 = *((_QWORD *)this + 67);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v3,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 67),
      1LL);
    v5 = (char *)this + 544;
    v6 = (char *)*((_QWORD *)v5 + 7);
    if ( v6 )
    {
      LOBYTE(v4) = v6 != v5;
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 32LL))(v6, v4);
      *((_QWORD *)v5 + 7) = 0LL;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
