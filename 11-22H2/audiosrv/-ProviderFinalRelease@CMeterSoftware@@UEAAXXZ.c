/*
 * XREFs of ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x18010FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CMeterSoftware::ProviderFinalRelease(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
  if ( v1 )
    LeaveCriticalSection(v1);
}
