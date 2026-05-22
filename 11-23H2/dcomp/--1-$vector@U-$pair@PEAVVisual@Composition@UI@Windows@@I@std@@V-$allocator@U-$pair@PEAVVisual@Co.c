/*
 * XREFs of ??1?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@QEAA@XZ @ 0x180100B34
 * Callers:
 *     Windows::UI::Composition::EnumerateVisualTreePreOrderImpl @ 0x180101040 (Windows--UI--Composition--EnumerateVisualTreePreOrderImpl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::~vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
