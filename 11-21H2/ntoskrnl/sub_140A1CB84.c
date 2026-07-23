/*
 * XREFs of sub_140A1CB84 @ 0x140A1CB84
 * Callers:
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 * Callees:
 *     sub_1403A7718 @ 0x1403A7718 (sub_1403A7718.c)
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_140803438 @ 0x140803438 (sub_140803438.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 */

NTSTATUS __fastcall sub_140A1CB84(__int64 a1, int a2, int a3, __int64 *a4)
{
  char v8; // bp
  NTSTATUS result; // eax
  int v10; // ebx

  v8 = sub_1403A7864(a1);
  result = sub_14081369C(v8);
  if ( result >= 0 )
  {
    v10 = sub_140A1CF34(a1, a2, a3, 0, (__int64)a4);
    if ( v10 >= 0 )
    {
      if ( sub_140803438(*a4, 0LL) )
        sub_1403A7718(a1, 1);
    }
    sub_1408134D8(v8);
    return v10;
  }
  return result;
}
