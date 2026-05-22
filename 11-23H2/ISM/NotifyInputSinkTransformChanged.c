/*
 * XREFs of NotifyInputSinkTransformChanged @ 0x180009800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009920 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800099C0 (--$find@X@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@.c)
 *     ?ScheduleHierarchyUpdate@InputSinkDataCache@@QEAAXXZ @ 0x180009A90 (-ScheduleHierarchyUpdate@InputSinkDataCache@@QEAAXXZ.c)
 *     ??$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA?A_TAEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180009AE4 (--$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VNotifica.c)
 */

__int64 __fastcall NotifyInputSinkTransformChanged(__int64 a1, _OWORD *a2)
{
  struct InputSinkDataCache *Instance; // rax
  unsigned int v5; // r8d
  RTL_SRWLOCK *v6; // rdi
  unsigned __int64 v7; // rbx
  _QWORD *Ptr; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  Instance = InputSinkDataCache::GetInstance();
  v5 = 0;
  v6 = (RTL_SRWLOCK *)Instance;
  v11 = 0LL;
  if ( a1 )
  {
    NtQueryCompositionInputSinkLuid(a1, &v11, 0LL);
    v5 = v11;
  }
  v12 = __PAIR64__(HIDWORD(v11), v5);
  v7 = __PAIR64__(HIDWORD(v11), v5);
  v11 = __PAIR64__(HIDWORD(v11), v5);
  AcquireSRWLockExclusive(v6);
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
    &v6[1],
    &v12,
    &v11);
  if ( (PVOID)v12 != v6[2].Ptr )
  {
    Ptr = v6[9].Ptr;
    v9 = v6[10].Ptr;
    if ( Ptr == v9 )
      goto LABEL_12;
    do
    {
      if ( *(_DWORD *)Ptr == 2 && Ptr[1] == v7 )
        break;
      Ptr += 12;
    }
    while ( Ptr != v9 );
    if ( Ptr == v9 )
    {
LABEL_12:
      std::vector<NotificationData>::emplace_back<unsigned __int64 &,tagINPUT_TRANSFORM const &>(&v6[9], &v11, a2);
    }
    else
    {
      *((_OWORD *)Ptr + 2) = *a2;
      *((_OWORD *)Ptr + 3) = a2[1];
      *((_OWORD *)Ptr + 4) = a2[2];
      *((_OWORD *)Ptr + 5) = a2[3];
    }
    InputSinkDataCache::ScheduleHierarchyUpdate((InputSinkDataCache *)v6);
  }
  ReleaseSRWLockExclusive(v6);
  return 1LL;
}
