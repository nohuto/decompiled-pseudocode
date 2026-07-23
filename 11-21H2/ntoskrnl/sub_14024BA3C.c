/*
 * XREFs of sub_14024BA3C @ 0x14024BA3C
 * Callers:
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140847028 @ 0x140847028 (sub_140847028.c)
 *     sub_1409AE968 @ 0x1409AE968 (sub_1409AE968.c)
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_14024BA3C(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1080);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    sub_14024BA7C((ULONG_PTR)v3);
  return sub_1402F9540(a2);
}
