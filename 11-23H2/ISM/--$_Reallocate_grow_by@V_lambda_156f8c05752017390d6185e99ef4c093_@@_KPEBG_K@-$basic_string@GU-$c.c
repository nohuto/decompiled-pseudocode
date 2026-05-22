/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x1800AA6FC
 * Callers:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800AD9CC (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180047FF0 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180099DB4 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  void *v6; // rbx
  unsigned __int64 v8; // r15
  char *v9; // rbp
  unsigned __int64 v10; // r14
  char *v11; // rsi
  size_t v12; // rbp
  size_t v13; // r8
  char *v14; // r14
  void *v15; // rbx

  v6 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v6 < a2 )
    std::_Xlen_string();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v6 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)v6 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  if ( v10 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v10 + 1));
  Src[2] = v9;
  v12 = 2LL * (_QWORD)v6 + 2;
  Src[3] = (void *)v10;
  v13 = 2 * a6;
  v14 = &v11[2 * a6];
  if ( v8 < 8 )
  {
    memcpy_0(v11, L",", v13);
    memcpy_0(v14, Src, 2LL * (_QWORD)v6 + 2);
  }
  else
  {
    v15 = *Src;
    memcpy_0(v11, L",", v13);
    memcpy_0(v14, v15, v12);
    std::_Deallocate<16,0>(v15, 2 * v8 + 2);
  }
  *Src = v11;
  return Src;
}
