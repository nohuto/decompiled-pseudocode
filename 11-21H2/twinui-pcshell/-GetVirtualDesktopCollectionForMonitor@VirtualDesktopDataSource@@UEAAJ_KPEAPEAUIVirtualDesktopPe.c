/*
 * XREFs of ?GetVirtualDesktopCollectionForMonitor@VirtualDesktopDataSource@@UEAAJ_KPEAPEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180039D90
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180039E10 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorCollection.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::GetVirtualDesktopCollectionForMonitor(
        VirtualDesktopDataSource *this,
        __int64 a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection **a3)
{
  __int64 v5; // rbx
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *v6; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  std::_Hash<std::_Umap_traits<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>>,0>>::find<void>(
    (char *)this + 264,
    &v11,
    &v10);
  v5 = v11;
  if ( v11 == *((_QWORD *)this + 34) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x80070057LL,
      v8);
    return 2147942487LL;
  }
  else
  {
    v6 = *(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection **)(v11 + 24);
    if ( v6 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *))(*(_QWORD *)v6 + 8LL))(v6);
      v6 = *(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection **)(v5 + 24);
    }
    *a3 = v6;
    return 0LL;
  }
}
