/*
 * XREFs of ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B4FA0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B51E0 (-CreateInstance@-$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ?RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ @ 0x1800B4EC0 (-RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ.c)
 *     ??0WindowSizeConverter@@QEAA@XZ @ 0x1800B506C (--0WindowSizeConverter@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowSizeConverter,IUnknown,>(_QWORD *a1)
{
  WindowSizeConverter *v2; // rax
  WindowSizeConverter *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (WindowSizeConverter *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = WindowSizeConverter::WindowSizeConverter(v2);
    v4 = WindowSizeConverter::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(WindowSizeConverter *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(WindowSizeConverter *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
