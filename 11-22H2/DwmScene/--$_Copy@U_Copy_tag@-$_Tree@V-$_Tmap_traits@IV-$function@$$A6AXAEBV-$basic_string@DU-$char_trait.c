/*
 * XREFs of ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x18001C7B4
 * Callers:
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 * Callees:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18001C83C (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AXAEBV-$basic_string@DU-$char.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@2@PEAU32@@Z @ 0x18001DD04 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>,0>>::_Copy_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  _QWORD *v6; // r8
  __int64 v7; // rax
  char v8; // r9
  __int64 *v9; // r8
  __int64 result; // rax
  __int64 i; // rcx

  LOBYTE(a4) = a3;
  *(_QWORD *)(*a1 + 8LL) = std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>>,0>>::_Copy_tag>(
                             a1,
                             *(_QWORD *)(*a2 + 8LL),
                             *a1,
                             a4);
  v6 = (_QWORD *)*a1;
  a1[1] = a2[1];
  if ( *(_BYTE *)(v6[1] + 25LL) )
  {
    *v6 = v6;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>>>::_Min();
    *v9 = v7;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v8; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
