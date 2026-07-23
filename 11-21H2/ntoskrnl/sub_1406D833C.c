/*
 * XREFs of sub_1406D833C @ 0x1406D833C
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_14066D068 @ 0x14066D068 (sub_14066D068.c)
 */

__int64 __fastcall sub_1406D833C(__int64 a1)
{
  unsigned __int8 v1; // r9
  unsigned __int8 *v2; // r11
  char v4; // r10
  char v5; // r9

  if ( (*(_BYTE *)(*(_QWORD *)sub_140287970(a1) + 15LL) & 0xF0) == 0x50 )
  {
    v4 = -127;
    if ( v1 && v1 != 0x81 && sub_14066D068(v1, 0x81u) )
      v4 = v5;
    v1 = v4;
  }
  *v2 = v1;
  return 0LL;
}
