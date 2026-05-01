/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180540F2C
 * Callers:
 *     ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0 (-GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18010FFB0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUIVirtualDesktop@@@Z @ 0x180178150 (-GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?OnMonitorAttached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z @ 0x1805418A0 (-OnMonitorAttached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnMonitorDetached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z @ 0x180541920 (-OnMonitorDetached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ @ 0x180546D30 (-OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ.c)
 *     ?SetCurrentDesktopForMonitorHelper@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180547EC0 (-SetCurrentDesktopForMonitorHelper@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAUHMONITOR__@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@@1@AEBQEAUHMONITOR__@@_K@Z @ 0x180540BB0 (--$_Find_last@PEAUHMONITOR__@@@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$CCoSimpleArray@V-$ComP.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  v7 = std::_Hash<std::_Umap_traits<HMONITOR__ *,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>>,0>>::_Find_last<HMONITOR__ *>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
