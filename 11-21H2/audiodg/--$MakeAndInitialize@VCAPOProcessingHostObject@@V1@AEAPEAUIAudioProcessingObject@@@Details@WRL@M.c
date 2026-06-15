/*
 * XREFs of ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x14001CD80
 * Callers:
 *     ?RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001C8F0 (-RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001CE44 (-RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ??0CAPOProcessingHostObject@@QEAA@XZ @ 0x14001CED0 (--0CAPOProcessingHostObject@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOProcessingHostObject,CAPOProcessingHostObject,IAudioProcessingObject * &>(
        CAPOProcessingHostObject **a1,
        struct IAudioProcessingObject **a2)
{
  CAPOProcessingHostObject *v4; // rax
  CAPOProcessingHostObject *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (CAPOProcessingHostObject *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CAPOProcessingHostObject::CAPOProcessingHostObject(v4);
    v6 = CAPOProcessingHostObject::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
