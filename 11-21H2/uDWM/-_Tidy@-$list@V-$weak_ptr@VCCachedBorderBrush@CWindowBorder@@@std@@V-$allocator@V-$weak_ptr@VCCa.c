/*
 * XREFs of ?_Tidy@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@AEAAXXZ @ 0x18005FBBC
 * Callers:
 *     _dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180066CC0 (_dynamic_atexit_destructor_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180039150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::_Tidy(void **a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  std::_Ref_count_base *v5; // rcx

  v2 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = (std::_Ref_count_base *)v3[3];
      if ( v5 )
        std::_Ref_count_base::_Decwref(v5);
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16,0>(*a1, 0x20uLL);
}
