/*
 * XREFs of sub_140AB1390 @ 0x140AB1390
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 */

__int64 __fastcall sub_140AB1390(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  sub_1403A7C40();
  v4 = qword_140CE1AD8;
  v5 = 0;
  if ( qword_140CE1AD8 )
  {
    if ( a1 )
      *(_DWORD *)(qword_140CE1AD8 + 12) = *a1;
    if ( a2 )
      *(_DWORD *)(v4 + 16) = *a2;
  }
  else
  {
    v5 = -1073741823;
  }
  sub_1403A7BF0();
  return v5;
}
