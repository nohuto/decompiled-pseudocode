/*
 * XREFs of PepNotifyQueryPerfAutonomousSupport @ 0x1C0025460
 * Callers:
 *     InitPepPerfStates @ 0x1C0043864 (InitPepPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyQueryPerfAutonomousSupport(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1120);
  v5 = 0;
  result = PoFxProcessorNotification(v2, 47LL, &v5);
  if ( (int)result >= 0 )
    *a2 = v5;
  return result;
}
