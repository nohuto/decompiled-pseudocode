/*
 * XREFs of ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180152C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18015233C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x1801529A0 (-GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180153C14 (-ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x180155184 (-erase@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V-$_Uhash_compare@P.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801C98E0 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801C9B04 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnDisconnected(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadContextProvider *Instance; // rax
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VirtualTouchpadControllerProxy *v8; // [rsp+30h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::VirtualTouchpad::ServerDisconnected(this);
  if ( *((_BYTE *)this + 228) )
  {
    if ( BamoVirtualTouchpadControllerProxy::GetIsActive((VirtualTouchpadControllerProxy *)((char *)this + 8)) )
    {
      Instance = VirtualTouchpadContextProvider::GetInstance();
      v3 = VirtualTouchpadContextProvider::OnTouchpadRemoved(Instance, (unsigned __int64)this);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadc"
                   "ontroller\\server\\virtualtouchpadcontrollerproxy.cpp",
          (const char *)(unsigned int)v3);
        return v4;
      }
    }
    *((_BYTE *)this + 228) = 0;
    VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  }
  wil::EnterCriticalSection(&lpCriticalSection, &VirtualTouchpadControllerProxy::s_lock);
  v8 = this;
  if ( std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::erase(
         v6,
         &v8) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrolle"
           "r\\server\\virtualtouchpadcontrollerproxy.cpp",
      (const char *)0x8000FFFFLL);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
