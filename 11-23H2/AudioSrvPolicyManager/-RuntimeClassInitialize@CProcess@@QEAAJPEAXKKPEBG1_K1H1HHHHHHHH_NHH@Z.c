/*
 * XREFs of ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002975C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000B7F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18000E310 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015960 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180024274 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x180026410 (-ClearSmtcSubscriptions@CProcess@@QEAAXXZ.c)
 *     ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x1800290B8 (-ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18002A0E4 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RuntimeClassInitialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        HANDLE TargetHandle,
        const unsigned __int16 *a8,
        DWORD a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        DWORD a19,
        int a20,
        int a21)
{
  HANDLE *v23; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v25; // rax
  const char *v26; // r9
  __int64 result; // rax
  __int64 v28; // rdx
  SIZE_T v29; // rcx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r9
  int v32; // eax
  unsigned int v33; // edi
  const char *v34; // r9
  __int64 v35; // rdx
  SIZE_T v36; // rcx
  unsigned __int64 v37; // r9
  int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // rdx
  SIZE_T v41; // rcx
  unsigned __int64 v42; // r9
  int v43; // eax
  unsigned int v44; // edi
  const unsigned __int16 *v45; // rdi
  __int64 v46; // rdx
  SIZE_T v47; // rcx
  int v48; // eax
  unsigned int v49; // ebx
  int v50; // eax
  unsigned int v51; // ebx
  DWORD v52; // r14d
  unsigned int v53; // r15d
  HANDLE v54; // rbx
  void *v55; // rdi
  HANDLE v56; // rax
  _BYTE *v57; // rdx
  __int64 v58; // rcx
  _DWORD *i; // rax
  HANDLE v60; // rax
  const struct _tlgProvider_t *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 dwDesiredAccess; // [rsp+20h] [rbp-68h]
  __int64 dwDesiredAccessa; // [rsp+20h] [rbp-68h]
  __int64 dwDesiredAccessb; // [rsp+20h] [rbp-68h]
  _BYTE ProcessInformation[40]; // [rsp+40h] [rbp-48h] BYREF
  DWORD dwProcessId[2]; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *((_DWORD *)this + 40) = a3;
  *((_DWORD *)this + 41) = a4;
  *((_DWORD *)this + 48) = a9;
  *((_DWORD *)this + 105) = a11;
  *((_DWORD *)this + 106) = a12;
  *((_DWORD *)this + 107) = a13;
  *((_DWORD *)this + 108) = a14;
  *((_DWORD *)this + 110) = a16;
  *((_DWORD *)this + 111) = a17;
  *((_DWORD *)this + 116) = a18;
  *((_DWORD *)this + 109) = a15;
  *((_QWORD *)this + 26) = TargetHandle;
  *((_BYTE *)this + 786) = a19;
  *((_DWORD *)this + 117) = a20;
  *((_DWORD *)this + 118) = a21;
  if ( hSourceHandle )
  {
    v23 = (HANDLE *)((char *)this + 152);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 19,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v25 = GetCurrentProcess();
    if ( !DuplicateHandle(v25, hSourceHandle, CurrentProcess, v23, 0x101000u, 0, 0) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xA17,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v26);
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 21,
    0LL);
  v30 = -1LL;
  v31 = -1LL;
  do
    ++v31;
  while ( a5[v31] );
  try
  {
    v32 = _AllocStringWorker<CTCoAllocPolicy>(v29, v28, a5, v31, dwDesiredAccess, (unsigned __int16 **)this + 21);
    v33 = v32;
    if ( v32 >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)this + 23,
        0LL);
      v37 = -1LL;
      do
        ++v37;
      while ( a8[v37] );
      v38 = _AllocStringWorker<CTCoAllocPolicy>(v36, v35, a8, v37, dwDesiredAccessa, (unsigned __int16 **)this + 23);
      v39 = v38;
      if ( v38 >= 0 )
      {
        if ( !a6 )
          goto LABEL_18;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)this + 22,
          0LL);
        v42 = -1LL;
        do
          ++v42;
        while ( a6[v42] );
        v43 = _AllocStringWorker<CTCoAllocPolicy>(v41, v40, a6, v42, dwDesiredAccessb, (unsigned __int16 **)this + 22);
        v44 = v43;
        if ( v43 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA26,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
            (const char *)(unsigned int)v43);
          result = v44;
        }
        else
        {
LABEL_18:
          v45 = a10;
          if ( !a10 )
            goto LABEL_50;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)this + 25,
            0LL);
          do
            ++v30;
          while ( v45[v30] );
          v48 = _AllocStringWorker<CTCoAllocPolicy>(
                  v47,
                  v46,
                  v45,
                  v30,
                  dwDesiredAccessb,
                  (unsigned __int16 **)this + 25);
          v49 = v48;
          if ( v48 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA2A,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              (const char *)(unsigned int)v48);
            result = v49;
          }
          else
          {
LABEL_50:
            if ( hSourceHandle && (v50 = CProcess::SetupProcessTerminationWatcher(this), v51 = v50, v50 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA33,
                (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                (const char *)(unsigned int)v50);
              result = v51;
            }
            else
            {
              v52 = *((_DWORD *)this + 40);
              a19 = v52;
              v53 = 0;
              TargetHandle = 0LL;
              wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                &TargetHandle,
                0LL);
              v54 = GetCurrentProcess();
              v55 = (void *)*((_QWORD *)this + 19);
              v56 = GetCurrentProcess();
              if ( DuplicateHandle(v56, v55, v54, &TargetHandle, 0x1000u, 0, 0) )
              {
                while ( 1 )
                {
                  v57 = (_BYTE *)*((_QWORD *)this + 17);
                  if ( v57 == *((_BYTE **)this + 18) )
                  {
                    std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
                      (const void **)this + 16,
                      v57,
                      &a19);
                  }
                  else
                  {
                    *(_DWORD *)v57 = v52;
                    *((_QWORD *)this + 17) += 4LL;
                  }
                  v52 = 0;
                  a19 = 0;
                  if ( TargetHandle )
                  {
                    if ( NtQueryInformationProcess(
                           TargetHandle,
                           ProcessBasicInformation,
                           ProcessInformation,
                           0x30u,
                           0LL) >= 0 )
                      break;
                  }
LABEL_37:
                  ++v53;
                  if ( !v52 || v53 >= 0xA )
                    goto LABEL_39;
                }
                v52 = dwProcessId[0];
                a19 = dwProcessId[0];
                v58 = *((_QWORD *)this + 17);
                for ( i = (_DWORD *)*((_QWORD *)this + 16); ; ++i )
                {
                  if ( i == (_DWORD *)v58 )
                  {
                    v60 = OpenProcess(0x1000u, 0, dwProcessId[0]);
                    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                      &TargetHandle,
                      v60);
                    goto LABEL_37;
                  }
                  if ( *i == dwProcessId[0] )
                    break;
                }
                v61 = AudioSrvPolicyManagerTelemetryProvider::Provider(v58);
                if ( *(_DWORD *)v61 > 4u )
                {
                  a19 = *((_DWORD *)this + 40);
                  a9 = v52;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v61,
                    byte_180055695,
                    v62,
                    v63,
                    (__int64)&a9,
                    (__int64)&a19);
                }
              }
LABEL_39:
              CProcess::ResetDataFlowAccessCheckResults(this);
              CProcess::ClearSmtcSubscriptions(this);
              wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TargetHandle);
              result = 0LL;
            }
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA1F,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v38);
        result = v39;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1D,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v32);
      result = v33;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA62,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v34);
  }
  return result;
}
