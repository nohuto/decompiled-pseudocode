/*
 * XREFs of ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x1800B98B8
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800B7988 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800C2900 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800B9E68 (-erase@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wi.c)
 */

void __fastcall MPCHeadUpdateListener::RemoveHeadEventOccurred(struct _RTL_CRITICAL_SECTION *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = this + 4;
  EnterCriticalSection(this + 4);
  if ( std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::erase(
         &this->LockCount,
         &v6) != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      148LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v4);
  if ( v2 )
    LeaveCriticalSection(v2);
}
