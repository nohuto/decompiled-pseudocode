/*
 * XREFs of ?_Reset0@?$_Ptr_base@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@QEAAXPEAVSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEAV_Ref_count_base@2@@Z @ 0x180073A3C
 * Callers:
 *     ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x18006D9A8 (--$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMan.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180071740 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ptr_base<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::_Reset0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax

  v3 = (volatile signed __int32 *)a1[1];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  a1[1] = a3;
  *a1 = a2;
  return result;
}
