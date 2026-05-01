/*
 * XREFs of ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x180057150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Z @ 0x180057044 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18012CDC8 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        struct IApplicationView *a4,
        struct tagSIZE *a5)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rdx
  IUnknown *v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct SizeConversionViewInfo *v13; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+60h] [rbp+18h] BYREF
  struct IApplicationView *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = 0LL;
  v11 = (IUnknown *)*((_QWORD *)this - 9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &,IImmersiveMonitor * &>(
         &v13,
         &v11,
         &v15,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 289LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v7,
      (int)v11);
    goto LABEL_4;
  }
  v7 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v13, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 290LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return v8;
}
