/*
 * XREFs of ??0?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA@XZ @ 0x180057E44
 * Callers:
 *     _dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180001F70 (_dynamic_initializer_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>()
{
  _QWORD *v0; // rax

  CWindowBorder::CCachedBorderBrush::s_cache = 0LL;
  v0 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v0 = v0;
  v0[1] = v0;
  *(_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache = v0;
  return &CWindowBorder::CCachedBorderBrush::s_cache;
}
