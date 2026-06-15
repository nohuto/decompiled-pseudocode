/*
 * XREFs of ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x1400053D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$com_query_to_nothrow@UIAudioDeviceEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioDeviceEndpoint@@@Z @ 0x140005240 (--$com_query_to_nothrow@UIAudioDeviceEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEn.c)
 *     ??4?$com_ptr_t@UIAudioProcessRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcessRT@@@Z @ 0x140005284 (--4-$com_ptr_t@UIAudioProcessRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcessR.c)
 *     ??4?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpointRT@@@Z @ 0x1400052D4 (--4-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpoin.c)
 *     ?IsTimerRequired@CAudioPump@@AEAA_NI@Z @ 0x140005324 (-IsTimerRequired@CAudioPump@@AEAA_NI@Z.c)
 *     ??$com_query_to_nothrow@UIAudioEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140007A30 (--$com_query_to_nothrow@UIAudioEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpoint.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140021194 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002B73C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140062F18 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Initialize(
        CAudioPump *this,
        int a2,
        unsigned int a3,
        struct IAudioProcessRT *a4,
        struct IAudioEndpointRT *a5,
        struct ICrossProcessEventManager *a6)
{
  __int64 v7; // r12
  char *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rax
  void *v15; // rcx
  int LastErrorFailHr; // eax
  wil::details *v17; // rcx
  HANDLE Event; // r14
  wil::details *v19; // rdi
  wil::details *v20; // rcx
  HANDLE v21; // r14
  wil::details *v22; // rdi
  wil::details *v23; // rcx
  HANDLE v24; // r14
  wil::details *v25; // rdi
  unsigned int (__fastcall *v26)(CAudioPump *); // rax
  __int64 v27; // rax
  HANDLE WaitableTimer; // rax
  const char *v29; // r9
  void *v30; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  DWORD LastError; // ebx
  void *v36; // rdx
  DWORD v37; // ebx
  void *v38; // rdx
  DWORD v39; // ebx
  void *v40; // rdx
  signed __int32 v41; // eax
  const char *v42; // r9
  int v43; // eax
  int v44; // r14d
  struct ICrossProcessEventManager *v45; // r12
  __int64 (__fastcall *v46)(struct ICrossProcessEventManager *, char *); // rdi
  wil::details *v47; // rcx
  HANDLE v48; // r14
  wil::details *v49; // rdi
  DWORD v50; // ebx
  void *v51; // rdx
  wil::details *v52; // rcx
  HANDLE v53; // r14
  wil::details *v54; // rdi
  DWORD v55; // ebx
  void *v56; // rdx
  __int64 (__fastcall *v57)(struct ICrossProcessEventManager *, char *); // rdi
  wil::details *v58; // rcx
  HANDLE v59; // r14
  wil::details *v60; // rdi
  DWORD v61; // ebx
  void *v62; // rdx
  int pdwType; // [rsp+28h] [rbp-59h]
  int v64; // [rsp+48h] [rbp-39h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-35h] BYREF
  DWORD v66; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v67; // [rsp+58h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-21h] BYREF
  __int64 v69; // [rsp+68h] [rbp-19h] BYREF
  int v70; // [rsp+70h] [rbp-11h] BYREF
  LPVOID *p_pv; // [rsp+78h] [rbp-9h]
  void *v72; // [rsp+80h] [rbp-1h] BYREF
  char v73; // [rsp+88h] [rbp+7h]
  ULONG ActualResolution; // [rsp+90h] [rbp+Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v75; // [rsp+98h] [rbp+17h] BYREF
  char *v76; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+4Fh]
  unsigned int pvData; // [rsp+D8h] [rbp+57h] BYREF

  v7 = a3;
  v10 = (char *)this + 120;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v76 = v10;
  if ( *((_BYTE *)this + 72) )
  {
    v12 = -2005139440;
    v32 = 91LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)v12,
      pdwType);
    goto LABEL_50;
  }
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v32 = 94LL;
LABEL_57:
    v12 = -2147024809;
    goto LABEL_58;
  }
  if ( !(_DWORD)v7 )
  {
    v32 = 95LL;
    goto LABEL_57;
  }
  if ( (a2 & 3) == 0 )
  {
    v32 = 99LL;
    goto LABEL_57;
  }
  if ( (a2 & 3) == 3 )
  {
    v32 = 101LL;
    goto LABEL_57;
  }
  *((_WORD *)this + 37) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_WORD *)this + 2324) = 0;
  v67 = 0LL;
  v11 = wil::com_query_to_nothrow<IAudioEndpoint,IAudioEndpointRT * &>(&a5, &v67);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v11,
      pdwType);
    goto LABEL_49;
  }
  v69 = 0LL;
  v13 = wil::com_query_to_nothrow<IAudioDeviceEndpoint,IAudioEndpointRT * &>(&a5, (__int64)&v69);
  v12 = v13;
  if ( v13 >= 0 )
  {
    pv = 0LL;
    v14 = *v67;
    p_pv = &pv;
    v72 = 0LL;
    v73 = 1;
    v12 = (*(__int64 (__fastcall **)(__int64 *, void **))(v14 + 24))(v67, &v72);
    if ( v73 )
    {
      v15 = *p_pv;
      *p_pv = v72;
      if ( v15 )
        CoTaskMemFree(v15);
    }
    if ( (v12 & 0x80000000) != 0 )
    {
      v33 = v12;
      v34 = 125LL;
LABEL_107:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)v33,
        pdwType);
LABEL_46:
      v30 = pv;
      pv = 0LL;
      if ( v30 )
        CoTaskMemFree(v30);
      goto LABEL_48;
    }
    LastErrorFailHr = (*(__int64 (__fastcall **)(__int64 *, char *))(*v67 + 40))(v67, (char *)this + 216);
    v12 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v34 = 128LL;
      goto LABEL_106;
    }
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      v19 = (wil::details *)*((_QWORD *)this + 30);
      if ( v19 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v19, v36);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 30) = Event;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v17);
      v12 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
      {
        v34 = 131LL;
        goto LABEL_106;
      }
    }
    v21 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v21 )
    {
      GetLastError();
      v22 = (wil::details *)*((_QWORD *)this + 32);
      if ( v22 )
      {
        v37 = GetLastError();
        wil::details::CloseHandle(v22, v38);
        SetLastError(v37);
      }
      *((_QWORD *)this + 32) = v21;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v20);
      v12 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
      {
        v34 = 134LL;
        goto LABEL_106;
      }
    }
    v64 = 0;
    if ( (a2 & 6) == 6 )
    {
      v64 = 1;
    }
    else
    {
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v69 + 40LL))(v69, &v64);
      v12 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
      {
        v34 = 146LL;
        goto LABEL_106;
      }
      if ( !v64 )
      {
        EnterCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
        v75 = &CAudioPump::s_AudioPumpTimerResolutionCountLock;
        v41 = _InterlockedIncrement(&CAudioPump::s_AudioPumpTimerResolutionCount);
        *((_BYTE *)this + 73) = 1;
        if ( v41 == 1 && NtSetTimerResolution(0x2710u, 1u, &ActualResolution) < 0 )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xAC,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
            v42);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v75);
LABEL_32:
        v26 = CAudioPump::InputPumpWorkRoutine;
        if ( (a2 & 1) == 0 )
          v26 = CAudioPump::OutputPumpWorkRoutine;
        *((_QWORD *)this + 26) = v26;
        *((_QWORD *)this + 12) = v7;
        wil::com_ptr_t<IAudioProcessRT,wil::err_returncode_policy>::operator=((__int64 *)this + 10, (__int64)a4);
        *((float *)this + 26) = (float)*((int *)pv + 2) / (float)*((unsigned __int16 *)pv + 6);
        wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::operator=((__int64 *)this + 25, (__int64)a5);
        pvData = 0;
        pcbData = 4;
        v66 = 0;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
               L"AudioDGCPUPercentMax",
               0x10u,
               &v66,
               &pvData,
               &pcbData) )
        {
          v27 = *((_QWORD *)this + 41);
        }
        else
        {
          v43 = 10;
          if ( pvData >= 0xA )
          {
            v43 = pvData;
            if ( pvData > 0x5A )
              v43 = 90;
          }
          pvData = v43;
          v27 = (unsigned int)(int)(float)((float)(int)(*((_QWORD *)this + 12) * v43) / 100.0);
          *((_QWORD *)this + 41) = v27;
        }
        if ( !v27 )
          *((_QWORD *)this + 41) = (unsigned int)(int)(float)((float)(int)*((_QWORD *)this + 12) * 0.40000001);
        pcbData = 4;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
                L"DeadlineDurationThreshold",
                0x10u,
                &v66,
                &pvData,
                &pcbData) )
          *((_QWORD *)this + 52) = 10000 * pvData;
        LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v69 + 32LL))(v69, &v70);
        v12 = LastErrorFailHr;
        if ( LastErrorFailHr < 0 )
        {
          v34 = 240LL;
        }
        else
        {
          if ( (a2 & 4) == 0 )
            goto LABEL_42;
          if ( (a2 & 1) != 0 && *((_QWORD *)this + 36) && v70 == 1 )
          {
            v44 = a2 & 2;
          }
          else
          {
            v44 = a2 & 2;
            if ( (a2 & 2) == 0 )
              goto LABEL_42;
          }
          v45 = a6;
          v46 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)a6 + 32LL);
          wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 48);
          LastErrorFailHr = v46(v45, (char *)this + 384);
          v12 = LastErrorFailHr;
          if ( LastErrorFailHr >= 0 )
          {
            *((_BYTE *)this + 4648) = 1;
            *((_DWORD *)this + 1181) = 1;
            if ( !v44 )
              goto LABEL_42;
            v48 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
            if ( v48 )
            {
              GetLastError();
              v49 = (wil::details *)*((_QWORD *)this + 49);
              if ( v49 )
              {
                v50 = GetLastError();
                wil::details::CloseHandle(v49, v51);
                SetLastError(v50);
              }
              *((_QWORD *)this + 49) = v48;
            }
            else
            {
              LastErrorFailHr = wil::details::GetLastErrorFailHr(v47);
              v12 = LastErrorFailHr;
              if ( LastErrorFailHr < 0 )
              {
                v34 = 264LL;
                goto LABEL_106;
              }
            }
            v53 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
            if ( v53 )
            {
              GetLastError();
              v54 = (wil::details *)*((_QWORD *)this + 51);
              if ( v54 )
              {
                v55 = GetLastError();
                wil::details::CloseHandle(v54, v56);
                SetLastError(v55);
              }
              *((_QWORD *)this + 51) = v53;
            }
            else
            {
              LastErrorFailHr = wil::details::GetLastErrorFailHr(v52);
              v12 = LastErrorFailHr;
              if ( LastErrorFailHr < 0 )
              {
                v34 = 268LL;
                goto LABEL_106;
              }
            }
            v57 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)v45 + 32LL);
            wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 50);
            LastErrorFailHr = v57(v45, (char *)this + 400);
            v12 = LastErrorFailHr;
            if ( LastErrorFailHr >= 0 )
            {
              v59 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
              if ( v59 )
              {
                GetLastError();
                v60 = (wil::details *)*((_QWORD *)this + 33);
                if ( v60 )
                {
                  v61 = GetLastError();
                  wil::details::CloseHandle(v60, v62);
                  SetLastError(v61);
                }
                *((_QWORD *)this + 33) = v59;
                goto LABEL_42;
              }
              LastErrorFailHr = wil::details::GetLastErrorFailHr(v58);
              v12 = LastErrorFailHr;
              if ( LastErrorFailHr >= 0 )
              {
LABEL_42:
                if ( CAudioPump::IsTimerRequired(this, a2)
                  && (WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x1F0003u),
                      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                        (char *)this + 272,
                        WaitableTimer),
                      ((*((_QWORD *)this + 34) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0) )
                {
                  v12 = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x11D,
                          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                          v29);
                }
                else
                {
                  if ( *((_BYTE *)this + 4648)
                    && CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
                  {
                    _InterlockedExchange((volatile __int32 *)this + 78, 0);
                  }
                  *((_BYTE *)this + 72) = 1;
                  v12 = 0;
                }
                goto LABEL_46;
              }
              v34 = 276LL;
            }
            else
            {
              v34 = 272LL;
            }
            goto LABEL_106;
          }
          v34 = 251LL;
        }
LABEL_106:
        v33 = (unsigned int)LastErrorFailHr;
        goto LABEL_107;
      }
    }
    v24 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( v24 )
    {
      GetLastError();
      v25 = (wil::details *)*((_QWORD *)this + 36);
      if ( v25 )
      {
        v39 = GetLastError();
        wil::details::CloseHandle(v25, v40);
        SetLastError(v39);
      }
      *((_QWORD *)this + 36) = v24;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v23);
      v12 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
      {
        v34 = 153LL;
        goto LABEL_106;
      }
    }
    LastErrorFailHr = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v67 + 56))(v67, *((_QWORD *)this + 36));
    v12 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v34 = 154LL;
      goto LABEL_106;
    }
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
    (const char *)(unsigned int)v13,
    pdwType);
LABEL_48:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v69);
LABEL_49:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v67);
LABEL_50:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v76);
  return v12;
}
