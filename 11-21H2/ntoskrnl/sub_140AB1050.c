/*
 * XREFs of sub_140AB1050 @ 0x140AB1050
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 */

__int64 __fastcall sub_140AB1050(_DWORD *a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ebx

  sub_1403A7C40();
  v2 = (_DWORD *)qword_140CE1AD8;
  v3 = 0;
  if ( qword_140CE1AD8 )
  {
    *a1 = *(_DWORD *)(qword_140CE1AD8 + 20);
    a1[1] = v2[6];
    a1[2] = *v2;
    a1[3] = v2[1];
    a1[4] = v2[12];
    a1[5] = v2[13];
    a1[6] = v2[15];
    a1[7] = v2[16];
  }
  else
  {
    v3 = -1073741823;
  }
  sub_1403A7BF0();
  return v3;
}
