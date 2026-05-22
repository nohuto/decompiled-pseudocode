/*
 * XREFs of ??$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@_N@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800C9288
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CA0E0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800913E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180092E68 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800BAC68 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 *     ??$?0AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800C90B4 (--$-0AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@-$_Tree_temp_node@V-$allocator@U-$_.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::_Emplace<unsigned long &,enum DockableDeviceCollection::DeviceEnumerationState>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 lower; // rax
  _DWORD *v6; // r10
  _DWORD *v7; // r11
  __int128 v8; // xmm6
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  void *v13; // [rsp+38h] [rbp-40h]
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
            a1,
            (__int64)&v14,
            a3);
  v8 = *(_OWORD *)lower;
  v15 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v15 + 25) || *v6 < *(_DWORD *)(v15 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>,void *>>>(
           &v12,
           (__int64)a1,
           *a1,
           v6,
           v7);
    v10 = v9[1];
    v9[1] = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 0x28uLL);
    v14 = v8;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      a1,
                      (__int64)&v14,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
