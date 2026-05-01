/*
 * XREFs of ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1804E9580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x180033958 (-GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForDpiAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        int a3,
        unsigned int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  __int64 *AddressOf; // rax
  int MonitorForDpi; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v17);
  MonitorForDpi = WindowSizeConverter::GetMonitorForDpi(
                    (WindowSizeConverter *)((char *)this - 88),
                    a3,
                    (struct IImmersiveMonitor **)AddressOf);
  v13 = MonitorForDpi;
  if ( MonitorForDpi >= 0 )
  {
    MonitorForDpi = (*(__int64 (__fastcall **)(WindowSizeConverter *, struct tagSIZE, __int64, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, struct tagSIZE *))(*(_QWORD *)this + 48LL))(
                      this,
                      a2,
                      v17,
                      a4,
                      a5,
                      a6,
                      a7);
    v13 = MonitorForDpi;
    if ( MonitorForDpi >= 0 )
    {
      v13 = 0;
      goto LABEL_7;
    }
    v14 = 333LL;
  }
  else
  {
    v14 = 332LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)MonitorForDpi);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v13;
}
