/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x180127FB0
 * Callers:
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z @ 0x1801EF120 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges(
        ApplicationViewManagerVisibilityDebouncer *this,
        unsigned int a2)
{
  return AgileRegistrationList::Unregister((ApplicationViewManagerVisibilityDebouncer *)((char *)this + 120), a2);
}
