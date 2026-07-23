/*
 * XREFs of sub_140593A80 @ 0x140593A80
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 */

__int64 __fastcall sub_140593A80(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  char *v3; // rsi
  unsigned __int8 v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8

  v2 = 0;
  v3 = sub_14026DFC0(1);
  v4 = sub_1402CF4F0((__int64)v3);
  v5 = qword_140C4F5F0;
  while ( v5 )
  {
    v6 = v5[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( a1 < v6 + v5[4] )
    {
      if ( a1 >= v6 )
      {
        if ( (v5[7] & 2) != 0 )
          v2 = 1;
        break;
      }
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[1];
    }
  }
  sub_1402B0CE0((__int64)v3, v4);
  return v2;
}
