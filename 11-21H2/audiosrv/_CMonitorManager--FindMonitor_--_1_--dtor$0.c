/*
 * XREFs of _CMonitorManager::FindMonitor_::_1_::dtor$0 @ 0x18011B6FA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180010580 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CMonitorManager::FindMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(*(void **)(a2 + 120));
  }
}
