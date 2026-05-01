/*
 * XREFs of ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x1800BFD78
 * Callers:
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x1800BFCC4 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 * Callees:
 *     ??0CQueryKnownGameList@@QEAA@XZ @ 0x1800BFE40 (--0CQueryKnownGameList@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x1800BFEF0 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
        CQueryKnownGameList **a1,
        const unsigned __int16 **a2)
{
  CQueryKnownGameList *v4; // rax
  CQueryKnownGameList *v5; // rbx
  int v6; // esi

  *a1 = 0LL;
  v4 = (CQueryKnownGameList *)operator new(0x328uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CQueryKnownGameList::CQueryKnownGameList(v4);
    v6 = CQueryKnownGameList::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
