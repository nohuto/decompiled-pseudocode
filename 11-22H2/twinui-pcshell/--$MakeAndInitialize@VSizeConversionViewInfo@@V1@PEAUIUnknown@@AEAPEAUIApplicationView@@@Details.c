/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@@Z @ 0x1805A15B4
 * Callers:
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1805A1A00 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x18006F790 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0SizeConversionViewInfo@@QEAA@XZ @ 0x180074BB8 (--0SizeConversionViewInfo@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1805A205C (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &>(
        SizeConversionViewInfo **a1,
        IUnknown **a2,
        struct IApplicationView **a3)
{
  SizeConversionViewInfo *v6; // rax
  int v7; // edi
  SizeConversionViewInfo *v8; // rax
  struct IApplicationView *v9; // r8
  SizeConversionViewInfo *v10; // rbx
  SizeConversionViewInfo *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SizeConversionViewInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SizeConversionViewInfo::SizeConversionViewInfo(v6);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v12, (__int64)v8);
    v13 = 0LL;
    v9 = *a3;
    v10 = v12;
    v7 = SizeConversionViewInfo::RuntimeClassInitialize(v12, *a2, v9);
    if ( v7 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
