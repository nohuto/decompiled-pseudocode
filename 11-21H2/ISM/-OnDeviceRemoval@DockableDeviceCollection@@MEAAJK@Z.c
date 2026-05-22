/*
 * XREFs of ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800CA220
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180092BB8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800BAC68 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1800C98EC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ?DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z @ 0x1800C9EDC (-DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800CC060 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18017E114 (-OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockableDeviceCollection::OnDeviceRemoval(DockableDeviceCollection *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v7; // rsi
  const char *v8; // r9
  __int64 v9; // rdi
  int Device; // eax
  unsigned int v11; // ebx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v13; // rax
  DeviceDockServer *v14; // rbx
  __int64 *v15; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  struct RIMDevice *v20; // [rsp+80h] [rbp+18h] BYREF
  DeviceDockServer *v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = a2;
  InputTraceLogging::DeviceDock::DockableDeviceDetached(a2);
  v4 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = (__int64 *)((char *)this + 2768);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 346,
    (__int64)v16,
    &v19);
  v9 = v17;
  if ( *(_BYTE *)(v17 + 25) || a2 < *(_DWORD *)(v17 + 28) )
    v9 = *v7;
  if ( v9 == *v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      121LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      v8);
  if ( *(_DWORD *)(v9 + 32) == 1 )
  {
    v20 = 0LL;
    Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v20, 0LL);
    v11 = Device;
    if ( Device < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)(unsigned int)Device);
      return v11;
    }
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
    wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
      &v21,
      v13);
    v14 = v21;
    DeviceDockServer::OnDockableDeviceRemoval(v21, *((struct DockableDeviceInfo **)v20 + 4));
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v14 + 2) + 8LL))((__int64)v14 + 16);
  }
  v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
          (_QWORD *)this + 346,
          v9);
  std::_Deallocate<16,0>(v15, 0x28uLL);
  return 0LL;
}
