/*
 * XREFs of ??1?$shared_ptr@VDeactivatableDuckingDescriptor@@@std@@QEAA@XZ @ 0x180012060
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$7 @ 0x1800477F0 (_QueueGenericWorkItem_--_1_--dtor$7.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$1 @ 0x180047ED0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$1.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$1 @ 0x180049546 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<DeactivatableDuckingDescriptor>::~shared_ptr<DeactivatableDuckingDescriptor>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (**(__int64 (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
