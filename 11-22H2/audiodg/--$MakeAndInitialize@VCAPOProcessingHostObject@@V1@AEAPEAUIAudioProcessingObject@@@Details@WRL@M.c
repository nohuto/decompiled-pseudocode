/*
 * XREFs of ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x140005074
 * Callers:
 *     ?RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140006270 (-RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??0CAPOProcessingHostObject@@QEAA@XZ @ 0x140005134 (--0CAPOProcessingHostObject@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z @ 0x1400052AC (-RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F0D4 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOProcessingHostObject,CAPOProcessingHostObject,IAudioProcessingObject * &>(
        CAPOProcessingHostObject **a1,
        struct IAudioProcessingObject **a2)
{
  CAPOProcessingHostObject *v4; // rax
  CAPOProcessingHostObject *v5; // rbx
  int v6; // edi
  CAPOProcessingHostObject *v8; // [rsp+30h] [rbp+8h] BYREF
  CAPOProcessingHostObject *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CAPOProcessingHostObject *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
    return (unsigned int)v6;
  }
  v5 = CAPOProcessingHostObject::CAPOProcessingHostObject(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = CAPOProcessingHostObject::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v9);
    goto LABEL_10;
  }
  if ( v5 )
    (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v5 + 8LL))(v5);
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
