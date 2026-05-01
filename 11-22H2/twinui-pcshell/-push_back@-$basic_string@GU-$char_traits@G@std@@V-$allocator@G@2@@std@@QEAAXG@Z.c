/*
 * XREFs of ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180090DA0
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180090B34 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180628224 (-TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_tr.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180694708 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@G@Z @ 0x1806AAA44 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1806AAA44.c)
 *     ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1806E0744 (--$_Construct@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@-$basic_string@GU-$char_trait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::push_back(_QWORD *a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  bool v4; // cf

  v2 = a1[2];
  if ( v2 >= a1[3] )
    return std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(a1);
  v4 = a1[3] < 8uLL;
  a1[2] = v2 + 1;
  if ( !v4 )
    a1 = (_QWORD *)*a1;
  result = 0LL;
  *((_WORD *)a1 + v2) = a2;
  *((_WORD *)a1 + v2 + 1) = 0;
  return result;
}
