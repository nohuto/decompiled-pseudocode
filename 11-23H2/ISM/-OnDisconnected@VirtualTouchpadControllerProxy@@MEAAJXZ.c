/*
 * XREFs of ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801449A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18014404C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x1801446B0 (-GetIsActive@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180145924 (-ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x180146EA4 (-erase@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V-$_Uhash_compare@P.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801BC044 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801BC278 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnDisconnected(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadContextProvider *Instance; // rax
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VirtualTouchpadControllerProxy *v8; // [rsp+30h] [rbp+8h] BYREF

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
  EnterCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
  v8 = this;
  if ( std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::erase(
         v6,
         &v8) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      162LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontr"
               "oller\\server\\virtualtouchpadcontrollerproxy.cpp",
      (const char *)0x8000FFFFLL);
  }
  LeaveCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
  return 0LL;
}
