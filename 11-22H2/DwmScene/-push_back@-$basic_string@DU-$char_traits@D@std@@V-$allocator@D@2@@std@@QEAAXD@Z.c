/*
 * XREFs of ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18001E784
 * Callers:
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@D@Z @ 0x180050DF0 (--$getline@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@YAAEAV-$basic_istream@DU-$char_traits@D.c)
 *     ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EDFC (--$-5DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_istream@DU-$char_traits@D@std@@.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::string::push_back(void **a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( v2 >= (unsigned __int64)a1[3] )
    return std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(a1, a2, v2, a2);
  v3 = (unsigned __int64)a1[3] < 0x10;
  result = (void **)(v2 + 1);
  a1[2] = (void *)(v2 + 1);
  if ( !v3 )
    a1 = (void **)*a1;
  *((_BYTE *)a1 + v2) = a2;
  *((_BYTE *)a1 + v2 + 1) = 0;
  return result;
}
