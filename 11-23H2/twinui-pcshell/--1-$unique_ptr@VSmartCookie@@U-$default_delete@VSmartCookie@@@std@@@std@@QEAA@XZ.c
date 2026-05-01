/*
 * XREFs of ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x18078E2A0
 * Callers:
 *     _AppViewEventHelpers::details::EventRegistration_IApplicationViewCollection_IApplicationViewChangeListener_::Unregister_::_1_::dtor$0 @ 0x1802C3EB3 (_AppViewEventHelpers--details--EventRegistration_IApplicationViewCollection_IApplic_ea_1802C3EB3.c)
 *     _AppViewEventHelpers::details::EventRegistration_IImmersiveShellHookService_IImmersiveShellHookNotification_::Unregister_::_1_::dtor$0 @ 0x18078F68E (_AppViewEventHelpers--details--EventRegistration_IImmersiveShellHookService_IImmers_ea_18078F68E.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>(SmartCookie **a1)
{
  SmartCookie *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SmartCookie::Unregister(*a1);
    wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)v1);
    operator delete(v1);
  }
}
