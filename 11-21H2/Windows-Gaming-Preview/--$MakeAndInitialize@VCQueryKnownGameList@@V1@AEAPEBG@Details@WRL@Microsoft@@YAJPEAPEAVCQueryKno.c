/*
 * XREFs of ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18004904C
 * Callers:
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18004518C (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 * Callees:
 *     ??0CQueryKnownGameList@@QEAA@XZ @ 0x180045260 (--0CQueryKnownGameList@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x1800453E4 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18004B574 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
        CQueryKnownGameList **a1,
        const unsigned __int16 **a2)
{
  CQueryKnownGameList *v4; // rax
  int v5; // esi
  CQueryKnownGameList *v6; // rbx

  *a1 = 0LL;
  v4 = (CQueryKnownGameList *)operator new(0x328uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CQueryKnownGameList::CQueryKnownGameList(v4);
    v5 = CQueryKnownGameList::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(CQueryKnownGameList *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
