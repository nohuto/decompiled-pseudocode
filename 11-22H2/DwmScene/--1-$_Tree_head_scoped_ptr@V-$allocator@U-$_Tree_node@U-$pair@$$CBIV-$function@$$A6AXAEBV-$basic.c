/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001D288
 * Callers:
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 *     _Trace::NotifyHandlers_::_1_::dtor$5 @ 0x1800E484B (_Trace--NotifyHandlers_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@@Z @ 0x18001C924 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic_string@DU-$.c)
 */

void __fastcall std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
      *(void ***)(a1 + 8),
      *(_QWORD *)a1);
}
