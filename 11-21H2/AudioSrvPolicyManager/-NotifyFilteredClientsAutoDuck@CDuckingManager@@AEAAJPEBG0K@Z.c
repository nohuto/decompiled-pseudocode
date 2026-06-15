/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800110C8
 * Callers:
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18000FDD0 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18001099C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        char *a2,
        const unsigned __int16 *a3,
        int a4)
{
  int v7; // esi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  struct _RTL_CRITICAL_SECTION_DEBUG *v10; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  void *v16; // rdi
  char *v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  signed __int64 v20; // r14
  __int16 v21; // ax
  char *v22; // rax
  __int64 (__fastcall ***v23)(); // rdx
  HANDLE v24; // rax
  _DWORD *v25; // [rsp+20h] [rbp-49h] BYREF
  const unsigned __int16 *v26; // [rsp+28h] [rbp-41h]
  __int128 v27; // [rsp+30h] [rbp-39h]
  __int64 (__fastcall **v28)(); // [rsp+40h] [rbp-29h] BYREF
  __int128 v29; // [rsp+48h] [rbp-21h]
  __int64 (__fastcall ***v30)(); // [rsp+78h] [rbp+Fh]

  v26 = a3;
  v7 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  DebugInfo = v8[1].DebugInfo;
  v10 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&v8[1].LockCount;
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( DebugInfo == v10 )
    return 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, a2);
  }
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)&a2[2 * v12] );
  v13 = 2 * v12 + 2;
  ProcessHeap = GetProcessHeap();
  v15 = HeapAlloc(ProcessHeap, 0, v13 + 72);
  v16 = v15;
  v25 = v15;
  if ( v15 )
  {
    *v15 = v13 + 72;
    v25[1] = 512;
    v25[6] = v13;
    *((_BYTE *)v25 + 60) = 1;
    v25[14] = a4;
    v17 = (char *)(v25 + 18);
    v18 = v13 >> 1;
    if ( v18 - 1 > 0x7FFFFFFE )
    {
      if ( v18 )
        *(_WORD *)v17 = 0;
    }
    else
    {
      v19 = 2147483646 - v18;
      v20 = a2 - v17;
      do
      {
        if ( !(v19 + v18) )
          break;
        v21 = *(_WORD *)&v17[v20];
        if ( !v21 )
          break;
        *(_WORD *)v17 = v21;
        v17 += 2;
        --v18;
      }
      while ( v18 );
      v22 = v17 - 2;
      if ( v18 )
        v22 = v17;
      *(_WORD *)v22 = 0;
    }
    *(_QWORD *)&v27 = this;
    *((_QWORD *)&v27 + 1) = &v25;
    v28 = off_180047D50;
    v29 = v27;
    v30 = &v28;
    v7 = CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)v26, (__int64)&v28);
    if ( v30 )
    {
      v23 = &v28;
      LOBYTE(v23) = v30 != &v28;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v30)[4])(v30, v23);
    }
    v16 = v25;
  }
  v24 = GetProcessHeap();
  HeapFree(v24, 0, v16);
  v25 = 0LL;
  if ( v7 < 0 )
    AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoDuck", 669, v7);
  return (unsigned int)v7;
}
