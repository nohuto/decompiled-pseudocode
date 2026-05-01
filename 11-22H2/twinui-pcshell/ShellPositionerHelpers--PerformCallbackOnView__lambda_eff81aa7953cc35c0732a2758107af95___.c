/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___ @ 0x180015CBC
 * Callers:
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180015AD0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95_____lambda_eff81aa7953cc35c0732a2758107af95___ @ 0x180015BC4 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_e.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___(
        IUnknown *punk,
        __int64 a2,
        __int64 a3)
{
  void **v6; // rbx
  HRESULT Service; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rsi
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v6 = *(void ***)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v15, &v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v6);
  Service = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              v6);
  v8 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)(unsigned int)Service,
      v15);
  }
  else
  {
    v9 = v15;
    v18 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 48LL);
    v11 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v18, &v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    v12 = v10(v9, a2, v11);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v12,
        v15);
    }
    else
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95_____lambda_eff81aa7953cc35c0732a2758107af95___(
        &v16,
        a3);
      v13 = v16;
      if ( v16 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, v16);
        if ( v8 >= 0 )
          v8 = 0;
      }
      else
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (unsigned int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL,
          v15);
      }
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(v13);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  return (unsigned int)v8;
}
