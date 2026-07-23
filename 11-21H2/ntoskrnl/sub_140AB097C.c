/*
 * XREFs of sub_140AB097C @ 0x140AB097C
 * Callers:
 *     sub_140AB07F4 @ 0x140AB07F4 (sub_140AB07F4.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_14064D750 @ 0x14064D750 (sub_14064D750.c)
 */

__int64 __fastcall sub_140AB097C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 )
    return 3221225485LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
    v5 = sub_14064D750(v4, a2);
  else
    v5 = -1073741823;
  sub_1403A7BF0();
  return v5;
}
