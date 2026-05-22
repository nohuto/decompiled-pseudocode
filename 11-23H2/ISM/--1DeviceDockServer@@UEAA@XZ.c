/*
 * XREFs of ??1DeviceDockServer@@UEAA@XZ @ 0x18019BDCC
 * Callers:
 *     ??_GDeviceDockServer@@UEAAPEAXI@Z @ 0x18019BFF0 (--_GDeviceDockServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18014B5C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18019B590 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$com_ptr_t@VBamoDockableDevicePrincipal.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@1@@Z @ 0x18019B604 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x18019B660 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@.c)
 */

void __fastcall DeviceDockServer::~DeviceDockServer(DeviceDockServer *this)
{
  void **v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  __int64 *v6; // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  v2 = (void **)((char *)this + 136);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *>>>(
    (__int64)this + 136,
    (__int64)this + 136,
    *(_QWORD *)(*((_QWORD *)this + 17) + 8LL));
  std::_Deallocate<16,0>(*v2, 0x48uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>(
    (__int64)this + 120,
    (__int64)this + 120,
    *(_QWORD *)(*((_QWORD *)this + 15) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 15), 0x90uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 104,
    (__int64)this + 104,
    *(_QWORD *)(*((_QWORD *)this + 13) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 13), 0x30uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 88,
    (__int64)this + 88,
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x30uLL);
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 10);
  v6 = (__int64 *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
      v6,
      *((__int64 **)this + 8));
    std::_Deallocate<16,0>(
      *((void **)this + 7),
      (*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, v3, v4, v5);
}
