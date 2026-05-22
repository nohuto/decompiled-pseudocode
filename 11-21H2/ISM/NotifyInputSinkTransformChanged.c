/*
 * XREFs of NotifyInputSinkTransformChanged @ 0x180003A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?ScheduleHierarchyUpdate@InputSinkDataCache@@QEAAXXZ @ 0x180003B9C (-ScheduleHierarchyUpdate@InputSinkDataCache@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180003BF0 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x180003E80 (--$find@X@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180003F34 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C7D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4Rep.c)
 */

__int64 __fastcall NotifyInputSinkTransformChanged(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  struct InputSinkDataCache *Instance; // rax
  RTL_SRWLOCK *v5; // rdi
  void *v6; // rbx
  _QWORD *Ptr; // rcx
  _QWORD *v8; // rax
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-18h] BYREF
  void *v11; // [rsp+50h] [rbp+18h] BYREF
  PVOID v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputSiteTree>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputSiteTree>::GetImpl'::`2'::impl,
    a2);
  Instance = InputSinkDataCache::GetInstance();
  v11 = 0LL;
  v5 = (RTL_SRWLOCK *)Instance;
  NtQueryCompositionInputSinkLuid(a1, &v11);
  v12 = v11;
  v6 = v11;
  AcquireSRWLockExclusive(v5);
  v10 = v5;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
    &v5[1],
    &v12,
    &v11);
  if ( v12 != v5[2].Ptr )
  {
    Ptr = v5[10].Ptr;
    v8 = v5[9].Ptr;
    if ( v8 == Ptr )
      goto LABEL_3;
    while ( *(_DWORD *)v8 != 2 || (void *)v8[1] != v6 )
    {
      v8 += 12;
      if ( v8 == Ptr )
        goto LABEL_3;
    }
    if ( v8 == Ptr )
    {
LABEL_3:
      if ( Ptr == v5[11].Ptr )
      {
        std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
          &v5[9],
          v5[10].Ptr,
          &v11,
          v2);
      }
      else
      {
        *(_DWORD *)Ptr = 2;
        Ptr[1] = v6;
        Ptr[2] = 0LL;
        *((_OWORD *)Ptr + 2) = *v2;
        *((_OWORD *)Ptr + 3) = v2[1];
        *((_OWORD *)Ptr + 4) = v2[2];
        *((_OWORD *)Ptr + 5) = v2[3];
        v5[10].Ptr = (char *)v5[10].Ptr + 96;
      }
    }
    else
    {
      *((_OWORD *)v8 + 2) = *v2;
      *((_OWORD *)v8 + 3) = v2[1];
      *((_OWORD *)v8 + 4) = v2[2];
      *((_OWORD *)v8 + 5) = v2[3];
    }
    InputSinkDataCache::ScheduleHierarchyUpdate((InputSinkDataCache *)v5);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return 1LL;
}
