/*
 * XREFs of ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1801113B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18011112C (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 */

void __fastcall CMuteSoftware::ProviderFinalRelease(CMuteSoftware *this)
{
  if ( *((_QWORD *)this + 4) )
    CMuteSoftware::PersistMuteState(this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 6);
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}
