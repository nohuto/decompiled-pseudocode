/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140052D38
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x140053F50 (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x140052E68 (--0CpuManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  CpuManager *v2; // rax
  CpuManager *v4; // rbx
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _BYTE v8[280]; // [rsp+20h] [rbp-118h] BYREF
  CpuManager *v9; // [rsp+140h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CpuManager *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( v2 )
  {
    v4 = CpuManager::CpuManager(v2);
    v9 = v4;
    *((_DWORD *)v4 + 68) = 0;
    memset_0(v8, 0, 0x108uLL);
    v5 = (_OWORD *)((char *)v4 + 280);
    v6 = v8;
    v7 = 2LL;
    do
    {
      *v5 = *v6;
      v5[1] = v6[1];
      v5[2] = v6[2];
      v5[3] = v6[3];
      v5[4] = v6[4];
      v5[5] = v6[5];
      v5[6] = v6[6];
      v5 += 8;
      *(v5 - 1) = v6[7];
      v6 += 8;
      --v7;
    }
    while ( v7 );
    *(_QWORD *)v5 = *(_QWORD *)v6;
    *((_OWORD *)v4 + 34) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(CpuManager *, _QWORD, __int64))(*(_QWORD *)v4 + 8LL))(v4, 0LL, 128LL);
    *a1 = v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)&v9);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>((void **)&v9);
    return 2147942414LL;
  }
}
