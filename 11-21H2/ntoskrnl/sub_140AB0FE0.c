/*
 * XREFs of sub_140AB0FE0 @ 0x140AB0FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 */

__int64 __fastcall sub_140AB0FE0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx

  sub_1403A7C40();
  v6 = qword_140CE1AD8;
  v7 = 0;
  if ( qword_140CE1AD8 )
  {
    *a1 = *(_DWORD *)(qword_140CE1AD8 + 68);
    *a2 = *(_DWORD *)(v6 + 72);
    *a3 = *(_DWORD *)(v6 + 76);
  }
  else
  {
    v7 = -1073741823;
  }
  sub_1403A7BF0();
  return v7;
}
