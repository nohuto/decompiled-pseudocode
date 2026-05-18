/*
 * XREFs of ?_Change_array@?$vector@VShaderOptionFilter@Engine@Spectre@@V?$allocator@VShaderOptionFilter@Engine@Spectre@@@std@@@std@@AEAAXQEAVShaderOptionFilter@Engine@Spectre@@_K1@Z @ 0x180087E5C
 * Callers:
 *     ??$_Emplace_reallocate@AEBVShaderOptionFilter@Engine@Spectre@@@?$vector@VShaderOptionFilter@Engine@Spectre@@V?$allocator@VShaderOptionFilter@Engine@Spectre@@@std@@@std@@QEAAPEAVShaderOptionFilter@Engine@Spectre@@QEAV234@AEBV234@@Z @ 0x180086164 (--$_Emplace_reallocate@AEBVShaderOptionFilter@Engine@Spectre@@@-$vector@VShaderOptionFilter@Engi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderOptionFilter>::_Change_array(
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
