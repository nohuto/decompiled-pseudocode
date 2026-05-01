/*
 * XREFs of ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1805A1910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x18005EDB8 (-GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)MonitorForDpi);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v13;
}
