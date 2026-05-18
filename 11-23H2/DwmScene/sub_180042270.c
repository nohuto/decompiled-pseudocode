/*
 * XREFs of sub_180042270 @ 0x180042270
 * Callers:
 *     sub_180042270 @ 0x180042270 (sub_180042270.c)
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 * Callees:
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18003E160 @ 0x18003E160 (sub_18003E160.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180042270 @ 0x180042270 (sub_180042270.c)
 */

char __fastcall sub_180042270(__int64 a1, __int64 a2, __int64 *a3)
{
  char result; // al
  __int64 v7; // rdx
  __int64 *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 i; // rbx

  result = sub_180011DD0(a3);
  if ( !result )
  {
    sub_18003E160(*v8, v7);
    v9 = *a3;
    result = sub_18003E330(v9);
    v10 = *(_QWORD *)(v9 + 40);
    for ( i = *(_QWORD *)(v9 + 32); i != v10; i += 16LL )
      result = sub_180042270(a1, a2, i);
  }
  return result;
}
