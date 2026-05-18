/*
 * XREFs of ?GetHandlerMap@Trace@@YAAEAV?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@XZ @ 0x18001D51C
 * Callers:
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$map@IV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@Trace@@0@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001D0BC (--0-$map@IV-$function@$$A6AXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4L.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *Trace::GetHandlerMap()
{
  if ( dword_1801D3E90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D3E90);
    if ( dword_1801D3E90 == -1 )
    {
      std::map<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>::map<unsigned int,std::function<void (std::string const &,enum Trace::Level,std::string const &)>>(qword_1801D3E98);
      atexit(Trace::GetHandlerMap_::_2_::_dynamic_atexit_destructor_for__map__);
      Init_thread_footer(&dword_1801D3E90);
    }
  }
  return qword_1801D3E98;
}
