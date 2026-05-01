/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18056186C
 * Callers:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180560EF4 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18012EF48 (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::vector<Windows::UI::Color>>::_Clear_and_reserve_geometric(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  v2 = 0xAAAAAAAAAAAAAAALL;
  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v5 = v4 >> 1;
  if ( v4 <= 0xAAAAAAAAAAAAAAALL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(*a1, a1[1], v5);
    std::_Deallocate<16,0>((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<std::vector<Windows::UI::Color>>::_Buy_raw(a1, v2);
}
