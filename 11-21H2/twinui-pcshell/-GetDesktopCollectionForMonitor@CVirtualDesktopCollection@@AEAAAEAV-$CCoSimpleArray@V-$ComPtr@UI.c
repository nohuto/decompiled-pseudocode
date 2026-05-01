/*
 * XREFs of ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0
 * Callers:
 *     ?GetAsArray@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@AEBU_GUID@@PEAPEAX@Z @ 0x18009EC80 (-GetAsArray@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEA_K@Z @ 0x18017D080 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEA_K@Z.c)
 *     ?GetCount@CVirtualDesktopCollection@@UEAA_KPEAUHMONITOR__@@@Z @ 0x1805415B0 (-GetCount@CVirtualDesktopCollection@@UEAA_KPEAUHMONITOR__@@@Z.c)
 *     ?GetDefaultDesktopForMonitor@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805415D0 (-GetDefaultDesktopForMonitor@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesk.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@_K@Z @ 0x180541640 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@_K@Z.c)
 * Callees:
 *     ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180 (-IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180540D00 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$CCoSimpleArray.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180540F2C (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode.c)
 */

__int64 __fastcall CVirtualDesktopCollection::GetDesktopCollectionForMonitor(CVirtualDesktopManager *a1, __int64 a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  char v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  if ( CVirtualDesktopManager::IsVirtualDesktopPerMonitor(a1)
    && v5
    && *(_QWORD *)std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::find<void>(
                    (char *)a1 + 80,
                    &v6,
                    &v5) != *((_QWORD *)a1 + 11) )
  {
    return *(_QWORD *)std::_Hash<std::_Umap_traits<HMONITOR__ *,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>>,0>>::_Try_emplace<HMONITOR__ * const &,>(
                        (char *)a1 + 80,
                        v4,
                        &v5)
         + 24LL;
  }
  else
  {
    return (__int64)a1 + 48;
  }
}
