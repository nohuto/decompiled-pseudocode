/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180489B48
 * Callers:
 *     ??1?$list@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18048A034 (--1-$list@U-$pair@QEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@Co.c)
 *     ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x18048A060 (--1VirtualDesktopDataSource@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAAXXZ @ 0x18048BF88 (-clear@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorCollection@Mu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v2 + 3);
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
