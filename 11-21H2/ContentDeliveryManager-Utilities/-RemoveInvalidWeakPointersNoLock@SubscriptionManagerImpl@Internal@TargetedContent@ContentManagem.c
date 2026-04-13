/*
 * XREFs of ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800723F0
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180071740 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CAA4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006E540 (--1-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006E700 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800739C0 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180073F44 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180073F44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rsi
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  void **v14; // rdx
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rcx
  __int128 v19; // [rsp+28h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-29h]
  __int64 v21; // [rsp+40h] [rbp-21h] BYREF
  __int64 v22; // [rsp+48h] [rbp-19h] BYREF
  __int64 **v23; // [rsp+50h] [rbp-11h]
  _QWORD *v24; // [rsp+58h] [rbp-9h]
  _QWORD *v25; // [rsp+60h] [rbp-1h]
  void *v26[3]; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp+1Fh]

  v23 = (__int64 **)((char *)this + 88);
  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v25 = v1;
  v2 = (_QWORD *)*v1;
  while ( 1 )
  {
    v24 = v2;
    if ( v2 == v1 )
      break;
    v19 = 0LL;
    v3 = 0LL;
    v20 = 0LL;
    v4 = v2[6];
    v5 = *(__int64 **)(v4 + 8);
    v6 = *(__int64 **)(v4 + 16);
    v7 = 0LL;
    v8 = 0LL;
    while ( v5 != v6 )
    {
      v9 = *v5;
      v21 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v22 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v21, &v22) >= 0 && v22 )
      {
        if ( &v21 >= v7 || v8 > (unsigned __int64)&v21 )
        {
          if ( v7 == v3 )
          {
            std::vector<Microsoft::WRL::WeakRef>::_Reserve(&v19);
            v3 = v20;
            v7 = (__int64 *)*((_QWORD *)&v19 + 1);
            v8 = v19;
          }
          *v7 = v9;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        }
        else
        {
          v10 = (__int64)((__int64)&v21 - v8) >> 3;
          if ( v7 == v3 )
          {
            std::vector<Microsoft::WRL::WeakRef>::_Reserve(&v19);
            v3 = v20;
            v7 = (__int64 *)*((_QWORD *)&v19 + 1);
            v8 = v19;
          }
          v11 = *(_QWORD *)(v8 + 8 * v10);
          *v7 = v11;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        }
        *((_QWORD *)&v19 + 1) = ++v7;
      }
      v12 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ++v5;
    }
    v13 = v24;
    v14 = (void **)(v24 + 2);
    if ( (__int64)((__int64)v7 - v8) >> 3 )
    {
      v15 = *(_QWORD *)std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
                         v23,
                         v14)
          + 8LL;
      if ( (__int128 *)v15 != &v19 )
      {
        v16 = *(__int64 **)v15;
        if ( *(_QWORD *)v15 )
        {
          v17 = *(__int64 **)(v15 + 8);
          if ( v16 != v17 )
          {
            do
            {
              v18 = *v16;
              if ( *v16 )
              {
                *v16 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
              }
              ++v16;
            }
            while ( v16 != v17 );
            v16 = *(__int64 **)v15;
          }
          operator delete(v16);
        }
        *(_QWORD *)v15 = v8;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v15 + 16) = v3;
        v19 = 0LL;
        v20 = 0LL;
      }
    }
    else
    {
      v27 = 7LL;
      v26[2] = 0LL;
      LOWORD(v26[0]) = 0;
      std::wstring::assign(v26, v14, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v23,
        v26);
      if ( v27 >= 8 )
        operator delete(v26[0]);
    }
    std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>((__int64)&v19);
    v2 = (_QWORD *)*v13;
    v1 = v25;
  }
}
