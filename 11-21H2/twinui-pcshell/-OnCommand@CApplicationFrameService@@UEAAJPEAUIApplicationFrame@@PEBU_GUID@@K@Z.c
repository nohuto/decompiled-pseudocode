/*
 * XREFs of ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18006E930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003AC08 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiveApplication@@@Z @ 0x18006EA80 (-_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiv.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075104 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DEFE0 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802FF4A0 (--0-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x1802FF760 (--1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ.c)
 *     ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1802FF78C (--1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x180300610 (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 *     ?StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x180300724 (-StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180300834 (-Stop@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18030114C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationFrameService::OnCommand(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3,
        unsigned int a4)
{
  CApplicationFrameService *v8; // r14
  struct IImmersiveApplication **AddressOf; // rax
  int ApplicationFromFrame; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  BOOL v36; // edi
  int v37; // eax
  RTL_SRWLOCK *v38; // rbx
  int v39; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v42[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v43[40]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( !*((_QWORD *)this + 17) )
    return 0LL;
  v40 = 0LL;
  v8 = (CApplicationFrameService *)((char *)this - 48);
  AddressOf = (struct IImmersiveApplication **)Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v40);
  ApplicationFromFrame = CApplicationFrameService::_GetApplicationFromFrame(v8, a2, AddressOf);
  if ( ApplicationFromFrame < 0 )
  {
LABEL_3:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    return (unsigned int)ApplicationFromFrame;
  }
  v12 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v12 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( !v12 )
  {
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v43);
    v43[0] = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
    AppCloseTelemetry::ShellAppManagerCloseRequested::StartActivity(
      (AppCloseTelemetry::ShellAppManagerCloseRequested *)v43,
      a4);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v42);
    v42[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
    CAppManagerTelemetry::TitleBarButtonCloseRequested::StartActivity((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v42);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, _QWORD))(**((_QWORD **)this + 17) + 112LL))(
            *((_QWORD *)this + 17),
            v40,
            1LL,
            a4);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B5,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v17,
        v39);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v42);
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v43);
    CAppManagerTelemetry::TitleBarButtonCloseRequested::~TitleBarButtonCloseRequested((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v42);
    AppCloseTelemetry::ShellAppManagerCloseRequested::~ShellAppManagerCloseRequested((AppCloseTelemetry::ShellAppManagerCloseRequested *)v43);
    goto LABEL_15;
  }
  v13 = *(_QWORD *)&a3->Data1 - ApplicationFrameMinimizeCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMinimizeCommand )
    v13 = *(_QWORD *)a3->Data4 - 0x68800BB0DB37499ALL;
  if ( v13 )
  {
    v14 = *(_QWORD *)&a3->Data1 - ApplicationFrameRestoreCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameRestoreCommand )
      v14 = *(_QWORD *)a3->Data4 - 0x43C1CD8F609CB0B9LL;
    if ( !v14 )
      goto LABEL_15;
    v19 = *(_QWORD *)&a3->Data1 - ApplicationFrameMaximizeCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMaximizeCommand )
      v19 = *(_QWORD *)a3->Data4 + 0x450BA64784828053LL;
    if ( !v19 )
      goto LABEL_15;
    v20 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v20 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( !v20 )
      goto LABEL_96;
    v21 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
      v21 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
    if ( !v21 )
    {
LABEL_96:
      v35 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
        v35 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
      v36 = v35 == 0;
      v41[0] = 0LL;
      v37 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v40, v41);
      ApplicationFromFrame = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3CD,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v37,
          v39);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v41);
        goto LABEL_3;
      }
      v38 = CApplicationManagerUtility::g_pIAMGlobals;
      v41[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, BOOL))(*(_QWORD *)v41[0] + 608LL))(v41[0], v36);
      if ( v38 )
        ReleaseSRWLockExclusive(v38);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v41);
      goto LABEL_15;
    }
    v22 = *(_QWORD *)&a3->Data1 - ApplicationFrameActionsCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameActionsCommand )
      v22 = *(_QWORD *)a3->Data4 + 0x52D8B31D06D36159LL;
    if ( v22 )
    {
      v23 = *(_QWORD *)&a3->Data1 - ApplicationFrameAppBarCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAppBarCommand )
        v23 = *(_QWORD *)a3->Data4 + 0x2B42122496FC8555LL;
      if ( v23 )
      {
        v24 = *(_QWORD *)&a3->Data1 - ApplicationFrameSearchCommand;
        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSearchCommand )
          v24 = *(_QWORD *)a3->Data4 + 0x33C5D77546DCE77FLL;
        if ( v24 )
        {
          v25 = *(_QWORD *)&a3->Data1 - ApplicationFrameShareCommand;
          if ( *(_QWORD *)&a3->Data1 == ApplicationFrameShareCommand )
            v25 = *(_QWORD *)a3->Data4 - 0x53BF8027BA4C1EABLL;
          if ( v25 )
          {
            v26 = *(_QWORD *)&a3->Data1 - ApplicationFramePrintCommand;
            if ( *(_QWORD *)&a3->Data1 == ApplicationFramePrintCommand )
              v26 = *(_QWORD *)a3->Data4 + 0x1B7A650E95AA5A72LL;
            if ( v26 )
            {
              v27 = *(_QWORD *)&a3->Data1 - ApplicationFrameTapAndSendCommand;
              if ( *(_QWORD *)&a3->Data1 == ApplicationFrameTapAndSendCommand )
                v27 = *(_QWORD *)a3->Data4 + 0x11779251ABA4E365LL;
              if ( v27 )
              {
                v28 = *(_QWORD *)&a3->Data1 - ApplicationFrameSettingsCommand;
                if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSettingsCommand )
                  v28 = *(_QWORD *)a3->Data4 - 0xE24967B55ED51BCLL;
                if ( v28 )
                {
                  v29 = *(_QWORD *)&a3->Data1 - ApplicationFrameFullScreenCommand;
                  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameFullScreenCommand )
                    v29 = *(_QWORD *)a3->Data4 - 0x30269B0F10A7889FLL;
                  if ( v29 )
                  {
                    v30 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitFullScreenCommand;
                    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitFullScreenCommand )
                      v30 = *(_QWORD *)a3->Data4 + 0x4D1FB59A484F3849LL;
                    if ( v30 )
                    {
                      v31 = *(_QWORD *)&a3->Data1 - ApplicationFrameAnnotateCommand;
                      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAnnotateCommand )
                        v31 = *(_QWORD *)a3->Data4 - 0x400BB63ABEA97CA4LL;
                      if ( v31 )
                      {
                        v32 = *(_QWORD *)&a3->Data1 - ApplicationFrameBackCommand;
                        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameBackCommand )
                          v32 = *(_QWORD *)a3->Data4 - 0x37530565A7963B8FLL;
                        if ( v32 )
                        {
                          v33 = *(_QWORD *)&a3->Data1 - ApplicationFrameSnapLeftCommand;
                          if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapLeftCommand )
                            v33 = *(_QWORD *)a3->Data4 - 0x255BC252F81743AELL;
                          if ( v33 )
                          {
                            v34 = *(_QWORD *)&a3->Data1 - ApplicationFrameSnapRightCommand;
                            if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapRightCommand )
                              v34 = *(_QWORD *)a3->Data4 - 0x55331EAB62563487LL;
                            if ( v34 )
                              goto LABEL_15;
                            v15 = CApplicationFrameService::_SnapApplicationToLocation(v8, v40, 1LL);
                            v16 = retaddr;
                            if ( v15 >= 0 )
                              goto LABEL_15;
                            v18 = 1028LL;
                            goto LABEL_95;
                          }
                          v15 = CApplicationFrameService::_SnapApplicationToLocation(v8, v40, 0LL);
                          v16 = retaddr;
                          if ( v15 < 0 )
                          {
                            v18 = 1024LL;
                            goto LABEL_95;
                          }
                        }
                        else
                        {
                          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 96LL))(
                                  *((_QWORD *)this + 17),
                                  v40,
                                  1LL);
                          v16 = retaddr;
                          if ( v15 < 0 )
                          {
                            v18 = 1020LL;
                            goto LABEL_95;
                          }
                        }
                      }
                      else
                      {
                        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 88LL))(
                                *((_QWORD *)this + 17),
                                v40,
                                1LL);
                        v16 = retaddr;
                        if ( v15 < 0 )
                        {
                          v18 = 1016LL;
                          goto LABEL_95;
                        }
                      }
                    }
                    else
                    {
                      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 104LL))(
                              *((_QWORD *)this + 17),
                              v40,
                              1LL);
                      v16 = retaddr;
                      if ( v15 < 0 )
                      {
                        v18 = 1012LL;
                        goto LABEL_95;
                      }
                    }
                  }
                  else
                  {
                    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 80LL))(
                            *((_QWORD *)this + 17),
                            v40,
                            1LL);
                    v16 = retaddr;
                    if ( v15 < 0 )
                    {
                      v18 = 1008LL;
                      goto LABEL_95;
                    }
                  }
                }
                else
                {
                  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 72LL))(
                          *((_QWORD *)this + 17),
                          v40,
                          1LL);
                  v16 = retaddr;
                  if ( v15 < 0 )
                  {
                    v18 = 1004LL;
                    goto LABEL_95;
                  }
                }
              }
              else
              {
                v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 64LL))(
                        *((_QWORD *)this + 17),
                        v40,
                        1LL);
                v16 = retaddr;
                if ( v15 < 0 )
                {
                  v18 = 1000LL;
                  goto LABEL_95;
                }
              }
            }
            else
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 56LL))(
                      *((_QWORD *)this + 17),
                      v40,
                      1LL);
              v16 = retaddr;
              if ( v15 < 0 )
              {
                v18 = 996LL;
                goto LABEL_95;
              }
            }
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 48LL))(
                    *((_QWORD *)this + 17),
                    v40,
                    1LL);
            v16 = retaddr;
            if ( v15 < 0 )
            {
              v18 = 992LL;
              goto LABEL_95;
            }
          }
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 40LL))(
                  *((_QWORD *)this + 17),
                  v40,
                  1LL);
          v16 = retaddr;
          if ( v15 < 0 )
          {
            v18 = 988LL;
            goto LABEL_95;
          }
        }
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 32LL))(
                *((_QWORD *)this + 17),
                v40,
                1LL);
        v16 = retaddr;
        if ( v15 < 0 )
        {
          v18 = 984LL;
          goto LABEL_95;
        }
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(
              *((_QWORD *)this + 17),
              v40,
              1LL);
      v16 = retaddr;
      if ( v15 < 0 )
      {
        v18 = 980LL;
        goto LABEL_95;
      }
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 120LL))(
            *((_QWORD *)this + 17),
            v40,
            1LL);
    v16 = retaddr;
    if ( v15 < 0 )
    {
      v18 = 955LL;
LABEL_95:
      wil::details::in1diag3::_Log_Hr(
        v16,
        (void *)v18,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v15,
        v39);
    }
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  return 0LL;
}
