/*
 * XREFs of ??0?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001D0BC
 * Callers:
 *     ?GetHandlerMap@Trace@@YAAEAV?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@XZ @ 0x18001D51C (-GetHandlerMap@Trace@@YAAEAV-$map@IV-$function@$$A6AXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@@Z @ 0x18001C788 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic_string@DU-.c)
 */

_QWORD *__fastcall std::map<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>::map<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>();
  return a1;
}
