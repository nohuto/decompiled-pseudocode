/*
 * XREFs of ??$MakeAndInitialize@VCApplicationTracker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800472B0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationTracker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180047230 (-CreateInstance@-$SimpleClassFactory@VCApplicationTracker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??0CApplicationTracker@@QEAA@XZ @ 0x180047340 (--0CApplicationTracker@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationTracker,IUnknown,>(_QWORD *a1)
{
  CApplicationTracker *v2; // rax
  CApplicationTracker *v3; // rdi
  unsigned int v4; // ebx
  CApplicationTracker *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CApplicationTracker *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v3 = CApplicationTracker::CApplicationTracker(v2);
    v4 = (**(__int64 (__fastcall ***)(CApplicationTracker *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(CApplicationTracker *))(*(_QWORD *)v3 + 16LL))(v3);
    return v4;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v6);
    return 2147942414LL;
  }
}
