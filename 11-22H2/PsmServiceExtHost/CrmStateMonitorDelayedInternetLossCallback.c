/*
 * XREFs of CrmStateMonitorDelayedInternetLossCallback @ 0x18006E150
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateRoutineSebLevel @ 0x18004BA80 (CrmStateRoutineSebLevel.c)
 */

__int64 __fastcall CrmStateMonitorDelayedInternetLossCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = a1 - 64;
  v4 = CrmStateRoutineSebLevel(a3);
  v5 = *(_QWORD *)(v3 + 88);
  if ( v4 )
  {
    TpSetTimer(v5, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v7 = 0;
    return CrmStateMonitorStateSet((void **)v3, &v7, 4uLL, 0);
  }
  else
  {
    v8 = -1200000000LL;
    return TpSetTimer(v5, &v8, 0LL, 30000LL);
  }
}
