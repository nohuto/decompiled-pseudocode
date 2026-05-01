/*
 * XREFs of ??$MakeAndInitialize@VFullScreenPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180108994
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180109CB0 (-CreateInstance@-$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x18010905C (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FullScreenPositioner@@QEAAJXZ @ 0x180109C48 (-RuntimeClassInitialize@FullScreenPositioner@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FullScreenPositioner,IUnknown,>(_QWORD *a1)
{
  FullScreenPositioner *v2; // rax
  FullScreenPositioner *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (FullScreenPositioner *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = FullScreenPositioner::FullScreenPositioner(v2);
    v4 = FullScreenPositioner::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(FullScreenPositioner *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(FullScreenPositioner *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
