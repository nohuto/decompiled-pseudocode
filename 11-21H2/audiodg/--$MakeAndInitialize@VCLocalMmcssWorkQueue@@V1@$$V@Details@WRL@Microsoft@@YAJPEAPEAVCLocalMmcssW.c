/*
 * XREFs of ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14006BE50
 * Callers:
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14002909C (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14006C38C (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x14001CF60 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14006C72C (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v2);
    *(_QWORD *)v3 = &CLocalMmcssWorkQueue::`vftable';
    v3[4] = 0;
    v3[5] = 0;
    *((_BYTE *)v3 + 24) = 0;
    v4 = CLocalMmcssWorkQueue::RuntimeClassInitialize((CLocalMmcssWorkQueue *)v3);
    if ( v4 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
