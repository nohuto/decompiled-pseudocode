/*
 * XREFs of sub_140AAB2D4 @ 0x140AAB2D4
 * Callers:
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAB320 @ 0x140AAB320 (sub_140AAB320.c)
 */

__int64 sub_140AAB2D4()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v0 = 0LL;
  v2 = 0LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
  {
    sub_140AAB320(&v2);
    v0 = v2;
  }
  sub_1403A7BF0();
  return v0;
}
