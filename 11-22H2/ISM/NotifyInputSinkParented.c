/*
 * XREFs of NotifyInputSinkParented @ 0x180009A90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180009850 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180009C0C (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009D90 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x18000A238 (-SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18000A2D0 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA?A_T$$QEAW4NotificationType@@AEA_K1@Z @ 0x1800AA290 (--$emplace_back@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@VNotific.c)
 */

__int64 __fastcall NotifyInputSinkParented(void *a1, __int64 a2)
{
  RTL_SRWLOCK *Instance; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 appended; // rax
  _QWORD *Ptr; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  NotificationData *v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+40h] BYREF

  Instance = (RTL_SRWLOCK *)InputSinkDataCache::GetInstance();
  v16 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    NtQueryCompositionInputSinkLuid(a2, &v16, 0LL);
    v5 = v16;
  }
  v6 = (unsigned int)v5 | ((unsigned __int64)HIDWORD(v16) << 32);
  v7 = 0;
  v16 = 0LL;
  if ( a1 )
  {
    NtQueryCompositionInputSinkLuid(a1, &v16, v5);
    v7 = v16;
  }
  v17 = __PAIR64__(HIDWORD(v16), v7);
  v18 = v6;
  AcquireSRWLockExclusive(Instance);
  appended = std::_Fnv1a_append_bytes(v8, (const unsigned __int8 *const)&v17, 8uLL);
  Ptr = *(_QWORD **)(std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>(
                       &Instance[1],
                       v15,
                       &v17,
                       appended)
                   + 8);
  if ( !Ptr )
    Ptr = Instance[2].Ptr;
  if ( Ptr == Instance[2].Ptr )
  {
    v11 = std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
            (__int64)&Instance[1],
            (__int64)v15,
            (unsigned __int8 *)&v17);
    LODWORD(v16) = 0;
    *(_QWORD *)(*(_QWORD *)v11 + 24LL) = v6;
    v12 = Instance[10].Ptr;
    if ( v12 == Instance[11].Ptr )
    {
      v13 = (NotificationData *)std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
                                  (int)Instance + 72,
                                  (_DWORD)v12,
                                  (unsigned int)&v16,
                                  (unsigned int)&v17,
                                  (__int64)&v18);
    }
    else
    {
      v12[1] = v17;
      *(_DWORD *)v12 = 0;
      v12[2] = 0LL;
      v12[3] = v6;
      v13 = (NotificationData *)Instance[10].Ptr;
      Instance[10].Ptr = (char *)v13 + 96;
    }
    NotificationData::SetInputSinkHandle(v13, a1);
  }
  else if ( Ptr[3] != v6 )
  {
    Ptr[3] = v6;
    LODWORD(v16) = 1;
    std::vector<NotificationData>::emplace_back<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
      &Instance[9],
      &v16,
      &v17,
      &v18);
  }
  ReleaseSRWLockExclusive(Instance);
  return 1LL;
}
