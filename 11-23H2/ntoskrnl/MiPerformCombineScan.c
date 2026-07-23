/*
 * XREFs of MiPerformCombineScan @ 0x140283150
 * Callers:
 *     MiComputeCombineHash @ 0x140281EE0 (MiComputeCombineHash.c)
 * Callees:
 *     MiComputeHash64 @ 0x1402831D0 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r11
  __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = MiComputeHash64((__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16, a2, 1LL);
  *(_QWORD *)(v3 + 8) = v5;
  if ( !v5 )
    return 0;
  return v2;
}
