/*
 * XREFs of sub_140AB09E0 @ 0x140AB09E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AB0A18 @ 0x140AB0A18 (sub_140AB0A18.c)
 */

__int64 sub_140AB09E0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx

  sub_1403A7C40();
  if ( qword_140CE1AD8 )
    v4 = sub_140AB0A18(v1, v0, v2, v3);
  else
    v4 = -1073741823;
  sub_1403A7BF0();
  return v4;
}
