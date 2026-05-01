/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_312fc7501d297601e27e2a0436e50146___ @ 0x180321770
 * Callers:
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322110 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_312fc7501d297601e27e2a0436e50146_____lambda_312fc7501d297601e27e2a0436e50146___ @ 0x180321668 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_312fc7501d297601e27e2a0436e50146___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v6; // rbx
  HRESULT Service; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64 *); // rsi
  __int64 *v11; // rdi
  int v12; // eax
  volatile signed __int32 *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v6);
  Service = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v6);
  v8 = Service;
  if ( Service >= 0 )
  {
    v9 = v15;
    v18 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 48LL);
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    v12 = v10(v9, a2, v11);
    v8 = v12;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_312fc7501d297601e27e2a0436e50146_____lambda_312fc7501d297601e27e2a0436e50146___(
        &v16,
        a3);
      v13 = v16;
      if ( v16 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18, v16);
        if ( v8 >= 0 )
          v8 = 0;
      }
      else
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  return (unsigned int)v8;
}
