/*
 * XREFs of ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x18005ED10
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
__int64 __fastcall WindowSizeConverter::ConvertForDpiAndView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        unsigned int a3,
        struct IApplicationView *a4,
        struct tagSIZE *a5)
{
  __int64 *AddressOf; // rax
  int MonitorForDpi; // eax
  unsigned int v11; // edi
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v16);
  MonitorForDpi = WindowSizeConverter::GetMonitorForDpi(
                    (WindowSizeConverter *)((char *)this - 88),
                    a3,
                    (struct IImmersiveMonitor **)AddressOf);
  v11 = MonitorForDpi;
  if ( MonitorForDpi < 0 )
  {
    v13 = 302LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)MonitorForDpi,
      v14);
    goto LABEL_4;
  }
  v14 = (int)a5;
  MonitorForDpi = (*(__int64 (__fastcall **)(WindowSizeConverter *, struct tagSIZE, __int64, struct IApplicationView *))(*(_QWORD *)this + 32LL))(
                    this,
                    a2,
                    v16,
                    a4);
  v11 = MonitorForDpi;
  if ( MonitorForDpi < 0 )
  {
    v13 = 303LL;
    goto LABEL_7;
  }
  v11 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return v11;
}
