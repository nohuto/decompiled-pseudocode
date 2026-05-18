/*
 * XREFs of ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@@Z @ 0x18001C924
 * Callers:
 *     ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001D288 (--1-$_Tree_head_scoped_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic.c)
 *     ??1?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001D2DC (--1-$map@IV-$function@$$A6AXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4L.c)
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 *     _Trace::GetHandlerMap_::_2_::_dynamic_atexit_destructor_for__map__ @ 0x1800F24E0 (_Trace--GetHandlerMap_--_2_--_dynamic_atexit_destructor_for__map__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@1@@Z @ 0x18001C954 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic_string@DU-$.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
        void **a1,
        __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x68uLL);
}
