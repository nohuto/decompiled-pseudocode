/*
 * XREFs of NotifyInputSinkParented @ 0x1800038A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180003A14 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180003F34 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x180003FA4 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x18000413C (-SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000C0C0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C7D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputSiteTree@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K1@Z @ 0x180080798 (--$emplace_back@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@VNotific.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NotifyInputSinkParented(void *a1, __int64 a2)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *Instance; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 i; // rax
  _QWORD *Ptr; // rcx
  _QWORD *v9; // rdx
  NotificationData *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputSiteTree>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputSiteTree>::GetImpl'::`2'::impl,
    a2);
  Instance = (RTL_SRWLOCK *)InputSinkDataCache::GetInstance();
  v15 = 0LL;
  NtQueryCompositionInputSinkLuid(v2, &v15);
  v16 = v15;
  v5 = v15;
  v13 = v15;
  v15 = 0LL;
  NtQueryCompositionInputSinkLuid(a1, &v15);
  v16 = v15;
  AcquireSRWLockExclusive(Instance);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v16 + i) ^ (unsigned __int64)v6);
  Ptr = *(_QWORD **)(std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>(
                       &Instance[1],
                       v14,
                       &v16,
                       v6)
                   + 8);
  if ( !Ptr )
    Ptr = Instance[2].Ptr;
  if ( Ptr == Instance[2].Ptr )
  {
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                             &Instance[1],
                             v14,
                             &v16)
              + 24LL) = v5;
    LODWORD(v15) = 0;
    v9 = Instance[10].Ptr;
    if ( v9 == Instance[11].Ptr )
    {
      v10 = (NotificationData *)std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
                                  (int)Instance + 72,
                                  (_DWORD)v9,
                                  (unsigned int)&v15,
                                  (unsigned int)&v16,
                                  (__int64)&v13);
    }
    else
    {
      v12 = v16;
      *(_DWORD *)v9 = 0;
      v9[1] = v12;
      v9[2] = 0LL;
      v9[3] = v5;
      v10 = (NotificationData *)Instance[10].Ptr;
      Instance[10].Ptr = (char *)v10 + 96;
    }
    NotificationData::SetInputSinkHandle(v10, a1);
  }
  else if ( Ptr[3] != v5 )
  {
    Ptr[3] = v5;
    LODWORD(v15) = 1;
    std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
      &Instance[9],
      &v15,
      &v16,
      &v13);
  }
  ReleaseSRWLockExclusive(Instance);
  return 1LL;
}
