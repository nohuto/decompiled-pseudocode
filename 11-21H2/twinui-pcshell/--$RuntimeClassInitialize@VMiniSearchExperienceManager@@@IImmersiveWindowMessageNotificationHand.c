/*
 * XREFs of ??$RuntimeClassInitialize@VMiniSearchExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVMiniSearchExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18005EB3C
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVMiniSearchExperienceManager@@P85@EAAJI_K_J@_E@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVMiniSearchExperienceManager@@$$QEAP87@EAAJI_K_J@_E@Z @ 0x18005EA6C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_18005EA6C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?4V_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_@@X@?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_@@@Z @ 0x18005EC54 (--$-4V_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_@@X@-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$.c)
 *     ??$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAVWeakRef@01@@Z @ 0x18005ECE4 (--$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAV.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<MiniSearchExperienceManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = &v13;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v7 = Microsoft::WRL::AsWeak<MiniSearchExperienceManager>(a2, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\Handlers.h",
      (const char *)(unsigned int)v7,
      v10[0]);
  }
  else
  {
    v10[0] = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v10[1] = a2;
    v11 = *a3;
    wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=<_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_,void>(
      a1 + 40,
      v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v8;
}
