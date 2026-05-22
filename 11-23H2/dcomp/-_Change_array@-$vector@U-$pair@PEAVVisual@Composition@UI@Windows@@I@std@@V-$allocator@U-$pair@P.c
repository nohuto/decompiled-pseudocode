/*
 * XREFs of ?_Change_array@?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@AEAAXQEAU?$pair@PEAVVisual@Composition@UI@Windows@@I@2@_K1@Z @ 0x18010166C
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAVVisual@Composition@UI@Windows@@I@1@QEAU21@$$QEAU21@@Z @ 0x180100964 (--$_Emplace_reallocate@U-$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@-$vector@U-$pair@PEAVV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
