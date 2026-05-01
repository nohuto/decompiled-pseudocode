/*
 * XREFs of ??$PerformCallbackOnView@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Z @ 0x180056C6C
 * Callers:
 *     ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x180056D78 (-GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@V?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@@12@$$QEAV_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Z @ 0x180056C0C (--$Make@V-$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>(
        IUnknown *punk,
        __int64 a2,
        _QWORD *a3)
{
  HRESULT v6; // eax
  int v7; // edi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+58h] [rbp+20h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v6,
      v11);
  }
  else
  {
    v11 = 0LL;
    v8 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, a2, &v11);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
        (const char *)(unsigned int)v8,
        v11);
    }
    else
    {
      Microsoft::WRL::Details::Make<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>,_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>(
        &v12,
        a3);
      v9 = v12;
      if ( v12 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v12);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
          (const char *)0x8007000ELL,
          v11);
      }
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(v9);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
