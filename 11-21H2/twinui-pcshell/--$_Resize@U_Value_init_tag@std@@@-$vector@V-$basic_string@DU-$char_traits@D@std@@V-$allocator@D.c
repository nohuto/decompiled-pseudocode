/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349400
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180349D88 (--$load@VJSONInputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180348A64 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349570 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

void __fastcall std::vector<std::string>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx

  v3 = a1[1];
  v5 = (v3 - *a1) >> 5;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      if ( a2 <= (__int64)(a1[2] - *a1) >> 5 )
      {
        v7 = a2 - v5;
        if ( a2 != v5 )
        {
          do
          {
            *(_QWORD *)(v3 + 16) = 0LL;
            *(_QWORD *)(v3 + 24) = 15LL;
            *(_BYTE *)v3 = 0;
            v3 += 32LL;
            --v7;
          }
          while ( v7 );
        }
        std::_Destroy_range<std::allocator<std::string>>(v3, v3, a3);
        a1[1] = v3;
      }
      else
      {
        std::vector<std::string>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    v6 = *a1 + 32 * a2;
    std::_Destroy_range<std::allocator<std::string>>(v6, v3, a3);
    a1[1] = v6;
  }
}
