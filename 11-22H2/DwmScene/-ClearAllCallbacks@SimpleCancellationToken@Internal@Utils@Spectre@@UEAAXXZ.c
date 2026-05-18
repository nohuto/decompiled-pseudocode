/*
 * XREFs of ?ClearAllCallbacks@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ @ 0x1800E01C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@1@@Z @ 0x18001C954 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic_string@DU-$.c)
 */

void __fastcall Spectre::Utils::Internal::SimpleCancellationToken::ClearAllCallbacks(
        Spectre::Utils::Internal::SimpleCancellationToken *this)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi

  v1 = (Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8);
  v2 = (_QWORD *)((char *)this + 96);
  std::_Mutex_base::lock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
  v3 = (_QWORD *)*v2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
    (__int64)v2,
    (__int64)v2,
    *(__int64 **)(*v2 + 8LL));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v2[1] = 0LL;
  _Mtx_unlock(v1);
}
