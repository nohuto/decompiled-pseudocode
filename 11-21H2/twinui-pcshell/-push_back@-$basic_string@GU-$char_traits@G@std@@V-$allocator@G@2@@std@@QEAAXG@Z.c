/*
 * XREFs of ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180587C48
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x1805BBF78 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 *     ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1805DCAFC (--$_Construct@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@-$basic_string@GU-$char_trait.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::wstring::push_back(void **a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( v2 >= (unsigned __int64)a1[3] )
    return std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(a1, a2, v2, a2);
  v3 = (unsigned __int64)a1[3] < 8;
  a1[2] = (void *)(v2 + 1);
  if ( !v3 )
    a1 = (void **)*a1;
  result = 0LL;
  *((_WORD *)a1 + v2) = a2;
  *((_WORD *)a1 + v2 + 1) = 0;
  return result;
}
