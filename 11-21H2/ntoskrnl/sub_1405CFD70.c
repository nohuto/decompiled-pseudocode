/*
 * XREFs of sub_1405CFD70 @ 0x1405CFD70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall sub_1405CFD70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const GUID *a6)
{
  int v7; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v8[4]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v7 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v9, v8, &v7) >= 0 )
    sub_1407525EC(a6 + 1);
  return 0LL;
}
