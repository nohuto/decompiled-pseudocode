/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006E540
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800723F0 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?_Destroy@?$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@EEAAXXZ @ 0x180073420 (-_Destroy@-$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedConten.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue_::_1_::dtor$1 @ 0x1800F0629 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--Subscriptio_ea_1800F0629.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$0 @ 0x1800F0B3E (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RemoveInval_ea_1800F0B3E.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *(__int64 **)a1;
    }
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
