/*
 * XREFs of sub_1403AA550 @ 0x1403AA550
 * Callers:
 *     sub_1403A8D68 @ 0x1403A8D68 (sub_1403A8D68.c)
 *     sub_14064ED90 @ 0x14064ED90 (sub_14064ED90.c)
 * Callees:
 *     sub_1403A7B7C @ 0x1403A7B7C (sub_1403A7B7C.c)
 *     sub_1403A9A4C @ 0x1403A9A4C (sub_1403A9A4C.c)
 *     sub_1403A9A80 @ 0x1403A9A80 (sub_1403A9A80.c)
 *     sub_14064F438 @ 0x14064F438 (sub_14064F438.c)
 */

__int64 __fastcall sub_1403AA550(__int64 a1, int a2, int a3, __int64 *a4, _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  __int16 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  if ( a2 == -1 )
    return sub_1403A7B7C(a4);
  v10 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  sub_1403A9A4C(*(_QWORD *)(v10 + 16), (unsigned int)(v9 + a2), &v12);
  if ( v12 < 0 )
    return sub_14064F438(a1, a2, a3, (_DWORD)a4, (__int64)a5);
  else
    return sub_1403A9A80(a1, a2, a4, a5);
}
