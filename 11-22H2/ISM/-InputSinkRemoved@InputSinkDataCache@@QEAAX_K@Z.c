/*
 * XREFs of ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x1800AA484
 * Callers:
 *     NotifyInputSinkRemoved @ 0x1800AA880 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x180009E30 (--$find@X@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x1800AA04C (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x1800AA6F4 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@QEAU32@@Z @ 0x1800AA7C8 (-_Unchecked_erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@AEAAP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSinkDataCache::InputSinkRemoved(PSRWLOCK SRWLock, __int64 a2)
{
  const unsigned __int8 *v4; // rbx
  __int64 *v5; // rcx
  _QWORD *Ptr; // rdx
  unsigned __int64 appended; // rax
  const unsigned __int8 *v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  PSRWLOCK v11; // [rsp+78h] [rbp+20h]

  v9 = a2;
  AcquireSRWLockExclusive(SRWLock);
  v11 = SRWLock;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
    &SRWLock[1].Ptr,
    &v8,
    (unsigned __int8 *)&v9);
  v4 = v8;
  if ( v8 != SRWLock[2].Ptr )
  {
    v5 = (__int64 *)&SRWLock[9];
    LODWORD(v8) = 0;
    v10 = 3;
    Ptr = SRWLock[10].Ptr;
    if ( Ptr == SRWLock[11].Ptr )
    {
      std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,int>(
        v5,
        (__int64)Ptr,
        &v10,
        &v9,
        (int *)&v8);
    }
    else
    {
      *(_DWORD *)Ptr = 3;
      Ptr[1] = a2;
      Ptr[2] = 0LL;
      Ptr[3] = 0LL;
      SRWLock[10].Ptr = (char *)SRWLock[10].Ptr + 96;
    }
    appended = std::_Fnv1a_append_bytes((__int64)v5, v4 + 16, 8uLL);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
      &SRWLock[1],
      v4,
      appended & (unsigned __int64)SRWLock[7].Ptr);
    std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Unchecked_erase(&SRWLock[2]);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
