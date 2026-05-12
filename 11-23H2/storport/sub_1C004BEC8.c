/*
 * XREFs of sub_1C004BEC8 @ 0x1C004BEC8
 * Callers:
 *     sub_1C0015240 @ 0x1C0015240 (sub_1C0015240.c)
 *     sub_1C004E400 @ 0x1C004E400 (sub_1C004E400.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1C004BEC8(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v3; // rcx
  IRP *v4; // rcx

  result = 1;
  v3 = *(_QWORD *)(a1 + 4896);
  if ( v3 )
  {
    v4 = *(IRP **)(v3 + 72);
    if ( v4 )
    {
      result = IoCancelIrp(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 4896) + 72LL) = 0LL;
    }
  }
  return result;
}
