/*
 * XREFs of ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800E38A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800A92A8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800D3DAC (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1800E2F7C (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ?DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z @ 0x1800E3574 (-DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E5670 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18019D2D0 (-OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockableDeviceCollection::OnDeviceRemoval(DockableDeviceCollection *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v7; // rsi
  const char *v8; // r9
  __int64 v9; // rdi
  char v10; // al
  int Device; // eax
  unsigned int v12; // ebx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v14; // rax
  DeviceDockServer *v15; // rbx
  __int64 *v16; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF
  struct RIMDevice *v21; // [rsp+80h] [rbp+18h] BYREF
  DeviceDockServer *v22; // [rsp+88h] [rbp+20h] BYREF

  v20 = a2;
  InputTraceLogging::DeviceDock::DockableDeviceDetached(a2);
  v4 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = (__int64 *)((char *)this + 2768);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 346,
    (__int64)v17,
    &v20);
  v9 = v18;
  if ( *(_BYTE *)(v18 + 25) || a2 < *(_DWORD *)(v18 + 28) )
  {
    v9 = *v7;
  }
  else if ( v18 != *v7 )
  {
    v10 = 0;
    goto LABEL_9;
  }
  v10 = 1;
LABEL_9:
  if ( v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x79,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      v8);
  if ( *(_DWORD *)(v9 + 32) == 1 )
  {
    v21 = 0LL;
    Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v21, 0LL);
    v12 = Device;
    if ( Device < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)(unsigned int)Device);
      return v12;
    }
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
      &v22,
      v14);
    v15 = v22;
    DeviceDockServer::OnDockableDeviceRemoval(v22, *((struct DockableDeviceInfo **)v21 + 4));
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v15 + 2) + 8LL))((__int64)v15 + 16);
  }
  v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
          (_QWORD *)this + 346,
          (__int64 *)v9);
  std::_Deallocate<16,0>(v16, 0x28uLL);
  return 0LL;
}
