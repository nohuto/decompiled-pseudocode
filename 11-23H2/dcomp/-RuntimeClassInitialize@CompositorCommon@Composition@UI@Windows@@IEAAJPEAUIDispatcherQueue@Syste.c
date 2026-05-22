/*
 * XREFs of ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170
 * Callers:
 *     ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001CFA4 (-RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAK@Z @ 0x18001D5CC (-RegGetDwmDwordHelper@@YA_NPEBGPEAK@Z.c)
 *     ??4?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDispatcherQueue@System@Windows@@@Z @ 0x18001D624 (--4-$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDispatcherQueue@S.c)
 *     ?MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z @ 0x18001D674 (-MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z.c)
 *     ?SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z @ 0x18001D700 (-SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z.c)
 *     ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z @ 0x18001D760 (-Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV1.c)
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?ConfigureMessageSession@CDevice@DirectComposition@@QEAAXPEAUIMessageSession@@@Z @ 0x18001E0E0 (-ConfigureMessageSession@CDevice@DirectComposition@@QEAAXPEAUIMessageSession@@@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEA$$T111$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003E174 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@Comp.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        unsigned int a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  struct Windows::UI::Composition::Compositor *v13; // rax
  DirectComposition::CDevice **v14; // rdi
  const char *v15; // r9
  char v16; // al
  bool v17; // zf
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  __int64 (__fastcall *v20)(_QWORD, GUID *, __int64 *); // rbx
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, struct IMessageSession **); // rdi
  int v24; // eax
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-50h]
  const char *v27; // [rsp+28h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  struct IMessageSession *v29; // [rsp+48h] [rbp-28h] BYREF
  int v30[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  __int64 v33; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v35; // [rsp+90h] [rbp+20h] BYREF
  int v36; // [rsp+A8h] [rbp+38h] BYREF

  v29 = 0LL;
  *(_QWORD *)(a1 + 464) = a4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  *(_DWORD *)(a1 + 104) = GetCurrentThreadId();
  v9 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(
         (Microsoft::WRL2::ContextRuntimeClass *)a1,
         (struct Microsoft::WRL2::ContextSession *)a1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>::operator=(a1 + 504, a2);
    v28 = 0LL;
    v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 504);
    if ( v11 )
    {
      v20 = **v11;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v28);
      v21 = v20(v11, &GUID_1574672c_d483_40de_a90a_83923881cb6e, &v28);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x281,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v21,
          v26);
      v22 = v28;
      v23 = *(__int64 (__fastcall **)(__int64, struct IMessageSession **))(*(_QWORD *)v28 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
      v24 = v23(v22, &v29);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x283,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v24,
          v26);
    }
    else
    {
      if ( (a5 & 1) != 0 )
      {
        v10 = -2147024891;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x272,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)0x80070005LL,
          (int)"The caller must initialize DispatcherQueue on this thread before this operation.",
          v27);
LABEL_46:
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v28);
        goto LABEL_47;
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
      v12 = CoreUICreate(&v29);
      v10 = v12;
      if ( v12 < 0 )
      {
        v25 = 634LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_46;
      }
    }
    AcquireSRWLockExclusive(&Windows::UI::Composition::CompositorCommon::s_lockCompositors);
    GetCurrentThreadId();
    v13 = Windows::UI::Composition::CompositorCommon::s_pFirstCompositorWeak;
    *(_QWORD *)(a1 + 416) = Windows::UI::Composition::CompositorCommon::s_pFirstCompositorWeak;
    if ( v13 )
      *((_QWORD *)v13 + 51) = a1;
    dword_180220AF0 = 0;
    Windows::UI::Composition::CompositorCommon::s_pFirstCompositorWeak = (struct Windows::UI::Composition::Compositor *)a1;
    ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositorCommon::s_lockCompositors);
    v14 = (DirectComposition::CDevice **)(a1 + 456);
    v12 = DirectComposition::CDevice::Create((a1 + 152) & -(__int64)(a1 != 0), a6, a3, a1 + 456);
    v10 = v12;
    if ( v12 < 0 )
    {
      v25 = 680LL;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)*v14 + 2) + 256LL))((__int64)*v14 + 16, 1LL);
      if ( !v29 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2B6,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          v15);
      DirectComposition::CDevice::ConfigureMessageSession(*v14, v29);
      Microsoft::WRL2::ContextSession::SetMessageSession((Microsoft::WRL2::ContextSession *)a1, v29);
      v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, __int64 (__fastcall *)(void *), __int64, __int64 (__fastcall *)(void *), _QWORD, __int64))(*(_QWORD *)v29 + 96LL))(
              v29,
              Windows::UI::Composition::CompositorCommon::StaticCallCommit_NoLock,
              a1,
              Windows::UI::Composition::CompositorCommon::DummyMessageGroupCancelProc,
              0LL,
              a1 + 432);
      v10 = v12;
      if ( v12 < 0 )
      {
        v25 = 704LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 432) + 32LL))(*(_QWORD *)(a1 + 432), 2LL);
        v10 = v12;
        if ( v12 < 0 )
        {
          v25 = 716LL;
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, __int64 (__fastcall *)(Windows::UI::Composition::CompositorCommon *), __int64, __int64 (__fastcall *)(void *), _QWORD, __int64))(*(_QWORD *)v29 + 96LL))(
                  v29,
                  Windows::UI::Composition::CompositorCommon::Static_InvokeDeferredCallbacks_NoLock,
                  a1,
                  Windows::UI::Composition::CompositorCommon::DummyMessageGroupCancelProc,
                  0LL,
                  a1 + 440);
          v10 = v12;
          if ( v12 < 0 )
          {
            v25 = 723LL;
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 32LL))(
                    *(_QWORD *)(a1 + 440),
                    3LL);
            v10 = v12;
            if ( v12 < 0 )
            {
              v25 = 725LL;
            }
            else
            {
              *(_QWORD *)(a1 + 632) = a1;
              *(_QWORD *)(a1 + 704) = a1;
              *(_QWORD *)(a1 + 776) = a1;
              v12 = DirectComposition::CMessageConversationHost::Create(
                      *v14,
                      0,
                      (int (*)(const void *, const void *, const void *, unsigned int))Windows::UI::Composition::CompositorCommon::s_OnCallbackMessage_NoLock,
                      (void *)a1,
                      (struct DirectComposition::CMessageConversationHost **)(a1 + 424));
              v10 = v12;
              if ( v12 < 0 )
              {
                v25 = 738LL;
              }
              else
              {
                v16 = *(_BYTE *)(a1 + 452);
                if ( (v16 & 1) == 0 )
                {
                  v17 = *(_DWORD *)(a1 + 448) == 0;
                  *(_BYTE *)(a1 + 452) = v16 | 1;
                  if ( v17 )
                    Windows::UI::Composition::CompositorCommon::EnableMessageGroup((Windows::UI::Composition::CompositorCommon *)a1);
                }
                v35 = 0;
                *(_BYTE *)(a1 + 452) &= ~4u;
                if ( RegGetDwmDwordHelper(L"MarshalAllDebugInfo", &v35) && v35 == 1 )
                  *(_BYTE *)(a1 + 452) |= 4u;
                *(_BYTE *)(a1 + 452) &= ~8u;
                if ( RegGetDwmDwordHelper(L"AnimationAttributionEnabled", &v35)
                  && v35 == 1
                  && (*(_BYTE *)(a1 + 452) |= 8u,
                      AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
                                                  (Windows::UI::Composition::CompositorCommon *)a1,
                                                  1),
                      v12 = Windows::UI::Composition::AnimationLoggingManager::MarshalCompositorComment(
                              AnimationLoggingManager,
                              0LL),
                      v10 = v12,
                      v12 < 0) )
                {
                  v25 = 778LL;
                }
                else
                {
                  *(_BYTE *)(a1 + 452) &= ~0x10u;
                  if ( RegGetDwmDwordHelper(L"AnimationAttributionHashingEnabled", &v35) && v35 == 1 )
                    *(_BYTE *)(a1 + 452) |= 0x10u;
                  if ( (a5 & 0x2000) != 0 )
                    goto LABEL_26;
                  *(_QWORD *)v30 = 0LL;
                  v31 = 0LL;
                  v32 = 0LL;
                  v33 = 0LL;
                  v36 = 0x2000;
                  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(a1 + 528);
                  v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Compositor,Windows::UI::Composition::Compositor,std::nullptr_t,std::nullptr_t,std::nullptr_t,std::nullptr_t,enum Windows::UI::Composition::CompositorCommon::CreationFlags>(
                          (int)a1 + 528,
                          (unsigned int)&v33,
                          (unsigned int)&v32,
                          (unsigned int)&v31,
                          (__int64)v30,
                          (__int64)&v36);
                  v10 = v12;
                  if ( v12 >= 0 )
                  {
LABEL_26:
                    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v28);
                    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
                    return 0LL;
                  }
                  v25 = 814LL;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_45;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x263,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
    (const char *)(unsigned int)v9);
LABEL_47:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
  return v10;
}
