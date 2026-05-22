/*
 * XREFs of ??1CPropertyIndex@@QEAA@XZ @ 0x1801AD040
 * Callers:
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 *     ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070 (-PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CPropertyIndex::~CPropertyIndex(CPropertyIndex *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 2) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
