/*
 * XREFs of sub_140AB08A0 @ 0x140AB08A0
 * Callers:
 *     sub_140AB070C @ 0x140AB070C (sub_140AB070C.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AB1844 @ 0x140AB1844 (sub_140AB1844.c)
 */

__int64 __fastcall sub_140AB08A0(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 1) == 0 || (dword_140C0DF90 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140C0E040 && qword_140C0E058 )
  {
    v5 = sub_140AB1844(qword_140C0E058, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  sub_1403A7BF0();
  return v5;
}
