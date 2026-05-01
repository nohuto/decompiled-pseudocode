/*
 * XREFs of ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180056E00
 * Callers:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Z @ 0x180057044 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUI.c)
 * Callees:
 *     ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x180056D78 (-GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x180056E74 (-GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall SizeConversionViewInfo::RuntimeClassInitialize(
        SizeConversionViewInfo *this,
        IUnknown *punk,
        struct IApplicationView *a3,
        struct IImmersiveMonitor *a4)
{
  int AppDataForView; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((char *)this + 16, a4);
  AppDataForView = SizeConversionViewInfo::GetAppDataForView(this, a3);
  if ( AppDataForView < 0 )
  {
    v9 = 30LL;
  }
  else
  {
    AppDataForView = SizeConversionViewInfo::GetPositionerDataForView(this, punk, a3);
    if ( AppDataForView >= 0 )
      return 0LL;
    v9 = 31LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)AppDataForView,
    v10);
  return (unsigned int)AppDataForView;
}
