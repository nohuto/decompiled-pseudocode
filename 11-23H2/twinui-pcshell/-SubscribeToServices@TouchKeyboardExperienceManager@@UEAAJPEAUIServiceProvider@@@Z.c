/*
 * XREFs of ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800AB98C (--1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEA.c)
 *     ??$?0$$V@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800AB9B8 (--$-0$$V@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogge.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017F0D0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1801CC574 (IsQueryWin32SubsystemHostPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::SubscribeToServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  char v4; // dl
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, char *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, SID *, GUID *); // rdi
  _QWORD *v14; // r15
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v17; // rdi
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v19; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-198h]
  __int64 v24[2]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v25[320]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  if ( !(unsigned __int8)IsQueryWin32SubsystemHostPresent() || (unsigned int)QueryWin32SubsystemHost() != 1 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::TouchKeyboardExperienceManagerSubscribeToServices(
      (__int64)v25,
      v4);
    Microsoft::WRL::ComPtr<IServiceProvider>::operator=((char *)this + 288, a2);
    v5 = *((_QWORD *)this + 36);
    v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
    v7 = v6(v5, &SID_ProcessLifetimeManagerControl, &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d, (char *)this + 328);
    v8 = v7;
    if ( v7 < 0 )
    {
      v21 = 3043LL;
    }
    else
    {
      QueryService = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 51);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
             a2,
             &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
             &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
             (char *)this + 408);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v24[0] = 0LL;
        v10 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
        v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v10)(
                a2,
                &SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                v24);
        v8 = v11;
        if ( v11 < 0 )
        {
          v22 = 3051LL;
        }
        else
        {
          v12 = v24[0];
          v13 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v24[0] + 72LL);
          v14 = (_QWORD *)((char *)this + 296);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 37);
          v23 = (_DWORD)this + 296;
          v11 = v13(v12, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c);
          v8 = v11;
          if ( v11 < 0 )
          {
            v22 = 3052LL;
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 40LL))(
                    *((_QWORD *)this + 51),
                    ((unsigned __int64)this + 72) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                    (char *)this + 232);
            v8 = v11;
            if ( v11 < 0 )
            {
              v22 = 3054LL;
            }
            else
            {
              v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v14 + 40LL))(
                      *v14,
                      10LL,
                      ((unsigned __int64)this + 80) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                      (char *)this + 236);
              v8 = v11;
              if ( v11 < 0 )
              {
                v22 = 3057LL;
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 72LL))(*v14, (char *)this + 424);
                v15 = a2->lpVtbl->QueryService;
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 38);
                v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v15)(
                        a2,
                        &SID_InputHostLayout,
                        &GUID_260b6f30_f9bc_452d_be7e_d8bdc0ea3a0a,
                        (char *)this + 304);
                v8 = v11;
                if ( v11 < 0 )
                {
                  v22 = 3061LL;
                }
                else
                {
                  v16 = a2->lpVtbl->QueryService;
                  v17 = (_QWORD *)((char *)this + 312);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 39);
                  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
                          a2,
                          &IID_IImmersiveWindowMessageService,
                          &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                          (char *)this + 312);
                  v8 = v11;
                  if ( v11 < 0 )
                  {
                    v22 = 3063LL;
                  }
                  else
                  {
                    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
                            *v17,
                            26LL,
                            ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                            (char *)this + 244);
                    v8 = v11;
                    if ( v11 < 0 )
                    {
                      v22 = 3064LL;
                    }
                    else
                    {
                      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
                              *v17,
                              126LL,
                              ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                              (char *)this + 248);
                      v8 = v11;
                      if ( v11 < 0 )
                      {
                        v22 = 3065LL;
                      }
                      else
                      {
                        v18 = a2->lpVtbl->QueryService;
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
                        v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v18)(
                                a2,
                                &IID_IGlobalRudeWindowNotificationService,
                                &GUID_a240bbbd_d294_480c_8d38_3786056363f1,
                                (char *)this + 320);
                        v8 = v11;
                        if ( v11 < 0 )
                        {
                          v22 = 3066LL;
                        }
                        else
                        {
                          if ( this == (TouchKeyboardExperienceManager *)48 )
                            v19 = 0LL;
                          else
                            v19 = (char *)this + 120;
                          v11 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 40) + 24LL))(
                                  *((_QWORD *)this + 40),
                                  v19,
                                  (char *)this + 252);
                          v8 = v11;
                          if ( v11 >= 0 )
                          {
                            wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
                              v25,
                              0LL);
                            v8 = 0;
LABEL_17:
                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
LABEL_18:
                            TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::~TouchKeyboardExperienceManagerSubscribeToServices((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v25);
                            return v8;
                          }
                          v22 = 3067LL;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v11,
          v23);
        goto LABEL_17;
      }
      v21 = 3045LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v23);
    goto LABEL_18;
  }
  return 0LL;
}
