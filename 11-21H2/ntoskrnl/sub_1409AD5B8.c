/*
 * XREFs of sub_1409AD5B8 @ 0x1409AD5B8
 * Callers:
 *     sub_1406D7150 @ 0x1406D7150 (sub_1406D7150.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char __fastcall sub_1409AD5B8(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1360);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    sub_14024BA7C((ULONG_PTR)v3);
  return sub_1402F9540(a2);
}
