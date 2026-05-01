/*
 * XREFs of ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180488D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1801062DC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1804394F4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??$AsWeak@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@YAJPEAVICortanaWNFNotification@Cortana@TwinUI@@PEAVWeakRef@01@@Z @ 0x1804885A4 (--$AsWeak@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@YAJPEAVICortanaWNFNotificatio.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RealtimeEnticement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180488A88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RealtimeEnticement@@@details@wil@@QEAAX_N.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x1804890D0 (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::SubscribeToWNF(
        struct DiagnosticsInfo *this,
        struct TwinUI::Cortana::ICortanaWNFNotification *a2,
        bool a3)
{
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // dl
  int v15; // eax
  int v16; // eax
  int v17[2]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+4Ch] [rbp-24h]
  unsigned int v19[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  __int16 v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct DiagnosticsInfo *v24; // [rsp+A0h] [rbp+30h] BYREF

  (*(void (__fastcall **)(struct DiagnosticsInfo *))(*(_QWORD *)this + 8LL))(this);
  v24 = this + 7;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v24);
  v7 = Microsoft::WRL::AsWeak<TwinUI::Cortana::ICortanaWNFNotification>(
         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
         v6);
  if ( v7 < 0 )
  {
    v8 = 18LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = RtlSubscribeWnfStateChangeNotification(
          &this[1],
          WNF_TMCN_ISTABLETMODE,
          0LL,
          TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback,
          this,
          0LL,
          0,
          1);
  if ( v10 < 0 )
  {
    v11 = 29LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v10);
  }
  if ( !a3 )
  {
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[2],
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 43LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[3],
            WNF_SHEL_LOCKSCREEN_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 54LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[4],
            WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 65LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[5],
            WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v10 < 0 )
    {
      v11 = 76LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    *(_QWORD *)v19 = retaddr;
    v20 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp";
    v22 = 92;
    v21 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RealtimeEnticement>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetImpl'::`2'::impl,
      1u,
      v12,
      v13);
    wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v17, v14);
    v15 = RtlSubscribeWnfStateChangeNotification(
            &this[6],
            WNF_SHEL_APPLICATION_STARTED,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback,
            this,
            0LL,
            0,
            1);
    if ( v15 >= 0 )
    {
      v7 = 0;
    }
    else
    {
      v16 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x5C,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
              (const char *)(unsigned int)v15);
      v7 = v16;
      if ( v16 < 0 )
        wil::details::ReportFeatureError(
          (wil::details *)(unsigned int)v16,
          (__int64)v17,
          (struct wil::ThreadErrorContext *)0x9853BD,
          (__int64)v19);
    }
    if ( *(_QWORD *)v17 )
      *(_DWORD *)(*(_QWORD *)v17 + 16LL) = v18;
    if ( v7 < 0 )
    {
      v8 = 92LL;
      goto LABEL_3;
    }
  }
  TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState((TwinUI::Cortana::CCortanaWNFService *)this, a3);
  return 0LL;
}
