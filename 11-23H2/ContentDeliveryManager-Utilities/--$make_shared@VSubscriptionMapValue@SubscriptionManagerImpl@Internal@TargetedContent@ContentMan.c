/*
 * XREFs of ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x180066930
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180069BA0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x1800683C8 (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 *     ?_Reset0@?$_Ptr_base@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@QEAAXPEAVSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEAV_Ref_count_base@2@@Z @ 0x18006B7E4 (-_Reset0@-$_Ptr_base@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@Cont.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006BF58 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue,unsigned short const *,_FILETIME>(
        _QWORD *a1,
        CreativeFramework::SubscribedContentStore **a2,
        __int64 *a3)
{
  unsigned __int16 *v6; // rax
  const unsigned __int16 *v7; // r14
  __int64 v8; // rbx
  CreativeFramework::SubscribedContentStore *v9; // rdi
  void **v10; // r8

  v6 = (unsigned __int16 *)operator new(0x38uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::`vftable';
    v8 = *a3;
    v9 = *a2;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v6 + 8,
      0LL);
    CreativeFramework::SubscribedContentStore::CreateSubscriptionHandle(v9, v7 + 8, v10);
    *((_QWORD *)v7 + 6) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::_Reset0(
    a1,
    v7 + 8,
    v7);
  return a1;
}
