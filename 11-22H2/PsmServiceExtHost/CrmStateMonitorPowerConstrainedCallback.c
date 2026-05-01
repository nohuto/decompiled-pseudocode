/*
 * XREFs of CrmStateMonitorPowerConstrainedCallback @ 0x180047E10
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

void __fastcall CrmStateMonitorPowerConstrainedCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int128 v7; // xmm1
  __int128 v8; // xmm1
  _BYTE v9[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 4 )
  {
    v5 = -96LL;
  }
  else
  {
    if ( a2 != 23 )
      return;
    v5 = -120LL;
  }
  v6 = a1 + v5;
  RtlAcquireSRWLockExclusive(a1 + v5 + 8);
  *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
  v7 = *(_OWORD *)(v6 + 72);
  *(_OWORD *)v9 = *(_OWORD *)(v6 + 56);
  *(_QWORD *)&v9[32] = *(_QWORD *)(v6 + 88);
  *(_OWORD *)&v9[16] = v7;
  if ( a2 == 4 )
  {
    *(_DWORD *)v9 = *(_DWORD *)a3;
  }
  else
  {
    v8 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v9[8] = *(_OWORD *)a3;
    *(_OWORD *)&v9[24] = v8;
  }
  CrmStateMonitorStateSet((void **)v6, v9, 0x28uLL, 1);
  *(_DWORD *)(v6 + 16) = 0;
  RtlReleaseSRWLockExclusive(v6 + 8);
}
