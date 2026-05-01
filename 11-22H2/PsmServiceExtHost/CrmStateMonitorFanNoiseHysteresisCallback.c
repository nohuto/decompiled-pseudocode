/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisCallback @ 0x180013BB0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorFanNoiseHysteresisSetTimer @ 0x180013C34 (CrmStateMonitorFanNoiseHysteresisSetTimer.c)
 */

__int64 __fastcall CrmStateMonitorFanNoiseHysteresisCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // ecx
  __int64 result; // rax
  bool v7; // cc

  v3 = a1 - 88;
  TpSetTimer(*(_QWORD *)(a1 - 88 + 112), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(v3 + 112), 1LL);
  v5 = a3[2];
  result = 0LL;
  *(_OWORD *)(v3 + 120) = *(_OWORD *)a3;
  *(_OWORD *)(v3 + 136) = *((_OWORD *)a3 + 1);
  v7 = v5 <= *(_DWORD *)(v3 + 64);
  if ( v5 >= *(_DWORD *)(v3 + 64) )
  {
    *(_QWORD *)(v3 + 152) = 0LL;
    if ( !v7 )
      return CrmStateMonitorStateSet((void **)v3, a3, 0x20uLL, 0);
  }
  else
  {
    LOBYTE(result) = *(_QWORD *)(v3 + 152) != 0LL;
    return CrmStateMonitorFanNoiseHysteresisSetTimer(v3, (unsigned int)result);
  }
  return result;
}
