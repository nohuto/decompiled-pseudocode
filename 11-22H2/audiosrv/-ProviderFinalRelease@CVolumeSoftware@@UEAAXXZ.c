/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x180128880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180128510 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(CVolumeSoftware *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    CVolumeSoftware::PersistVolumeState(this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
    if ( this != (CVolumeSoftware *)-256LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  }
}
