/*
 * XREFs of ?lower_bound@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@2@AEBQEBG@Z @ 0x1800A3F38
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800A39B8 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ??Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z @ 0x1800A385C (--Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::lower_bound(
        __int64 a1,
        _QWORD *a2,
        const WCHAR **a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rbx
  _QWORD *result; // rax

  v3 = *(__int64 **)a1;
  v6 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( CreativeFramework::Triggers::less::operator()(a1, (const WCHAR *)v6[4], *a3) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  result = a2;
  *a2 = v3;
  return result;
}
