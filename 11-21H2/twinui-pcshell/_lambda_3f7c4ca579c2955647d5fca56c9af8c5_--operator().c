/*
 * XREFs of _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator() @ 0x1801AF8E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::Run @ 0x1801B1160 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GettingInputAppIdRetryCountMaxReached@AEAU?$atomic@I@std@@@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAU?$atomic@I@std@@@Z @ 0x180457C14 (--$GettingInputAppIdRetryCountMaxReached@AEAU-$atomic@I@std@@@GetDefautInputAppIdAndContinue@Tou.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18045B61C (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18045E7CC (-GetInputAppId@TouchKeyboardExperienceManager@@CA-AV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180465CBC (-Stop@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator()(Microsoft::WRL::WeakRef *this)
{
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *v2; // r13
  _DWORD *v3; // r8
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // r14
  volatile __int32 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 **v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall *)(void *), __int64, __int64); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ebx
  const unsigned __int16 *v25; // rdx
  __int64 v26; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int16 **v27; // [rsp+38h] [rbp-B0h] BYREF
  Microsoft::WRL::WeakRef *v28; // [rsp+40h] [rbp-A8h]
  _OWORD v29[3]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v30; // [rsp+80h] [rbp-68h]
  int v31; // [rsp+88h] [rbp-60h]
  __int64 v32; // [rsp+90h] [rbp-58h]
  unsigned __int16 *v33[3]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v28 = this;
  v2 = (Microsoft::WRL::WeakRef *)((char *)this + 16);
  v3 = (_DWORD *)*((_QWORD *)this + 8);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v29,
      (Microsoft::WRL::WeakRef *)((char *)this + 16),
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    memset(v29, 0, sizeof(v29));
    v30 = 0LL;
    v31 = 0;
    v32 = 0LL;
  }
  v26 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>(this, (__int64)&v26);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x821,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v26 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, &LocaleName);
    *(_BYTE *)(*((_QWORD *)this + 1) + 1204LL) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
    return 0LL;
  }
  try
  {
    TouchKeyboardExperienceManager::GetInputAppId(v33);
    v6 = *((_QWORD *)this + 1);
    v7 = (volatile __int32 *)(v6 + 1128);
    if ( v33[2] )
    {
      _InterlockedExchange(v7, 0);
      v8 = *(_QWORD *)(v6 + 1032);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v6 + 1032));
      }
      v9 = *((_QWORD *)this + 49);
      if ( v9 )
      {
        v10 = (unsigned __int16 **)v33[0];
        if ( v34 < 8 )
          v10 = v33;
        v27 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 ***))(*(_QWORD *)v9 + 16LL))(v9, &v27);
        if ( v11 < 0 )
        {
          *(_BYTE *)(v6 + 1204) = 0;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x839,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      goto LABEL_28;
    }
    if ( (unsigned int)_InterlockedIncrement(v7) > 0xA )
    {
      TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::GettingInputAppIdRetryCountMaxReached<std::atomic<unsigned int> &>(v2);
      v12 = *((_QWORD *)this + 1);
      _InterlockedExchange((volatile __int32 *)(v12 + 1128), 0);
      v13 = *(_QWORD *)(v12 + 1032);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v12 + 1032));
      }
      *(_BYTE *)(v12 + 1204) = 0;
      std::wstring::~wstring((void **)v33);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
      return 2147549183LL;
    }
    v15 = *(_QWORD *)(v6 + 1032);
    if ( !v15 )
    {
      v16 = *(_QWORD *)(v6 + 1008);
      v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v16 + 144LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v6 + 1032));
      v18 = v17(v16, TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback, v6, v6 + 1032);
      v19 = v18;
      if ( v18 < 0 )
      {
        *(_BYTE *)(v6 + 1204) = 0;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x856,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v18);
        std::wstring::~wstring((void **)v33);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
        return v19;
      }
      v15 = *(_QWORD *)(v6 + 1032);
    }
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
    v21 = v20;
    if ( v20 >= 0 )
    {
      std::function<long (unsigned short const *)>::operator=(v6 + 1064, (char *)this + 336);
      v22 = *((_QWORD *)this + 1);
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v22 + 1032) + 80LL))(
              *(_QWORD *)(v22 + 1032),
              5000000LL,
              0LL);
      v24 = v23;
      if ( v23 >= 0 )
      {
LABEL_28:
        v25 = (const unsigned __int16 *)v33;
        if ( v34 >= 8 )
          v25 = v33[0];
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::Stop(v2, v25);
        std::wstring::~wstring((void **)v33);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
        return 0LL;
      }
      *(_BYTE *)(v22 + 1204) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
      std::wstring::~wstring((void **)v33);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
      result = v24;
    }
    else
    {
      *(_BYTE *)(v6 + 1204) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x859,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
      std::wstring::~wstring((void **)v33);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
      result = v21;
    }
  }
  catch ( ... )
  {
    *(_BYTE *)(*((_QWORD *)v28 + 1) + 1204LL) = 0;
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x865,
                     (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v29);
    return (unsigned int)v27;
  }
  return result;
}
