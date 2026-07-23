/*
 * XREFs of sub_140AB0910 @ 0x140AB0910
 * Callers:
 *     sub_140AAE8BC @ 0x140AAE8BC (sub_140AAE8BC.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AAE918 @ 0x140AAE918 (sub_140AAE918.c)
 */

__int64 sub_140AB0910()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  sub_1403A7C40();
  v1 = dword_140C0DF90;
  v2 = 0;
  if ( (dword_140C0DF90 & 1) == 0
    || (qword_140C0E0F0 = 0LL, xmmword_140C0E100 = 0LL, v2 = sub_140AAE918(), (v1 & 0xC00) != 0xC00) )
  {
    sub_1403A7BF0();
  }
  return v2;
}
