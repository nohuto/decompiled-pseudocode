/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18001E3F8
 * Callers:
 *     ??$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPolicyManager@@@Z @ 0x18001B1BC (--$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPol.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ??$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaybackManager@@@12@XZ @ 0x18001AF28 (--$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPlaybackManager@@@12@XZ.c)
 *     ??$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStreamClassPolicyManager@@@12@XZ @ 0x18001AFDC (--$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStreamClassPolicy.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x18001B06C (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ??$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@@Z @ 0x18001B118 (--$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001BD38 (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D9F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001EE4C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001F000 (-reset@-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180037458 (-TS_ServiceStart@@YAXXZ.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x1800461F4 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(CWindowsPolicyManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v4; // r9
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  volatile int **v14; // rax
  volatile int *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  CApplicationManager *v19; // rax
  DWORD v20; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-49h]
  CApplicationManager *v22; // [rsp+30h] [rbp-39h] BYREF
  _QWORD Recipient[3]; // [rsp+38h] [rbp-31h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = InitializeAudioThreadpool();
  v3 = v2;
  if ( v2 >= 0 )
  {
    g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
    if ( !g_WorkerEventPort )
    {
      v5 = 267LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v5,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v4);
    }
    g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
    if ( !g_EventWorkerThreadHandle )
    {
      v5 = 270LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v5,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v4);
    }
    TS_ServiceStart();
    v22 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(&v22);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 275LL;
      goto LABEL_17;
    }
    v10 = Microsoft::WRL::Details::Make<CStreamClassPolicyManager,>(Recipient);
    v11 = *v10;
    *v10 = 0LL;
    v12 = g_StreamClassPolicyManager;
    g_StreamClassPolicyManager = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = Recipient[0];
    if ( Recipient[0] )
    {
      Recipient[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( g_StreamClassPolicyManager )
    {
      v14 = (volatile int **)Microsoft::WRL::Details::Make<CPlaybackManager,>(Recipient);
      v15 = *v14;
      *v14 = 0LL;
      v16 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = v15;
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
          v16,
          v15);
      v17 = Recipient[0];
      if ( Recipient[0] )
      {
        Recipient[0] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
          v17,
          v15);
      }
      if ( *((_QWORD *)this + 4) )
      {
        wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::reset((char *)this + 40);
        v18 = Microsoft::WRL::Details::MakeAndInitialize<CDuckingManager,CDuckingManager,>((CDuckingManager **)this + 5);
        v3 = v18;
        if ( v18 >= 0 )
        {
          g_DuckingManager = (struct CDuckingManager *)*((_QWORD *)this + 5);
          v19 = v22;
          v22 = 0LL;
          g_ApplicationManager = v19;
          g_PlaybackManager = (struct CPlaybackManager *)*((_QWORD *)this + 4);
          memset_0(&spc, 0, sizeof(spc));
          if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
          {
            g_bIsAoAcSystem = 1;
            Recipient[0] = LowPowerEpochNotificationCallback;
            Recipient[1] = 0LL;
            v20 = PowerSettingRegisterNotification(
                    &GUID_LOW_POWER_EPOCH,
                    2u,
                    Recipient,
                    &g_hLowPowerEpochNotificationHandle);
            if ( v20 )
              wil::details::in1diag3::_Log_Win32(
                retaddr,
                (void *)0x12C,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                (const char *)v20,
                dwCreationFlags);
          }
          else
          {
            g_bIsAoAcSystem = 0;
          }
          v3 = 0;
          goto LABEL_32;
        }
        v8 = (unsigned int)v18;
        v9 = 283LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
          (const char *)v8);
LABEL_32:
        wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((__int64 *)&v22);
        return v3;
      }
      v9 = 281LL;
    }
    else
    {
      v9 = 278LL;
    }
    v3 = -2147024882;
    v8 = 2147942414LL;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x108,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
