/*
 * XREFs of ??$_Uninitialized_move@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800F24FC
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@QEAV21@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800F1D44 (--$_Emplace_reallocate@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_s.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800F1CAC (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<std::string *>(_QWORD *a1, _QWORD *a2, _OWORD *a3)
{
  _OWORD *v3; // rbx
  char *v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = (char *)((char *)a3 - (char *)a1);
    v5 = a1 + 3;
    do
    {
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4) = 0LL;
      *v3 = *(_OWORD *)(v5 - 3);
      v3[1] = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 += 2;
      *v5 = 15LL;
      *((_BYTE *)v5 - 24) = 0;
      v5 += 4;
    }
    while ( v5 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<std::string>>((__int64)v3, (__int64)v3);
  return v3;
}
