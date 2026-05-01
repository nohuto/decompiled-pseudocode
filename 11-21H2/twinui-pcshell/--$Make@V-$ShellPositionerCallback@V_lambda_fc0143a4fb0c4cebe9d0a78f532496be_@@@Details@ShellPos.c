/*
 * XREFs of ??$Make@V?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@@12@$$QEAV_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Z @ 0x180056C0C
 * Callers:
 *     ??$PerformCallbackOnView@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Z @ 0x180056C6C (--$PerformCallbackOnView@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@ShellPositionerHelpers@@YA.c)
 * Callees:
 *     ??0?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@QEAA@$$QEAV_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Z @ 0x180056BA8 (--0-$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositione.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>,_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
