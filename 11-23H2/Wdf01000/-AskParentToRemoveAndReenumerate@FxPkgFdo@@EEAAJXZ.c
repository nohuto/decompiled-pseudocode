/*
 * XREFs of ?AskParentToRemoveAndReenumerate@FxPkgFdo@@EEAAJXZ @ 0x1C0082800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgFdo::AskParentToRemoveAndReenumerate(FxPkgFdo *this)
{
  void (__fastcall *SurpriseRemoveAndReenumerateSelf)(void *); // rax

  SurpriseRemoveAndReenumerateSelf = this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf;
  if ( !SurpriseRemoveAndReenumerateSelf )
    return 3221225659LL;
  SurpriseRemoveAndReenumerateSelf(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
  return 0LL;
}
