/*
 * XREFs of sub_140718B68 @ 0x140718B68
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_1406E236C @ 0x1406E236C (sub_1406E236C.c)
 *     sub_140717660 @ 0x140717660 (sub_140717660.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_1407C3E50 @ 0x1407C3E50 (sub_1407C3E50.c)
 *     sub_14082F314 @ 0x14082F314 (sub_14082F314.c)
 *     sub_140853BB8 @ 0x140853BB8 (sub_140853BB8.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_140718B68(__m128i *a1)
{
  unsigned int v1; // r10d
  __int16 v2; // ax
  unsigned __int16 *v3; // r11
  __int64 v4; // rbx
  unsigned __int16 v5; // dx
  _QWORD *v7; // rax
  unsigned __int16 v8; // dx

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
        {
          v7 = sub_140347DB0();
          v5 = sub_1403477B0(v7[154], v8);
        }
        else
        {
          v5 -= 32;
        }
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
