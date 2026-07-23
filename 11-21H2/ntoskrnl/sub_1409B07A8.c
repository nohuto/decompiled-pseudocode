/*
 * XREFs of sub_1409B07A8 @ 0x1409B07A8
 * Callers:
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_1409B0F50 @ 0x1409B0F50 (sub_1409B0F50.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1409B07A8(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 1024) = a2;
}
