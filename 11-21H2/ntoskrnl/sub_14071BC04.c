/*
 * XREFs of sub_14071BC04 @ 0x14071BC04
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_14071BC04(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  unsigned __int8 *i; // r11
  unsigned __int16 v5; // dx
  _QWORD *v7; // rax
  unsigned __int16 v8; // dx

  v2 = 0;
  v3 = a2;
  for ( i = a1; v3; --v3 )
  {
    v5 = *i;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 > 0x7Au )
      {
        v7 = sub_140347DB0();
        v5 = sub_1403477B0(v7[154], v8);
      }
      else
      {
        v5 -= 32;
      }
    }
    ++i;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
