/*
 * XREFs of ??$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@Z @ 0x1800D4FD0
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x1800D530C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800AC394 (-_Xlen_string@std@@YAXXZ.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x1800D76D8 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

__int64 __fastcall std::string::_Reallocate_for<_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_,char>(__int64 a1, size_t a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  _BYTE *v6; // rax
  _BYTE *v7; // r14

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  v4 = *(_QWORD *)(a1 + 24);
  v5 = std::string::_Calculate_growth(a2, v4);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  v7 = v6;
  memset_0(v6, 0, a2);
  v7[a2] = 0;
  if ( v4 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, v4 + 1);
  *(_QWORD *)a1 = v7;
  return a1;
}
