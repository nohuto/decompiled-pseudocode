/*
 * XREFs of ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1805AE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VoiceAssistantPositioner::SetViewStateForDesiredAppState(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        unsigned int a3)
{
  void (__fastcall *v5)(__int64, GUID *, IUnknown **); // rbx
  unsigned int Service; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *punk; // [rsp+78h] [rbp+38h] BYREF

  if ( a3 != 2 )
  {
    if ( a3 > 1 )
    {
      Service = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x270,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)0x8000FFFFLL);
      return Service;
    }
    v10 = (a3 != 0) + 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&punk);
    if ( punk )
    {
      LODWORD(punk[10].lpVtbl) = v10;
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*a2)[40])(a2);
      Service = v13;
      if ( v13 >= 0 )
      {
        Service = 0;
        goto LABEL_17;
      }
      v11 = (unsigned int)v13;
      v12 = 620LL;
    }
    else
    {
      Service = -2147024882;
      v11 = 2147942414LL;
      v12 = 618LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v11);
LABEL_17:
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&punk);
    return Service;
  }
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  punk = 0LL;
  v5 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 - 112) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v5(a1 - 112, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  Service = IUnknown_QueryService(punk, &stru_18089EA48, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( (Service & 0x80000000) == 0 )
  {
    v9 = ApplicationViewHelpers::CloseView(a2, (__int64)ppvOut[0], 8, 9, 22);
    Service = v9;
    if ( v9 >= 0 )
    {
      Service = 0;
      goto LABEL_8;
    }
    v7 = (unsigned int)v9;
    v8 = 610LL;
  }
  else
  {
    v7 = Service;
    v8 = 608LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v7);
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  return Service;
}
