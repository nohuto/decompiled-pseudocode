/*
 * XREFs of ??$_Uninitialized_move@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1804148F0
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804146DC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180414104 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 */

__int64 __fastcall std::_Uninitialized_move<std::string *>(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    a3 -= (unsigned __int64)a1;
    v4 = a1 + 3;
    do
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)((char *)v4 + a3 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + a3) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v4 - 3);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      v3 += 32LL;
      *v4 = 15LL;
      *((_BYTE *)v4 - 24) = 0;
      v4 += 4;
    }
    while ( v4 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<std::string>>(v3, v3, a3);
  return v3;
}
