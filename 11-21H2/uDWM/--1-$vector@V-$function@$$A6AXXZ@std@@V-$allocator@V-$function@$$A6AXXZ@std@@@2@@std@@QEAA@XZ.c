/*
 * XREFs of ??1?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800F35F0
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$1 @ 0x180065A3B (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_180065A3B.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::vector<std::function<void (void)>>::~vector<std::function<void (void)>>(char **a1, __int64 a2)
{
  char *v3; // rbx
  char *v4; // rsi
  __int64 result; // rax

  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v3 != v4 )
    {
      do
      {
        std::_Func_class<void,>::_Tidy((__int64)v3, a2);
        v3 += 64;
      }
      while ( v3 != v4 );
      v3 = *a1;
    }
    result = std::_Deallocate<16,0>(v3, (a1[2] - v3) & 0xFFFFFFFFFFFFFFC0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
