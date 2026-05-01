/*
 * XREFs of ??1REGKEYINFO@@QEAA@XZ @ 0x18063E000
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$4 @ 0x1802B97BC (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$4.c)
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$5 @ 0x1802B97D5 (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$5.c)
 *     ?_Destroy@?$_Ref_count_obj2@UREGKEYINFO@@@std@@EEAAXXZ @ 0x1806409D0 (-_Destroy@-$_Ref_count_obj2@UREGKEYINFO@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall REGKEYINFO::~REGKEYINFO(REGKEYINFO *this)
{
  __int64 v1; // rsi
  std::_Ref_count_base *v3; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v1 + 152));
    SRWLock = (PSRWLOCK)(v1 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v1);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::wstring::_Tidy_deallocate((__int64)this + 48);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
