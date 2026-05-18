/*
 * XREFs of ??1?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001D2DC
 * Callers:
 *     _Trace::NotifyHandlers_::_1_::dtor$0 @ 0x1800E4803 (_Trace--NotifyHandlers_--_1_--dtor$0.c)
 *     _Trace::NotifyHandlers_::_1_::dtor$2 @ 0x1800E4827 (_Trace--NotifyHandlers_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::map<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>::~map<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
    a1,
    (__int64)a1);
}
