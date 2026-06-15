/*
 * XREFs of ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x1400743C8
 * Callers:
 *     _lambda_a2a7c58af5182531a41a85456c7819e1_::operator() @ 0x140074990 (_lambda_a2a7c58af5182531a41a85456c7819e1_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F0D4 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CRTThreadManager@@QEAA@XZ @ 0x140074610 (--0CRTThreadManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x140075114 (-RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CRTThreadManager,CRTThreadManager,>(
        CRTThreadManager **a1)
{
  void *v2; // rax
  int v3; // edi
  CRTThreadManager *v4; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  CRTThreadManager *v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (CRTThreadManager *)v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v6);
    return (unsigned int)v3;
  }
  v8 = v2;
  v4 = CRTThreadManager::CRTThreadManager((CRTThreadManager *)v2);
  v7 = v4;
  v6 = 0LL;
  v3 = CRTThreadManager::RuntimeClassInitialize(v4);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v7);
    goto LABEL_5;
  }
  if ( v4 )
    (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v4;
  if ( v4 )
    (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
