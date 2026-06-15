/*
 * XREFs of ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x1400944B8
 * Callers:
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x140069560 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F0D4 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CCPAudioHistoryControl@@QEAA@XZ @ 0x1400947C4 (--0CCPAudioHistoryControl@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x140094D18 (-RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJPEAUICrossProcessMemory@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl,ICPAudioHistoryControl,ICrossProcessMemory * &>(
        _QWORD *a1,
        struct ICrossProcessMemory **a2)
{
  void *v4; // rax
  int v5; // ebx
  CCPAudioHistoryControl *v6; // rdi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CCPAudioHistoryControl *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = CCPAudioHistoryControl::CCPAudioHistoryControl((CCPAudioHistoryControl *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = CCPAudioHistoryControl::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(CCPAudioHistoryControl *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_e14eb825_78cf_46fa_9c77_3b7330248ba0,
             a1);
      (*(void (__fastcall **)(CCPAudioHistoryControl *))(*(_QWORD *)v6 + 16LL))(v6);
      return (unsigned int)v5;
    }
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v9);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
  return (unsigned int)v5;
}
