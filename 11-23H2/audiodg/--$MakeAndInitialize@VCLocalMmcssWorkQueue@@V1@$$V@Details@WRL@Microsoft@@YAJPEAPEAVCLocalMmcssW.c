/*
 * XREFs of ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14007429C
 * Callers:
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x140074AAC (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x140074C24 (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140005270 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F094 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14007502C (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  int v4; // edi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v6 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v6);
    return (unsigned int)v4;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v2);
  *(_QWORD *)v3 = &CLocalMmcssWorkQueue::`vftable';
  v3[4] = 0;
  v3[5] = 0;
  *((_BYTE *)v3 + 24) = 0;
  v7 = v3;
  v6 = 0LL;
  v4 = CLocalMmcssWorkQueue::RuntimeClassInitialize((CLocalMmcssWorkQueue *)v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v7);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = v3;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
