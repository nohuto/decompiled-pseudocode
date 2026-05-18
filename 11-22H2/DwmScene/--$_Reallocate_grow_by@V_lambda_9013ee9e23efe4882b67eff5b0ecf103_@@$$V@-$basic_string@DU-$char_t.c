/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x18002F69C
 * Callers:
 *     ?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180038B3C (-reserve@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x18001187C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>(
        void **Src,
        unsigned __int64 a2)
{
  char *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  unsigned __int64 v6; // rbx
  void *v7; // rax
  void *v8; // rbp
  size_t v9; // r8
  void *v10; // rbx

  v2 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v2 < a2 )
    std::_Xlen_string();
  v4 = (unsigned __int64)Src[3];
  v5 = &v2[a2];
  v6 = std::string::_Calculate_growth((__int64)&v2[a2], v4, 0x7FFFFFFFFFFFFFFFuLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6 + 1);
  Src[2] = v5;
  v8 = v7;
  Src[3] = (void *)v6;
  v9 = (size_t)(v2 + 1);
  if ( v4 < 0x10 )
  {
    memcpy_0(v7, Src, v9);
  }
  else
  {
    v10 = *Src;
    memcpy_0(v7, *Src, v9);
    std::_Deallocate<16,0>(v10, v4 + 1);
  }
  *Src = v8;
  return Src;
}
