/*
 * XREFs of ??$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010C02C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVoiceAssistantPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18010BFB0 (-CreateInstance@-$SimpleClassFactory@VVoiceAssistantPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     ??0VoiceAssistantPositioner@@QEAA@XZ @ 0x18010C0F4 (--0VoiceAssistantPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ @ 0x18010C228 (-RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VoiceAssistantPositioner,IUnknown,>(_QWORD *a1)
{
  VoiceAssistantPositioner *v2; // rax
  VoiceAssistantPositioner *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (VoiceAssistantPositioner *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = VoiceAssistantPositioner::VoiceAssistantPositioner(v2);
    v4 = VoiceAssistantPositioner::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(VoiceAssistantPositioner *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(VoiceAssistantPositioner *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
