/*
 * XREFs of ??$_Find_last@PEAUHMONITOR__@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBQEAUHMONITOR__@@_K@Z @ 0x18014BE18
 * Callers:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180039E10 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorCollection.c)
 *     ??$emplace@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUHMONITOR__@@$$QEAV?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18014BCA8 (--$emplace@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@Composabl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>>,0>>::_Find_last<HMONITOR__ *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v7[2] )
      {
        *a2 = *v7;
        a2[1] = v7;
        return a2;
      }
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
        break;
      v7 = (_QWORD *)v7[1];
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
