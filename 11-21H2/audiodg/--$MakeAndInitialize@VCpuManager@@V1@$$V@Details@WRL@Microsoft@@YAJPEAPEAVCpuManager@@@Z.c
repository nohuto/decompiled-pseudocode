/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140002AC0
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x140003080 (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ??0CpuManager@@QEAA@XZ @ 0x140002BD8 (--0CpuManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14002AF68 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  unsigned int v2; // ebx
  CpuManager *v3; // rax
  CpuManager *v4; // rdi
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _BYTE v9[272]; // [rsp+20h] [rbp-118h] BYREF
  CpuManager *v10; // [rsp+140h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (CpuManager *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = CpuManager::CpuManager(v3);
    v10 = v4;
    *((_DWORD *)v4 + 68) = 0;
    memset_0(v9, 0, 0x108uLL);
    v5 = (_OWORD *)((char *)v4 + 280);
    v6 = v9;
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
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
