/*
 * XREFs of ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x14001D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14001C758 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001DEC4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??4?$com_ptr_t@UIAudioProcessRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcessRT@@@Z @ 0x14001DF0C (--4-$com_ptr_t@UIAudioProcessRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcessR.c)
 *     ??4?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpointRT@@@Z @ 0x14001DF5C (--4-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpoin.c)
 *     ??$com_query_to_nothrow@UIAudioDeviceEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioDeviceEndpoint@@@Z @ 0x14001DFAC (--$com_query_to_nothrow@UIAudioDeviceEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEn.c)
 *     ??$com_query_to_nothrow@UIAudioEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14001DFD8 (--$com_query_to_nothrow@UIAudioEndpoint@@AEAPEAUIAudioEndpointRT@@@wil@@YAJAEAPEAUIAudioEndpoint.c)
 *     ?IsTimerRequired@CAudioPump@@AEAA_NI@Z @ 0x14001E770 (-IsTimerRequired@CAudioPump@@AEAA_NI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEF4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140074150 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Initialize(
        CAudioPump *this,
        unsigned int a2,
        unsigned int a3,
        struct IAudioProcessRT *a4,
        struct IAudioEndpointRT *a5,
        struct ICrossProcessEventManager *a6)
{
  __int64 v7; // r15
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  int v11; // eax
  signed int LastErrorFailHr; // ebx
  int v13; // eax
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  wil::details *v17; // rcx
  HANDLE Event; // rbx
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  wil::details *v22; // rcx
  HANDLE v23; // rbx
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rdx
  wil::details *v27; // rcx
  HANDLE v28; // rbx
  __int64 v29; // r8
  const char *v30; // r9
  _QWORD *v31; // rdi
  __int64 (__fastcall *v32)(CAudioPump *); // rax
  HANDLE WaitableTimer; // rax
  const char *v34; // r9
  void *v35; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  signed __int32 v39; // eax
  const char *v40; // r9
  int v41; // eax
  int v42; // r15d
  struct ICrossProcessEventManager *v43; // r13
  __int64 (__fastcall *v44)(struct ICrossProcessEventManager *, char *); // rdi
  __int64 v45; // rdx
  wil::details *v46; // rcx
  HANDLE v47; // rbx
  __int64 v48; // r8
  const char *v49; // r9
  __int64 v50; // rdx
  wil::details *v51; // rcx
  HANDLE v52; // rbx
  __int64 v53; // r8
  const char *v54; // r9
  __int64 (__fastcall *v55)(struct ICrossProcessEventManager *, char *); // rdi
  __int64 v56; // rdx
  wil::details *v57; // rcx
  HANDLE v58; // rbx
  __int64 v59; // r8
  const char *v60; // r9
  int pdwType; // [rsp+28h] [rbp-49h]
  __int64 *v62; // [rsp+48h] [rbp-29h] BYREF
  __int64 v63; // [rsp+50h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-19h] BYREF
  int v65; // [rsp+60h] [rbp-11h] BYREF
  DWORD pcbData; // [rsp+64h] [rbp-Dh] BYREF
  DWORD v67; // [rsp+68h] [rbp-9h] BYREF
  int v68; // [rsp+6Ch] [rbp-5h] BYREF
  LPVOID *p_pv; // [rsp+70h] [rbp-1h]
  void *v70; // [rsp+78h] [rbp+7h] BYREF
  char v71; // [rsp+80h] [rbp+Fh]
  ULONG ActualResolution[4]; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]
  unsigned int pvData; // [rsp+C8h] [rbp+57h] BYREF

  v7 = a3;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  if ( *((_BYTE *)this + 72) )
  {
    LastErrorFailHr = -2005139440;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)0x887C0010LL,
      pdwType);
LABEL_49:
    if ( v10 )
      LeaveCriticalSection(v10);
    return (unsigned int)LastErrorFailHr;
  }
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v37 = 94LL;
  }
  else if ( (_DWORD)v7 )
  {
    if ( (a2 & 3) != 0 )
    {
      if ( (a2 & 3) != 3 )
      {
        *((_WORD *)this + 37) = 0;
        *((_QWORD *)this + 42) = 0LL;
        *((_QWORD *)this + 43) = 0LL;
        *((_WORD *)this + 2328) = 0;
        v62 = 0LL;
        v11 = wil::com_query_to_nothrow<IAudioEndpoint,IAudioEndpointRT * &>(&a5, &v62);
        LastErrorFailHr = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x75,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
            (const char *)(unsigned int)v11,
            pdwType);
LABEL_48:
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v62);
          goto LABEL_49;
        }
        v63 = 0LL;
        v13 = wil::com_query_to_nothrow<IAudioDeviceEndpoint,IAudioEndpointRT * &>(&a5, &v63);
        LastErrorFailHr = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x79,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
            (const char *)(unsigned int)v13,
            pdwType);
LABEL_63:
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v63);
          goto LABEL_48;
        }
        pv = 0LL;
        v14 = *v62;
        p_pv = &pv;
        v70 = 0LL;
        v71 = 1;
        LastErrorFailHr = (*(__int64 (__fastcall **)(__int64 *, void **))(v14 + 24))(v62, &v70);
        if ( v71 )
        {
          v15 = *p_pv;
          *p_pv = v70;
          if ( v15 )
            CoTaskMemFree(v15);
        }
        if ( LastErrorFailHr < 0 )
        {
          v38 = 125LL;
          goto LABEL_61;
        }
        LastErrorFailHr = (*(__int64 (__fastcall **)(__int64 *, char *))(*v62 + 40))(v62, (char *)this + 216);
        if ( LastErrorFailHr < 0 )
        {
          v38 = 128LL;
          goto LABEL_61;
        }
        Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
        if ( Event )
        {
          GetLastError();
          _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
            (char *)this + 240,
            Event);
        }
        else
        {
          LastErrorFailHr = wil::details::GetLastErrorFailHr(v17, v16, v19, v20);
          if ( LastErrorFailHr < 0 )
          {
            v38 = 131LL;
            goto LABEL_61;
          }
        }
        v23 = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( v23 )
        {
          GetLastError();
          _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
            (char *)this + 256,
            v23);
        }
        else
        {
          LastErrorFailHr = wil::details::GetLastErrorFailHr(v22, v21, v24, v25);
          if ( LastErrorFailHr < 0 )
          {
            v38 = 134LL;
            goto LABEL_61;
          }
        }
        v65 = 0;
        if ( (a2 & 6) == 6 )
        {
          v65 = 1;
        }
        else
        {
          LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v63 + 40LL))(v63, &v65);
          if ( LastErrorFailHr < 0 )
          {
            v38 = 146LL;
            goto LABEL_61;
          }
          if ( !v65 )
          {
            EnterCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
            v39 = _InterlockedIncrement(&CAudioPump::s_AudioPumpTimerResolutionCount);
            *((_BYTE *)this + 73) = 1;
            if ( v39 == 1 && NtSetTimerResolution(0x2710u, 1u, ActualResolution) < 0 )
              wil::details::in1diag3::_Log_GetLastError(
                retaddr,
                (void *)0xAC,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                v40);
            LeaveCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
LABEL_23:
            v32 = (__int64 (__fastcall *)(CAudioPump *))CAudioPump::InputPumpWorkRoutine;
            if ( (a2 & 1) == 0 )
              v32 = CAudioPump::OutputPumpWorkRoutine;
            *((_QWORD *)this + 26) = v32;
            *((_QWORD *)this + 12) = v7;
            wil::com_ptr_t<IAudioProcessRT,wil::err_returncode_policy>::operator=((char *)this + 80, a4);
            *((float *)this + 26) = (float)*((int *)pv + 2) / (float)*((unsigned __int16 *)pv + 6);
            wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::operator=((char *)this + 200, a5);
            pvData = 0;
            pcbData = 4;
            v67 = 0;
            if ( !RegGetValueW(
                    HKEY_LOCAL_MACHINE,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
                    L"AudioDGCPUPercentMax",
                    0x10u,
                    &v67,
                    &pvData,
                    &pcbData) )
            {
              v41 = 10;
              if ( pvData >= 0xA )
              {
                v41 = pvData;
                if ( pvData > 0x5A )
                  v41 = 90;
              }
              pvData = v41;
              *((_QWORD *)this + 41) = (unsigned int)(int)(float)((float)(int)(*((_QWORD *)this + 12) * v41) / 100.0);
            }
            if ( !*((_QWORD *)this + 41) )
              *((_QWORD *)this + 41) = (unsigned int)(int)(float)((float)(int)*((_QWORD *)this + 12) * 0.40000001);
            pcbData = 4;
            if ( !RegGetValueW(
                    HKEY_LOCAL_MACHINE,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
                    L"DeadlineDurationThreshold",
                    0x10u,
                    &v67,
                    &pvData,
                    &pcbData) )
              *((_QWORD *)this + 52) = 10000 * pvData;
            LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v63 + 32LL))(v63, &v68);
            if ( LastErrorFailHr >= 0 )
            {
              if ( (a2 & 4) == 0 )
                goto LABEL_32;
              if ( (a2 & 1) != 0 && *((_QWORD *)this + 36) && v68 == 1 )
              {
                v42 = a2 & 2;
              }
              else
              {
                v42 = a2 & 2;
                if ( (a2 & 2) == 0 )
                  goto LABEL_32;
              }
              v43 = a6;
              v44 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)a6 + 32LL);
              wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 48);
              LastErrorFailHr = v44(v43, (char *)this + 384);
              if ( LastErrorFailHr < 0 )
              {
                v38 = 251LL;
                goto LABEL_61;
              }
              *((_BYTE *)this + 4656) = 1;
              *((_DWORD *)this + 1183) = 1;
              if ( v42 )
              {
                v47 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
                if ( v47 )
                {
                  GetLastError();
                  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
                    (char *)this + 392,
                    v47);
                }
                else
                {
                  LastErrorFailHr = wil::details::GetLastErrorFailHr(v46, v45, v48, v49);
                  if ( LastErrorFailHr < 0 )
                  {
                    v38 = 264LL;
                    goto LABEL_61;
                  }
                }
                v52 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
                if ( v52 )
                {
                  GetLastError();
                  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
                    (char *)this + 408,
                    v52);
                }
                else
                {
                  LastErrorFailHr = wil::details::GetLastErrorFailHr(v51, v50, v53, v54);
                  if ( LastErrorFailHr < 0 )
                  {
                    v38 = 268LL;
                    goto LABEL_61;
                  }
                }
                v55 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)v43 + 32LL);
                wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 50);
                LastErrorFailHr = v55(v43, (char *)this + 400);
                if ( LastErrorFailHr < 0 )
                {
                  v38 = 272LL;
                  goto LABEL_61;
                }
                v58 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
                if ( v58 )
                {
                  GetLastError();
                  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
                    (char *)this + 264,
                    v58);
                }
                else
                {
                  LastErrorFailHr = wil::details::GetLastErrorFailHr(v57, v56, v59, v60);
                  if ( LastErrorFailHr < 0 )
                  {
                    v38 = 276LL;
                    goto LABEL_61;
                  }
                }
              }
LABEL_32:
              if ( !CAudioPump::IsTimerRequired(this, a2)
                || (WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x1F0003u),
                    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                      (void **)this + 34,
                      WaitableTimer),
                    ((*((_QWORD *)this + 34) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0) )
              {
                if ( *((_BYTE *)this + 4656)
                  && CAudioPump::OutputPumpWorkRoutine == *((__int64 (__fastcall **)(CAudioPump *))this + 26) )
                {
                  _InterlockedExchange((volatile __int32 *)this + 78, 0);
                }
                *((_BYTE *)this + 72) = 1;
                v35 = pv;
                pv = 0LL;
                if ( v35 )
                  CoTaskMemFree(v35);
                wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v63);
                wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v62);
                if ( v10 )
                  LeaveCriticalSection(v10);
                return 0LL;
              }
              LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                                  retaddr,
                                  (void *)0x11D,
                                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                                  v34);
              goto LABEL_62;
            }
            v38 = 240LL;
LABEL_61:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v38,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
              (const char *)(unsigned int)LastErrorFailHr,
              pdwType);
LABEL_62:
            wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
            goto LABEL_63;
          }
        }
        v28 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
        if ( v28 )
        {
          GetLastError();
          v31 = (_QWORD *)((char *)this + 288);
          _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
            (char *)this + 288,
            v28);
        }
        else
        {
          LastErrorFailHr = wil::details::GetLastErrorFailHr(v27, v26, v29, v30);
          v31 = (_QWORD *)((char *)this + 288);
          if ( LastErrorFailHr < 0 )
          {
            v38 = 153LL;
            goto LABEL_61;
          }
        }
        LastErrorFailHr = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v62 + 56))(v62, *v31);
        if ( LastErrorFailHr < 0 )
        {
          v38 = 154LL;
          goto LABEL_61;
        }
        goto LABEL_23;
      }
      v37 = 101LL;
    }
    else
    {
      v37 = 99LL;
    }
  }
  else
  {
    v37 = 95LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
    (const char *)0x80070057LL,
    pdwType);
  if ( v10 )
    LeaveCriticalSection(v10);
  return 2147942487LL;
}
