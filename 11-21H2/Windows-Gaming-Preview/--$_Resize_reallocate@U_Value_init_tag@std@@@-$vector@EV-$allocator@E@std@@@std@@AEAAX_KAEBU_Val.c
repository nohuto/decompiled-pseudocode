/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CBAC
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018984 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000E490 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800132EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 *     memmove_0 @ 0x18004BF8F (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rsi
  char *result; // rax

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  memset_0((char *)v8 + v5, 0, a2 - v5);
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(char **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = (char *)v8 + a2;
  result = (char *)v8 + v4;
  *(_QWORD *)(a1 + 16) = (char *)v8 + v4;
  return result;
}
