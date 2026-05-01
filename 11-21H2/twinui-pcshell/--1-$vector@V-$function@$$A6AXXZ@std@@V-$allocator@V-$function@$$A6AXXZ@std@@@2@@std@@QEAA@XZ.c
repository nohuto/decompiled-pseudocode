/*
 * XREFs of ??1?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x18034CF78
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$1 @ 0x180218A70 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_180218A70.c)
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$1 @ 0x18034C089 (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_18034C089.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::function<void (void)>>::~vector<std::function<void (void)>>(char **a1, __int64 a2)
{
  char *v2; // rbx
  char *v4; // rsi

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v2 != v4 )
    {
      do
      {
        std::_Func_class<void,>::_Tidy((__int64)v2, a2);
        v2 += 64;
      }
      while ( v2 != v4 );
      v2 = *a1;
    }
    std::_Deallocate<16,0>(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFC0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
