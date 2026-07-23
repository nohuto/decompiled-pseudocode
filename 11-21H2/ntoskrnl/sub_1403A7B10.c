/*
 * XREFs of sub_1403A7B10 @ 0x1403A7B10
 * Callers:
 *     sub_140AACB50 @ 0x140AACB50 (sub_140AACB50.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403AA7E0 @ 0x1403AA7E0 (sub_1403AA7E0.c)
 */

__int64 __fastcall sub_1403A7B10(int a1, __int64 a2)
{
  unsigned int v4; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || a1 >= 4 )
    return 3221225485LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) != 0 )
    v4 = sub_1403AA7E0((unsigned int)a1, a2);
  else
    v4 = -1073741823;
  sub_1403A7BF0();
  return v4;
}
