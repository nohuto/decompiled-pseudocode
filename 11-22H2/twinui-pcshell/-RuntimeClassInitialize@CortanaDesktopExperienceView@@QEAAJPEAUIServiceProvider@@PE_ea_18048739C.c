/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18048739C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1804872D4 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x18047E22C (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180480A7C (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  void *v7; // rdx
  bool v8; // al
  float v9; // xmm0_4
  float v10; // xmm1_4
  __int64 (__fastcall *v11)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r8
  __int64 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF
  void **v25; // [rsp+98h] [rbp+58h]

  v25 = a4;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 + 96), a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (void **)(a1 + 104),
    v7);
  v8 = IsPPIEdition();
  *(_BYTE *)(a1 + 288) = v8;
  if ( v8 )
  {
    v9 = FLOAT_492_0;
    v10 = FLOAT_428_0;
  }
  else
  {
    v9 = FLOAT_656_0;
    v10 = FLOAT_320_0;
  }
  *(float *)(a1 + 212) = v10;
  *(float *)(a1 + 216) = v9;
  v21[0] = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v21);
  v12 = v11(a2, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, v21);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 379LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_21;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v21[0] + 24LL))(
          v21[0],
          26LL,
          (a1 + 40) & -(__int64)(a1 != 0),
          a1 + 252);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 380LL;
    goto LABEL_8;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v21[0] + 24LL))(
          v21[0],
          1025LL,
          (a1 + 40) & -(__int64)(a1 != 0),
          a1 + 256);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 381LL;
    goto LABEL_8;
  }
  v24 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  v16 = v15(a2, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v24);
  v13 = v16;
  if ( v16 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 32LL))(
            v24,
            (a1 + 64) & -(__int64)(a1 != 0),
            a1 + 268);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v23 = 0;
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v23);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x184,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v18);
      *(_BYTE *)(a1 + 246) = v23 != 0;
      Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)(a1 + 120), a2);
      LOBYTE(v19) = *(_BYTE *)(a1 + 288);
      v16 = (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 104))(
              *(_QWORD *)(a1 + 104),
              (a1 + 72) & -(__int64)(a1 != 0),
              v19);
      v13 = v16;
      if ( v16 >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        v13 = 0;
        goto LABEL_21;
      }
      v17 = 395LL;
    }
    else
    {
      v17 = 386LL;
    }
  }
  else
  {
    v17 = 385LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v21);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v13;
}
