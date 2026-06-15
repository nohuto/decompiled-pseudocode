/*
 * XREFs of _CMonitorManager::FindMonitor_::_1_::dtor$0 @ 0x18007AA33
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UISpatialAudioDevicePropertyWriter@@@ATL@@QEAA@XZ @ 0x1800CC4E8 (--1-$CComPtr@UISpatialAudioDevicePropertyWriter@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::FindMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return ATL::CComPtr<ISpatialAudioDevicePropertyWriter>::~CComPtr<ISpatialAudioDevicePropertyWriter>(*(_QWORD *)(a2 + 120));
  }
  return result;
}
