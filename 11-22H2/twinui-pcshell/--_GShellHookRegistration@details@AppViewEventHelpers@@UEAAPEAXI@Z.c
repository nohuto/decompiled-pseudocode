/*
 * XREFs of ??_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x18078E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x18078E1D4 (--1-$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@A.c)
 */

AppViewEventHelpers::details::ShellHookRegistration *__fastcall AppViewEventHelpers::details::ShellHookRegistration::`scalar deleting destructor'(
        AppViewEventHelpers::details::ShellHookRegistration *this,
        char a2)
{
  AppViewEventHelpers::details::EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>::~EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
