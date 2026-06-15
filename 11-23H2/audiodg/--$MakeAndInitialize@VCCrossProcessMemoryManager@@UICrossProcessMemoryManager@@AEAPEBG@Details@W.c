/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001A6B8
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A34 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CCrossProcessMemoryManager@@QEAA@XZ @ 0x14001A87C (--0CCrossProcessMemoryManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x14001A9EC (-RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemoryManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMem.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCCrossProcessMemoryManager@@@WRL@Microsoft@@QEAA@XZ @ 0x14006080C (--1-$ComPtr@VCCrossProcessMemoryManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
        CCrossProcessMemoryManager **a1,
        const unsigned __int16 **a2)
{
  CCrossProcessMemoryManager *v4; // rax
  CCrossProcessMemoryManager *v5; // rbx
  int v6; // edi
  const struct _GUID *v7; // rcx
  CCrossProcessMemoryManager *v9; // [rsp+30h] [rbp+8h] BYREF
  CCrossProcessMemoryManager *v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CCrossProcessMemoryManager *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v9);
    return (unsigned int)v6;
  }
  v5 = CCrossProcessMemoryManager::CCrossProcessMemoryManager(v4);
  v10 = v5;
  v9 = 0LL;
  v6 = CCrossProcessMemoryManager::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<CCrossProcessMemoryManager>::~ComPtr<CCrossProcessMemoryManager>(&v10);
    goto LABEL_12;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(CCrossProcessMemoryManager *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    *a1 = v5;
    v6 = 0;
    (*(void (__fastcall **)(CCrossProcessMemoryManager *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessMemoryManager>::Release(v5);
  return (unsigned int)v6;
}
