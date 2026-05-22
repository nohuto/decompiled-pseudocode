/*
 * XREFs of ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18008099C
 * Callers:
 *     NotifyInputSinkRemoved @ 0x180080F20 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x180003E80 (--$find@X@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x180080524 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180080B64 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@QEAU32@@Z @ 0x180080E4C (-_Unchecked_erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@AEAAP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSinkDataCache::InputSinkRemoved(RTL_SRWLOCK *this, __int64 a2)
{
  const unsigned __int8 *v4; // rbx
  __int64 *v5; // rcx
  __int64 Ptr; // rdx
  unsigned __int64 appended; // rax
  const unsigned __int8 *v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = a2;
  AcquireSRWLockExclusive(this);
  v11 = this;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
    &this[1].Ptr,
    &v8,
    (unsigned __int8 *)&v9);
  v4 = v8;
  if ( v8 != this[2].Ptr )
  {
    v5 = (__int64 *)&this[9];
    LODWORD(v8) = 0;
    v10 = 3;
    Ptr = (__int64)this[10].Ptr;
    if ( (PVOID)Ptr == this[11].Ptr )
    {
      std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,int>(
        v5,
        Ptr,
        &v10,
        &v9,
        (int *)&v8);
    }
    else
    {
      *(_DWORD *)Ptr = 3;
      *(_QWORD *)(Ptr + 8) = a2;
      *(_QWORD *)(Ptr + 16) = 0LL;
      *(_QWORD *)(Ptr + 24) = 0LL;
      this[10].Ptr = (char *)this[10].Ptr + 96;
    }
    appended = std::_Fnv1a_append_bytes((unsigned __int64)v5, v4 + 16, 8uLL);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
      &this[1],
      v4,
      appended & (unsigned __int64)this[7].Ptr);
    std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Unchecked_erase(&this[2]);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
}
