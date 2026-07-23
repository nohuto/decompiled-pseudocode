/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x140984760
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x1407E2740 (ExQueryWnfStateData.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C01C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfUserAwayPredictionCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  LODWORD(v8) = 8;
  v2 = ExQueryWnfStateData(a1, &v10, &v9, (unsigned int *)&v8);
  if ( v2 >= 0 )
  {
    if ( (unsigned int)v8 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      PopUpdateSmartUserPresencePredictions(v9, 3LL);
      PopReleasePolicyLock(v4, v3, v5, v6, v8, v9);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
