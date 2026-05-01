/*
 * XREFs of ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x180081AD0
 * Callers:
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x1800809BC (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 * Callees:
 *     ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180081B64 (--$-4U-$default_delete@VSmartCookie@@@std@@$0A@@-$unique_ptr@VSmartCookie@@U-$default_delete@VSm.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::Unregister(
        RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi
  SmartCookie *v3; // rbx
  SmartCookie *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&a1[8]);
  std::unique_ptr<SmartCookie>::operator=<std::default_delete<SmartCookie>,0>(&v4, &a1[6]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = v4;
  SmartCookie::Unregister(v4);
  if ( v3 )
  {
    SmartCookie::Unregister(v3);
    wistd::function<long (unsigned long)>::~function<long (unsigned long)>(v3);
    operator delete(v3, 0x80uLL);
  }
}
