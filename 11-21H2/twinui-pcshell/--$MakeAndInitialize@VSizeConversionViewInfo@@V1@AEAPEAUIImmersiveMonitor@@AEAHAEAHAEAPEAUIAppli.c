/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18012CB64
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x18012CAC0 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804E9194 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAH_ea_1804E9194.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18012CC44 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationVi.c)
 *     ??0SizeConversionViewInfo@@QEAA@XZ @ 0x18012CD58 (--0SizeConversionViewInfo@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
        SizeConversionViewInfo **a1,
        struct IImmersiveMonitor **a2,
        int *a3,
        int *a4,
        struct IApplicationViewTitlebarConfiguration **a5)
{
  SizeConversionViewInfo *v9; // rax
  SizeConversionViewInfo *v10; // rbx
  int v11; // edi
  SizeConversionViewInfo *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (SizeConversionViewInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = SizeConversionViewInfo::SizeConversionViewInfo(v9);
    v13 = v10;
    v11 = SizeConversionViewInfo::RuntimeClassInitialize(v10, *a2, *a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
