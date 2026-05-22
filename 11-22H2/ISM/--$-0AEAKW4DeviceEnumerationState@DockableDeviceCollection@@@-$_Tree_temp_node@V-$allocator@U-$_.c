/*
 * XREFs of ??$?0AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800F19D0
 * Callers:
 *     ??$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@_N@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800F1BA8 (--$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@-$_Tree@V-$_Tmap_traits@KW4D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5)
{
  size_t size_of; // rax
  _DWORD *v9; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v9;
  v9[7] = *a4;
  v9[8] = *a5;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
