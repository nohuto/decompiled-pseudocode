/*
 * XREFs of ?GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUIVirtualDesktop@@@Z @ 0x180178150
 * Callers:
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180178090 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x180541320 (-DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180 (-IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801653DC (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 *     ?GetMonitors@VirtualDesktopHelpers@@YA?AV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@XZ @ 0x18048AE5C (-GetMonitors@VirtualDesktopHelpers@@YA-AV-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180540D00 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$CCoSimpleArray.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180540F2C (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CVirtualDesktopCollection::GetDesktopCollectionForDesktop(
        CVirtualDesktopManager *a1,
        struct IUnknown *a2)
{
  int v4; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  bool v9; // bl
  __int64 v10; // rbx
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  struct IUnknown *v16; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  if ( !CVirtualDesktopManager::IsVirtualDesktopPerMonitor(a1) || !a2 )
    return (_QWORD *)((char *)a1 + 48);
  VirtualDesktopHelpers::GetMonitors(&v14);
  v6 = v14;
  if ( v14 == v15 )
  {
LABEL_13:
    std::vector<HMONITOR__ *>::_Tidy(&v14);
    return (_QWORD *)((char *)a1 + 48);
  }
  while ( 1 )
  {
    v9 = 0;
    if ( *(_QWORD *)std::_Hash<std::_Umap_traits<HMONITOR__ *,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>,0>>::find<void>(
                      (char *)a1 + 80,
                      v11,
                      v6) != *((_QWORD *)a1 + 11) )
    {
      v7 = *(_QWORD *)std::_Hash<std::_Umap_traits<HMONITOR__ *,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>>,0>>::_Try_emplace<HMONITOR__ * const &,>(
                        (char *)a1 + 80,
                        v13,
                        v6);
      v16 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      v4 |= 1u;
      if ( (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                           (_QWORD *)(v7 + 24),
                           v8,
                           &v16,
                           &v12) != -2147319765 )
        v9 = 1;
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    }
    if ( v9 )
      break;
    v6 += 8LL;
    if ( v6 == v15 )
      goto LABEL_13;
  }
  v10 = *(_QWORD *)std::_Hash<std::_Umap_traits<HMONITOR__ *,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,CCoSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,ComPtrCompareHelper>>>,0>>::_Try_emplace<HMONITOR__ * const &,>(
                     (char *)a1 + 80,
                     v13,
                     v6);
  std::vector<HMONITOR__ *>::_Tidy(&v14);
  return (_QWORD *)(v10 + 24);
}
