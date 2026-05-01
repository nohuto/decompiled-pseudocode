/*
 * XREFs of ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1805A1A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180074160 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@@Z @ 0x1805A15B4 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::ConvertForView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IApplicationView *a3,
        struct tagSIZE *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct SizeConversionViewInfo *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationView *v13; // [rsp+50h] [rbp+18h] BYREF
  IUnknown *v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = a3;
  *a4 = 0LL;
  v12 = 0LL;
  v14 = (IUnknown *)*((_QWORD *)this - 9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &>(
         &v12,
         &v14,
         &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v12, a4);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 277LL;
  }
  else
  {
    v9 = 276LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v8;
}
