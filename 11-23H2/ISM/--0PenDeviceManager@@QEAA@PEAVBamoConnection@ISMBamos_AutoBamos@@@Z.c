/*
 * XREFs of ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003BFE8
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E9C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E4A30 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037EEC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??0?$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18003A518 (--0-$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBam.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003C734 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?SetDevices@BamoPenDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800531D0 (-SetDevices@BamoPenDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBam.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
PenDeviceManager *__fastcall PenDeviceManager::PenDeviceManager(
        PenDeviceManager *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoPenDeviceManagerPrincipal *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *v7; // rax
  _QWORD *v9; // [rsp+50h] [rbp+18h]

  *(_QWORD *)this = &BamoPenDeviceManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (PenDeviceManager *)((char *)this + 8);
  *((_QWORD *)this + 1) = &BamoPenDeviceManagerPrincipal::`vftable'{for `IPenDeviceManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenDeviceManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoPenDeviceManagerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &PenDeviceManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v4 = &BamoPenDeviceManagerPrincipal::`vftable'{for `IPenDeviceManagerPrincipal'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v5 = operator new(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 8) = v5;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 11) = v6;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 17) = 8LL;
  *((_DWORD *)this + 20) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
    (char *)this + 104,
    16LL,
    *((_QWORD *)this + 11));
  v9 = operator new(0x50uLL);
  v7 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *)Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::ListPrincipal<BamoPenDevicePrincipal>(
                                                                                                   v9,
                                                                                                   a2);
  BamoPenDeviceManagerPrincipal::SetDevices(v4, v7);
  return this;
}
