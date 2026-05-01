/*
 * XREFs of ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18003D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020B14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180023A54 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 *     ?_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003D60C (-_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiv.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x1802D0C2A (--1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803BAFC4 (--0-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1803BB190 (--1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x1803BC680 (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 *     ?StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x1803BC7A0 (-StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803BC8B4 (-Stop@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1803BD1CC (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
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
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  WINBOOL v18; // edx
  __int64 v19; // rdx
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
  __int64 v36; // rax
  BOOL v37; // edi
  int v38; // eax
  RTL_SRWLOCK *v39; // rbx
  int v40; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64); // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v42[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v43[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v44[40]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( !*((_QWORD *)this + 17) )
    return 0LL;
  v41 = 0LL;
  v8 = (CApplicationFrameService *)((char *)this - 48);
  AddressOf = (struct IImmersiveApplication **)Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v41);
  ApplicationFromFrame = CApplicationFrameService::_GetApplicationFromFrame(v8, a2, AddressOf);
  if ( ApplicationFromFrame < 0 )
    goto LABEL_13;
  v11 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v11 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  if ( !v11 )
  {
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v44);
    v44[0] = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
    AppCloseTelemetry::ShellAppManagerCloseRequested::StartActivity(
      (AppCloseTelemetry::ShellAppManagerCloseRequested *)v44,
      a4);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v43,
      (__int64)"TitleBarButtonCloseRequested");
    v43[0] = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
    CAppManagerTelemetry::TitleBarButtonCloseRequested::StartActivity((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v43);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64, _QWORD))(**((_QWORD **)this + 17) + 112LL))(
            *((_QWORD *)this + 17),
            v41,
            1LL,
            a4);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B5,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)(unsigned int)v17,
        v40);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v43,
      v18);
    wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v44);
    CAppManagerTelemetry::TitleBarButtonCloseRequested::~TitleBarButtonCloseRequested((CAppManagerTelemetry::TitleBarButtonCloseRequested *)v43);
    AppCloseTelemetry::ShellAppManagerCloseRequested::~ShellAppManagerCloseRequested((AppCloseTelemetry::ShellAppManagerCloseRequested *)v44);
    goto LABEL_15;
  }
  v12 = *(_QWORD *)&a3->Data1 - ApplicationFrameMinimizeCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMinimizeCommand )
    v12 = *(_QWORD *)a3->Data4 - 0x68800BB0DB37499ALL;
  if ( v12 )
  {
    v13 = *(_QWORD *)&a3->Data1 - ApplicationFrameRestoreCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameRestoreCommand )
      v13 = *(_QWORD *)a3->Data4 - 0x43C1CD8F609CB0B9LL;
    if ( !v13 )
      goto LABEL_15;
    v20 = *(_QWORD *)&a3->Data1 - ApplicationFrameMaximizeCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameMaximizeCommand )
      v20 = *(_QWORD *)a3->Data4 + 0x450BA64784828053LL;
    if ( !v20 )
      goto LABEL_15;
    v21 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v21 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( v21 )
    {
      v22 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
        v22 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
      if ( v22 )
      {
        v23 = *(_QWORD *)&a3->Data1 - ApplicationFrameActionsCommand;
        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameActionsCommand )
          v23 = *(_QWORD *)a3->Data4 + 0x52D8B31D06D36159LL;
        if ( v23 )
        {
          v24 = *(_QWORD *)&a3->Data1 - ApplicationFrameAppBarCommand;
          if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAppBarCommand )
            v24 = *(_QWORD *)a3->Data4 + 0x2B42122496FC8555LL;
          if ( v24 )
          {
            v25 = *(_QWORD *)&a3->Data1 - ApplicationFrameSearchCommand;
            if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSearchCommand )
              v25 = *(_QWORD *)a3->Data4 + 0x33C5D77546DCE77FLL;
            if ( v25 )
            {
              v26 = *(_QWORD *)&a3->Data1 - ApplicationFrameShareCommand;
              if ( *(_QWORD *)&a3->Data1 == ApplicationFrameShareCommand )
                v26 = *(_QWORD *)a3->Data4 - 0x53BF8027BA4C1EABLL;
              if ( v26 )
              {
                v27 = *(_QWORD *)&a3->Data1 - ApplicationFramePrintCommand;
                if ( *(_QWORD *)&a3->Data1 == ApplicationFramePrintCommand )
                  v27 = *(_QWORD *)a3->Data4 + 0x1B7A650E95AA5A72LL;
                if ( v27 )
                {
                  v28 = *(_QWORD *)&a3->Data1 - ApplicationFrameTapAndSendCommand;
                  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameTapAndSendCommand )
                    v28 = *(_QWORD *)a3->Data4 + 0x11779251ABA4E365LL;
                  if ( v28 )
                  {
                    v29 = *(_QWORD *)&a3->Data1 - ApplicationFrameSettingsCommand;
                    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSettingsCommand )
                      v29 = *(_QWORD *)a3->Data4 - 0xE24967B55ED51BCLL;
                    if ( v29 )
                    {
                      v30 = *(_QWORD *)&a3->Data1 - ApplicationFrameFullScreenCommand;
                      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameFullScreenCommand )
                        v30 = *(_QWORD *)a3->Data4 - 0x30269B0F10A7889FLL;
                      if ( v30 )
                      {
                        v31 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitFullScreenCommand;
                        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitFullScreenCommand )
                          v31 = *(_QWORD *)a3->Data4 + 0x4D1FB59A484F3849LL;
                        if ( v31 )
                        {
                          v32 = *(_QWORD *)&a3->Data1 - ApplicationFrameAnnotateCommand;
                          if ( *(_QWORD *)&a3->Data1 == ApplicationFrameAnnotateCommand )
                            v32 = *(_QWORD *)a3->Data4 - 0x400BB63ABEA97CA4LL;
                          if ( v32 )
                          {
                            v33 = *(_QWORD *)&a3->Data1 - ApplicationFrameBackCommand;
                            if ( *(_QWORD *)&a3->Data1 == ApplicationFrameBackCommand )
                              v33 = *(_QWORD *)a3->Data4 - 0x37530565A7963B8FLL;
                            if ( v33 )
                            {
                              v34 = *(_QWORD *)&a3->Data1 - ApplicationFrameSnapLeftCommand;
                              if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapLeftCommand )
                                v34 = *(_QWORD *)a3->Data4 - 0x255BC252F81743AELL;
                              if ( v34 )
                              {
                                v35 = *(_QWORD *)&a3->Data1 - ApplicationFrameSnapRightCommand;
                                if ( *(_QWORD *)&a3->Data1 == ApplicationFrameSnapRightCommand )
                                  v35 = *(_QWORD *)a3->Data4 - 0x55331EAB62563487LL;
                                if ( v35 )
                                  goto LABEL_15;
                                v15 = CApplicationFrameService::_SnapApplicationToLocation(v8, v41, 1LL);
                                v16 = retaddr;
                                if ( v15 >= 0 )
                                  goto LABEL_15;
                                v19 = 1028LL;
                                goto LABEL_95;
                              }
                              v15 = CApplicationFrameService::_SnapApplicationToLocation(v8, v41, 0LL);
                              v16 = retaddr;
                              if ( v15 < 0 )
                              {
                                v19 = 1024LL;
                                goto LABEL_95;
                              }
                            }
                            else
                            {
                              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 96LL))(
                                      *((_QWORD *)this + 17),
                                      v41,
                                      1LL);
                              v16 = retaddr;
                              if ( v15 < 0 )
                              {
                                v19 = 1020LL;
                                goto LABEL_95;
                              }
                            }
                          }
                          else
                          {
                            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 88LL))(
                                    *((_QWORD *)this + 17),
                                    v41,
                                    1LL);
                            v16 = retaddr;
                            if ( v15 < 0 )
                            {
                              v19 = 1016LL;
                              goto LABEL_95;
                            }
                          }
                        }
                        else
                        {
                          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 104LL))(
                                  *((_QWORD *)this + 17),
                                  v41,
                                  1LL);
                          v16 = retaddr;
                          if ( v15 < 0 )
                          {
                            v19 = 1012LL;
                            goto LABEL_95;
                          }
                        }
                      }
                      else
                      {
                        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 80LL))(
                                *((_QWORD *)this + 17),
                                v41,
                                1LL);
                        v16 = retaddr;
                        if ( v15 < 0 )
                        {
                          v19 = 1008LL;
                          goto LABEL_95;
                        }
                      }
                    }
                    else
                    {
                      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 72LL))(
                              *((_QWORD *)this + 17),
                              v41,
                              1LL);
                      v16 = retaddr;
                      if ( v15 < 0 )
                      {
                        v19 = 1004LL;
                        goto LABEL_95;
                      }
                    }
                  }
                  else
                  {
                    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 64LL))(
                            *((_QWORD *)this + 17),
                            v41,
                            1LL);
                    v16 = retaddr;
                    if ( v15 < 0 )
                    {
                      v19 = 1000LL;
                      goto LABEL_95;
                    }
                  }
                }
                else
                {
                  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 56LL))(
                          *((_QWORD *)this + 17),
                          v41,
                          1LL);
                  v16 = retaddr;
                  if ( v15 < 0 )
                  {
                    v19 = 996LL;
                    goto LABEL_95;
                  }
                }
              }
              else
              {
                v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 48LL))(
                        *((_QWORD *)this + 17),
                        v41,
                        1LL);
                v16 = retaddr;
                if ( v15 < 0 )
                {
                  v19 = 992LL;
                  goto LABEL_95;
                }
              }
            }
            else
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 40LL))(
                      *((_QWORD *)this + 17),
                      v41,
                      1LL);
              v16 = retaddr;
              if ( v15 < 0 )
              {
                v19 = 988LL;
                goto LABEL_95;
              }
            }
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 32LL))(
                    *((_QWORD *)this + 17),
                    v41,
                    1LL);
            v16 = retaddr;
            if ( v15 < 0 )
            {
              v19 = 984LL;
              goto LABEL_95;
            }
          }
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(
                  *((_QWORD *)this + 17),
                  v41,
                  1LL);
          v16 = retaddr;
          if ( v15 < 0 )
          {
            v19 = 980LL;
            goto LABEL_95;
          }
        }
        goto LABEL_15;
      }
    }
    v36 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v36 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    v37 = v36 == 0;
    v42[0] = 0LL;
    v38 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v41, (__int64)v42);
    ApplicationFromFrame = v38;
    if ( v38 >= 0 )
    {
      v39 = CApplicationManagerUtility::g_pIAMGlobals;
      v42[1] = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(_QWORD, BOOL))(*(_QWORD *)v42[0] + 608LL))(v42[0], v37);
      if ( v39 )
        ReleaseSRWLockExclusive(v39);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v42);
      goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CD,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)v38,
      v40);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v42);
LABEL_13:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v41);
    return (unsigned int)ApplicationFromFrame;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 120LL))(
          *((_QWORD *)this + 17),
          v41,
          1LL);
  v16 = retaddr;
  if ( v15 < 0 )
  {
    v19 = 955LL;
LABEL_95:
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)(unsigned int)v15,
      v40);
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v41);
  return 0LL;
}
