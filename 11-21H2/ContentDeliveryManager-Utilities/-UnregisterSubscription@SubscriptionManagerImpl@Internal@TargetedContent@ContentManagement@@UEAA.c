/*
 * XREFs of ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800730C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     std::_Remove_if_Microsoft::WRL::WeakRef____lambda_7b359f7de2cb9222ee62c5860a33e596___ @ 0x18006D5BC (std--_Remove_if_Microsoft--WRL--WeakRef____lambda_7b359f7de2cb9222ee62c5860a33e596___.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006E700 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180073F44 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180073F44.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180074078 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        HSTRING a2,
        struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *a3)
{
  RTL_SRWLOCK *v6; // r14
  char *StringRawBuffer; // rax
  char v8; // r15
  unsigned __int64 v9; // r8
  char *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // rsi
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v14; // rcx
  int v15; // eax
  __int64 *i; // rbx
  const char *v17; // r9
  __int64 result; // rax
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v19; // [rsp+20h] [rbp-68h] BYREF
  RTL_SRWLOCK *v20; // [rsp+28h] [rbp-60h] BYREF
  void *v21[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v20 = v6;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
  v23 = 7LL;
  v8 = 0;
  v22 = 0LL;
  LOWORD(v21[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&StringRawBuffer[2 * v9] );
  }
  else
  {
    v9 = 0LL;
  }
  try
  {
    std::wstring::assign((unsigned __int64 *)v21, StringRawBuffer, v9);
    v10 = (char *)this + 88;
    v11 = std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
            (__int64 **)this + 11,
            v21);
    v12 = *(_QWORD *)v11;
    v13 = *(__int64 **)(*(_QWORD *)v11 + 16LL);
    for ( i = *(__int64 **)(*(_QWORD *)v11 + 8LL); i != v13; ++i )
    {
      v14 = 0LL;
      v19 = 0LL;
      if ( *i )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(*(_QWORD *)*i + 24LL))(
                *i,
                &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                &v19);
        v14 = v19;
      }
      else
      {
        v15 = 0;
      }
      if ( v15 >= 0 && a3 == v14 )
        v8 = 1;
      if ( v14 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v8 )
        break;
      v8 = 0;
    }
    if ( i != v13 )
      i = std::_Remove_if_Microsoft::WRL::WeakRef____lambda_7b359f7de2cb9222ee62c5860a33e596___(i, v13, (__int64)a3);
    std::vector<Microsoft::WRL::WeakRef>::erase(v12 + 8, &v20, i, v13);
    if ( *(_QWORD *)(v12 + 16) - *(_QWORD *)(v12 + 8) < 8uLL )
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v10,
        v21);
    if ( v23 >= 8 )
      operator delete(v21[0]);
    v23 = 7LL;
    v22 = 0LL;
    LOWORD(v21[0]) = 0;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x99,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v17);
  }
  return result;
}
