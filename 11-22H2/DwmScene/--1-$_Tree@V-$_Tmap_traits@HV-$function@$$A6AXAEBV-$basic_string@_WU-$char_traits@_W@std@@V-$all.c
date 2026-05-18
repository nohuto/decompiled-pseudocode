/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DE168
 * Callers:
 *     ??1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DE264 (--1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ.c)
 *     ??1?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800DFECC (--1-$map@HV-$function@$$A6AXXZ@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBHV-$function@$$A6AXXZ@s.c)
 *     ??1SimpleCancellationToken@Internal@Utils@Spectre@@UEAA@XZ @ 0x1800DFEEC (--1SimpleCancellationToken@Internal@Utils@Spectre@@UEAA@XZ.c)
 *     ?Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ @ 0x1800E0080 (-Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@1@@Z @ 0x18001C954 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AXAEBV-$basic_string@DU-$.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::~_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x68uLL);
}
