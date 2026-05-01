/*
 * XREFs of ??$MakeAndInitialize@VCSnappedWindowModel@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindowModel@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveMonitorManager@@AEAW4SnappedWindowOcclusionModel@@@Z @ 0x1805983E0
 * Callers:
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSnappedWindowModel@@QEAA@XZ @ 0x180598AA0 (--0CSnappedWindowModel@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@@Z @ 0x180599048 (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewColl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindowModel,CSnappedWindowModel,IApplicationView * &,IApplicationViewCollection * &,IImmersiveMonitorManager * &,enum SnappedWindowOcclusionModel &>(
        CSnappedWindowModel **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  CSnappedWindowModel *v9; // rax
  int v10; // esi
  CSnappedWindowModel *v11; // rbx
  CSnappedWindowModel *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CSnappedWindowModel *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v9;
  if ( v9 )
  {
    v11 = CSnappedWindowModel::CSnappedWindowModel(v9);
    v13 = v11;
    v10 = CSnappedWindowModel::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(CSnappedWindowModel *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
