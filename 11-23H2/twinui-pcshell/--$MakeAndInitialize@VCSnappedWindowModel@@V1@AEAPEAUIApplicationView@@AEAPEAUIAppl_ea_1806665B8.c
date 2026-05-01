/*
 * XREFs of ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1806665B8
 * Callers:
 *     ?CSnappedWindowModel_CreateInstanceWithRegions@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBU_GUID@@PEAPEAX@Z @ 0x180667124 (-CSnappedWindowModel_CreateInstanceWithRegions@@YAJPEAUIApplicationView@@PEAUIApplicationViewCol.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSnappedWindowModel@@QEAA@XZ @ 0x180666EF0 (--0CSnappedWindowModel@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCSnappedWindowModel@@@WRL@Microsoft@@QEAAXPEAVCSnappedWindowModel@@@Z @ 0x18066701C (-Attach@-$ComPtr@VCSnappedWindowModel@@@WRL@Microsoft@@QEAAXPEAVCSnappedWindowModel@@@Z.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066758C (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplic_ea_18066758C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &,std::deque<tagRECT> const &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 a6)
{
  CSnappedWindowModel *v10; // rax
  int v11; // esi
  CSnappedWindowModel *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  CSnappedWindowModel *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CSnappedWindowModel *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v10;
  if ( v10 )
  {
    v12 = CSnappedWindowModel::CSnappedWindowModel(v10);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CSnappedWindowModel>::Attach(&v16, v12);
    v13 = *a4;
    v14 = (__int64)v16;
    v11 = CSnappedWindowModel::RuntimeClassInitialize(v16, *a2, *a3, v13, *a5, a6, 0LL);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
