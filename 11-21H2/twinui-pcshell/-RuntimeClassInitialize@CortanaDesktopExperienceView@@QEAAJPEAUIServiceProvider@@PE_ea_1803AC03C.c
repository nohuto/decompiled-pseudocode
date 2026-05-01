/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803AC03C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803ABF74 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800E2738 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180116C40 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x18039FB20 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803A5538 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  void *v7; // rdx
  __int64 *v8; // rax
  void *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  TwinUI::Lighting::AssistantLightManager *v12; // rbx
  _QWORD *v13; // rbx
  TwinUI::Lighting::AssistantLightManager *v14; // rsi
  bool v15; // al
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 (__fastcall *v18)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r8
  __int64 v28; // [rsp+30h] [rbp-10h] BYREF
  void *v29; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v31; // [rsp+80h] [rbp+40h] BYREF
  __int64 v32; // [rsp+88h] [rbp+48h] BYREF
  void **v33; // [rsp+98h] [rbp+58h]

  v33 = a4;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 + 96), a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (void **)(a1 + 104),
    v7);
  v8 = wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>((__int64 *)&v29);
  v10 = *v8;
  *v8 = 0LL;
  v11 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v10;
  if ( v11 )
  {
    v12 = (TwinUI::Lighting::AssistantLightManager *)v11[1];
    v11[1] = 0LL;
    if ( v12 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v12, v9);
      operator delete(v12);
    }
    operator delete(v11);
  }
  v13 = v29;
  v29 = 0LL;
  if ( v13 )
  {
    v14 = (TwinUI::Lighting::AssistantLightManager *)v13[1];
    v13[1] = 0LL;
    if ( v14 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v14, v9);
      operator delete(v14);
    }
    operator delete(v13);
  }
  v15 = IsPPIEdition();
  *(_BYTE *)(a1 + 288) = v15;
  if ( v15 )
  {
    v16 = FLOAT_492_0;
    v17 = FLOAT_428_0;
  }
  else
  {
    v16 = FLOAT_656_0;
    v17 = FLOAT_320_0;
  }
  *(float *)(a1 + 212) = v17;
  *(float *)(a1 + 216) = v16;
  v28 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
  v19 = v18(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v28);
  v20 = v19;
  if ( v19 < 0 )
  {
    v21 = 380LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_29;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 24LL))(
          v28,
          26LL,
          a1 + 40,
          a1 + 252);
  v20 = v19;
  if ( v19 < 0 )
  {
    v21 = 381LL;
    goto LABEL_16;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 24LL))(
          v28,
          1025LL,
          a1 + 40,
          a1 + 256);
  v20 = v19;
  if ( v19 < 0 )
  {
    v21 = 382LL;
    goto LABEL_16;
  }
  v32 = 0LL;
  v22 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
  v23 = v22(a2, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v32);
  v20 = v23;
  if ( v23 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v32 + 32LL))(v32, a1 + 64, a1 + 268);
    v20 = v23;
    if ( v23 >= 0 )
    {
      v31 = 0;
      v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 24LL))(v32, &v31);
      if ( v25 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x185,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v25);
      *(_BYTE *)(a1 + 246) = v31 != 0;
      Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)(a1 + 120), a2);
      LOBYTE(v26) = *(_BYTE *)(a1 + 288);
      v23 = (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 104))(*(_QWORD *)(a1 + 104), a1 + 72, v26);
      v20 = v23;
      if ( v23 >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
        v20 = 0;
        goto LABEL_29;
      }
      v24 = 396LL;
    }
    else
    {
      v24 = 387LL;
    }
  }
  else
  {
    v24 = 386LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v20;
}
