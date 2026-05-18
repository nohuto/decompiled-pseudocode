/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x18001ECA0
 * Callers:
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x18001F980 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x18001187C (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        size_t a4)
{
  size_t v4; // r14
  unsigned __int64 v7; // r13
  size_t v8; // rdi
  unsigned __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r15
  char *v12; // rdi
  void *v13; // rbx

  v4 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = v4 + a2;
  v9 = std::string::_Calculate_growth(v4 + a2, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9 + 1);
  Src[2] = (void *)v8;
  v11 = v10;
  Src[3] = (void *)v9;
  v12 = &v10[v4];
  if ( v7 < 0x10 )
  {
    memcpy_0(v10, Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy_0(v10, *Src, v4);
    memset_0(v12, 0, a4);
    v12[a4] = 0;
    std::_Deallocate<16,0>(v13, v7 + 1);
  }
  *Src = v11;
  return Src;
}
