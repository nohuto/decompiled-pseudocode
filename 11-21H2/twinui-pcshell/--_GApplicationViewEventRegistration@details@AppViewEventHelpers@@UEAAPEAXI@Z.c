/*
 * XREFs of ??_GApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x18004E350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x18004E2FC (--1-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@Ap.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

AppViewEventHelpers::details::ApplicationViewEventRegistration *__fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::`scalar deleting destructor'(
        AppViewEventHelpers::details::ApplicationViewEventRegistration *this,
        char a2)
{
  AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::~EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
