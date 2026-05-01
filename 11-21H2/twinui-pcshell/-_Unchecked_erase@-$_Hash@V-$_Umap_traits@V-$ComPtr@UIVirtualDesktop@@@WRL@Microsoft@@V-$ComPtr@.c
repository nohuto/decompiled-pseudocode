/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@@Z @ 0x18048FB78
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18048F610 (-VirtualDesktopDestroyed@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtual.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@QEBA_KAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18010F168 (--R-$hash@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@QEBA_KAEBV-$ComPtr@UIVirtualDesktop@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx

  v4 = std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator()((unsigned __int64)a1, a2 + 2);
  v5 = a1[3];
  v6 = 2 * (v4 & a1[6]);
  if ( *(_QWORD **)(v5 + 16 * (v4 & a1[6]) + 8) == a2 )
  {
    if ( *(_QWORD **)(v5 + 16 * (v4 & a1[6])) == a2 )
    {
      v7 = a1[1];
      *(_QWORD *)(v5 + 8 * v6) = v7;
    }
    else
    {
      v7 = a2[1];
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(_QWORD **)(v5 + 16 * (v4 & a1[6])) == a2 )
  {
    *(_QWORD *)(v5 + 16 * (v4 & a1[6])) = *a2;
  }
  v8 = *a2;
  --a1[2];
  *(_QWORD *)a2[1] = v8;
  *(_QWORD *)(v8 + 8) = a2[1];
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a2 + 3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2 + 2);
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v8;
}
