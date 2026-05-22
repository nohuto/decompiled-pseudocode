/*
 * XREFs of ??1CUIHierarchy@@AEAA@XZ @ 0x180055434
 * Callers:
 *     _CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x18006FEF0 (_CUIHierarchy--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18009B170 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x18009D868 (-StopWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

void __fastcall CUIHierarchy::~CUIHierarchy(void **this)
{
  __int64 *v2; // rdi
  void *v3; // rcx

  v2 = (__int64 *)(this + 9);
  if ( this[9] )
  {
    CUIHierarchy::StopWindowWatcher((CUIHierarchy *)this);
    if ( *v2 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
  }
  v3 = this[2];
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v3, this[3]);
    std::_Deallocate<16,0>(this[2], ((_BYTE *)this[4] - (_BYTE *)this[2]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
}
