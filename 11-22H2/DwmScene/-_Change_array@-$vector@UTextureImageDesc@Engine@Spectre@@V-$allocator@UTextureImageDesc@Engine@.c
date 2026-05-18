/*
 * XREFs of ?_Change_array@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAXQEAUTextureImageDesc@Engine@Spectre@@_K1@Z @ 0x180056AC4
 * Callers:
 *     ??$_Emplace_reallocate@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureImageDesc@Engine@Spectre@@QEAU234@$$QEA_KAEB_K$$QEAI33$$QEAH@Z @ 0x180054DA4 (--$_Emplace_reallocate@_KAEB_KIIIH@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UText.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Spectre::Engine::TextureImageDesc>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
