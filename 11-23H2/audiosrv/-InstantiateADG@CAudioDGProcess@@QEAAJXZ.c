/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18004304C
 * Callers:
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x18002B028 (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18004B210 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CF1F0 (s_adGetDeviceGraphWnfStateName.c)
 *     AudioServerGetAudioStreamHandle @ 0x180120A20 (AudioServerGetAudioStreamHandle.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E4C0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180064BC8 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  bool v4; // si
  __int64 v5; // rcx
  int v6; // ebp
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  CAudioThreadPool *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // [rsp+40h] [rbp-68h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-64h] BYREF
  int pvData; // [rsp+48h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp-58h]
  char v17[32]; // [rsp+58h] [rbp-50h] BYREF
  bool *v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+80h] [rbp-28h]
  int v20; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v16 = v2;
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_2:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  *((_BYTE *)this + 100) = 0;
  v4 = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableProtectedAudioDG",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    v4 = pvData != 0;
  v6 = CAudioDGProcess::PrepareForADGStartup(this);
  if ( v6 < 0 )
  {
    v12 = 341LL;
  }
  else
  {
    v7 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v5,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v7 > 4u && tlgKeywordOn((__int64)v7, 128LL) )
    {
      v13 = v4;
      v18 = &v13;
      v19 = 1;
      v20 = 0;
      tlgWriteTransfer_EtwEventWriteTransfer(v8, byte_18018EEA0, 0LL, 0LL, 3, (__int64)v17);
    }
    v9 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v4);
    v6 = v9;
    if ( v4 && v9 < 0 )
    {
      if ( v9 == -2147024319 )
      {
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
        OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" To find the offending binary, please do the following:\n");
        OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
        OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
        OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
        OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
        OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
        OutputDebugStringW(L" content will be disabled \n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" For more information, please see:\n");
        OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
      }
      v6 = CAudioDGProcess::PrepareForADGStartup(this);
      if ( v6 < 0 )
      {
        v12 = 404LL;
        goto LABEL_18;
      }
      v6 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, !v4);
    }
    if ( v6 >= 0 )
    {
      if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v10 = ThreadPool;
        v11 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 80LL))(
                ThreadPool,
                CAudioDGProcess::OnADGProcessTerminatedHandler,
                this);
        *((_QWORD *)this + 16) = v11;
        if ( v11 )
          (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 88LL))(
            v10,
            v11,
            *((_QWORD *)this + 11),
            0LL);
      }
      goto LABEL_2;
    }
    v12 = 407LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
    (const char *)(unsigned int)v6);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v6;
}
