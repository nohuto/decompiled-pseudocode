/*
 * XREFs of CrmStateMonitorDelayedInternetLossCallback @ 0x18006E0E0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedInternetLossCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 - 64;
  if ( *(_DWORD *)a3 && (*(_BYTE *)(a3 + 4) & 2) != 0 )
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet((void **)v3, &v6, 4uLL, 0);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 88);
    v7 = -1200000000LL;
    return TpSetTimer(v5, &v7, 0LL, 30000LL);
  }
}
