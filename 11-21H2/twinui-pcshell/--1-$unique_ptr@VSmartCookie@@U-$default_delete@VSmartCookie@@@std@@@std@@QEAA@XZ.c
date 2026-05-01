/*
 * XREFs of ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x180453AFC
 * Callers:
 *     _AppViewEventHelpers::details::EventRegistration_IApplicationViewCollection_IApplicationViewChangeListener_::Unregister_::_1_::dtor$0 @ 0x18021A8EA (_AppViewEventHelpers--details--EventRegistration_IApplicationViewCollection_IApplic_ea_18021A8EA.c)
 *     _AppViewEventHelpers::details::EventRegistration_IImmersiveShellHookService_IImmersiveShellHookNotification_::Unregister_::_1_::dtor$0 @ 0x180455792 (_AppViewEventHelpers--details--EventRegistration_IImmersiveShellHookService_IImmers_ea_180455792.c)
 * Callees:
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>(SmartCookie **a1)
{
  SmartCookie *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SmartCookie::Unregister(*a1);
    wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)v1);
    operator delete(v1);
  }
}
