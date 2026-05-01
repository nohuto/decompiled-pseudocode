/*
 * XREFs of ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x1806664AC
 * Callers:
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180667060 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSnappedWindowModel@@QEAA@XZ @ 0x180666EF0 (--0CSnappedWindowModel@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCSnappedWindowModel@@@WRL@Microsoft@@QEAAXPEAVCSnappedWindowModel@@@Z @ 0x18066701C (-Attach@-$ComPtr@VCSnappedWindowModel@@@WRL@Microsoft@@QEAAXPEAVCSnappedWindowModel@@@Z.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@@Z @ 0x180667508 (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewColl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5)
{
  CSnappedWindowModel *v9; // rax
  int v10; // esi
  CSnappedWindowModel *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  CSnappedWindowModel *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CSnappedWindowModel *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v9;
  if ( v9 )
  {
    v11 = CSnappedWindowModel::CSnappedWindowModel(v9);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CSnappedWindowModel>::Attach(&v15, v11);
    v12 = *a4;
    v13 = (__int64)v15;
    v10 = CSnappedWindowModel::RuntimeClassInitialize(v15, *a2, *a3, v12, *a5);
    if ( v10 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
