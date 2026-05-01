/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_f1aebe5463bcf7efcbfa9532c210b711___ @ 0x1800E08F0
 * Callers:
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E0330 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_f1aebe5463bcf7efcbfa9532c210b711___(
        IUnknown *a1,
        __int64 a2,
        _OWORD *a3)
{
  HRESULT v5; // eax
  int v6; // edi
  void *v7; // rbx
  __int64 (__fastcall *v8)(void *, __int64, __int64 *); // rdi
  int v9; // eax
  char *v10; // rbx
  char *v11; // rax
  char *v12; // rdi
  _QWORD *v13; // rbx
  void *v15; // [rsp+20h] [rbp-18h] BYREF
  char *v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  v5 = IUnknown_QueryService(
         a1,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"desktop\\internal\\shell\\inc\\private\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v5,
      (int)v15);
  }
  else
  {
    v18 = 0LL;
    v7 = v15;
    v8 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v15 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    v9 = v8(v7, a2, &v18);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"desktop\\internal\\shell\\inc\\private\\ShellPositionerHelpers.h",
        (const char *)(unsigned int)v9,
        (int)v15);
    }
    else
    {
      v10 = 0LL;
      v16 = 0LL;
      v11 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        v13 = v11 + 8;
        Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v11 + 8));
        *((_DWORD *)v12 + 11) = 1;
        *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IShellPositionerCallback'};
        *v13 = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v12 + 3) = *a3;
        *((_OWORD *)v12 + 4) = a3[1];
        *(_QWORD *)v12 = off_1807A2990;
        *v13 = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v10 = v12;
        v16 = v12;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v12 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 24LL))(v18, v10);
        if ( v6 >= 0 )
          v6 = 0;
      }
      else
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (unsigned int)"desktop\\internal\\shell\\inc\\private\\ShellPositionerHelpers.h",
          (const char *)0x8007000ELL,
          (int)v15);
      }
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v6;
}
