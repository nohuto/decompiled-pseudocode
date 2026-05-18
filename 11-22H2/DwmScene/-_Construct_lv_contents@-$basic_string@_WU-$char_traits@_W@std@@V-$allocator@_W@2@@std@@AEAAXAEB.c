/*
 * XREFs of ?_Construct_lv_contents@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXAEBV12@@Z @ 0x1800130E8
 * Callers:
 *     Spectre::Engine::_dynamic_initializer_for__kSceneLayerDefaultID__ @ 0x1800039D0 (Spectre--Engine--_dynamic_initializer_for__kSceneLayerDefaultID__.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18001217C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 */

void __fastcall std::wstring::_Construct_lv_contents(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  void *v7; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v3 >= 8 )
  {
    v5 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    size_of = std::_Get_size_of_n<2>(v5 + 1);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    memcpy_0(v7, v2, 2 * v3 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v3;
  a1[3] = v5;
}
