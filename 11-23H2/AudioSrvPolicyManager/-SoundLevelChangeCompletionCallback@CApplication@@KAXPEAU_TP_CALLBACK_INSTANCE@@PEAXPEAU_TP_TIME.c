/*
 * XREFs of ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180009540
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180009790 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180009B90 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::SoundLevelChangeCompletionCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  _QWORD *v8; // rdi
  __int64 v9; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a2 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 224));
  *((_DWORD *)a2 + 68) = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v5 = a2 + 684;
  while ( 1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
    if ( *((_DWORD *)a2 + 80) )
    {
      v5 = a2 + 684;
      if ( *((_DWORD *)a2 + 80) != GetCurrentThreadId() )
      {
        if ( a2 == (char *)-280LL )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
    if ( *((_DWORD *)a2 + 81) == *((_DWORD *)a2 + 82) && !*v5 )
      break;
    *((_DWORD *)a2 + 80) = GetCurrentThreadId();
    v6 = *((_DWORD *)a2 + 81);
    *((_DWORD *)a2 + 82) = v6;
    *v5 = 0;
    if ( a2 != (char *)-280LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
    CApplication::SendSoundLevelNotification(a2, v6);
  }
  *((_DWORD *)a2 + 80) = 0;
  if ( a2 != (char *)-280LL )
  {
LABEL_14:
    LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
    goto LABEL_15;
  }
  while ( 1 )
  {
LABEL_15:
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 336));
    if ( *((_DWORD *)a2 + 94) && *((_DWORD *)a2 + 94) != GetCurrentThreadId() )
    {
      if ( a2 == (char *)-336LL )
        return;
      goto LABEL_31;
    }
    if ( !*((_DWORD *)a2 + 95) )
      break;
    *((_DWORD *)a2 + 94) = GetCurrentThreadId();
    v7 = *((_DWORD *)a2 + 95);
    *((_DWORD *)a2 + 95) = 0;
    if ( a2 != (char *)-336LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 336));
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v7);
    }
    v8 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v8 )
    {
      v9 = v8[2];
      v8 = (_QWORD *)*v8;
      CProcess::NotifyPLM(v9, v7);
    }
    if ( a2 != (char *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  }
  *((_DWORD *)a2 + 94) = 0;
  if ( a2 == (char *)-336LL )
    return;
LABEL_31:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 336));
}
