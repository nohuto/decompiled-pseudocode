/*
 * XREFs of ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x1804A5C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::SetInFocusAppView(
        RTL_SRWLOCK *this,
        void *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  _BYTE v8[32]; // [rsp+28h] [rbp-30h] BYREF

  v4 = this + 9;
  AcquireSRWLockExclusive(this + 9);
  this[10].Ptr = a2;
  v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *, void *))this[-3].Ptr + 9))(this - 3, v8, a2);
  v6 = this + 11;
  if ( v6 != (RTL_SRWLOCK *)v5 )
  {
    std::wstring::_Tidy_deallocate((__int64)v6);
    *(_OWORD *)&v6->Ptr = *(_OWORD *)v5;
    *(_OWORD *)&v6[2].Ptr = *(_OWORD *)(v5 + 16);
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 7LL;
    *(_WORD *)v5 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v8);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
