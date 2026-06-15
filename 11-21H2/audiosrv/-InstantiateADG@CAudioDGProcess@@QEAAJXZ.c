/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180019340
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001CF90 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44 (-s_adPublishApoTelemetry@@YAJPEBG@Z.c)
 *     AudioServerGetAudioHistoryProducerHandle @ 0x1800F12B0 (AudioServerGetAudioHistoryProducerHandle.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180118630 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18003D660 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18003F9B8 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  bool v5; // bp
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // r10
  int v10; // eax
  int v11; // r14d
  struct CAudioThreadPool *v12; // r14
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r14d
  int pdwType; // [rsp+20h] [rbp-88h]
  bool v17; // [rsp+40h] [rbp-68h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-64h] BYREF
  int pvData; // [rsp+48h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+50h] [rbp-58h]
  char v21[32]; // [rsp+58h] [rbp-50h] BYREF
  bool *v22; // [rsp+78h] [rbp-30h]
  __int64 v23; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v20 = v2;
  v3 = 0;
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_2;
  *((_BYTE *)this + 100) = 0;
  v5 = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableProtectedAudioDG",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    v5 = pvData != 0;
  v6 = CAudioDGProcess::PrepareForADGStartup(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)v6,
      pdwType);
    v3 = v8;
    goto LABEL_2;
  }
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v7,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 4u && *(char *)(v9 + 16) < 0 && (*(_QWORD *)(v9 + 24) & 0x80LL) == *(_QWORD *)(v9 + 24) )
  {
    v17 = v5;
    v22 = &v17;
    v23 = 1LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v9, (unsigned int)&unk_18018B7BD, 0, 0, 3, (__int64)v21);
  }
  v10 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v5);
  v11 = v10;
  if ( !v5 )
    goto LABEL_11;
  if ( v10 < 0 )
  {
    if ( v10 == -2147024319 )
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
    v14 = CAudioDGProcess::PrepareForADGStartup(this);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)(unsigned int)v14,
        pdwType);
      v3 = v15;
      goto LABEL_2;
    }
    v11 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, !v5);
LABEL_11:
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x197,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)(unsigned int)v11,
        pdwType);
      v3 = v11;
      goto LABEL_2;
    }
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v12 = ThreadPool;
    v13 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 80LL))(
            ThreadPool,
            CAudioDGProcess::OnADGProcessTerminatedHandler,
            this);
    *((_QWORD *)this + 16) = v13;
    if ( v13 )
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 88LL))(
        v12,
        v13,
        *((_QWORD *)this + 11),
        0LL);
  }
LABEL_2:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
