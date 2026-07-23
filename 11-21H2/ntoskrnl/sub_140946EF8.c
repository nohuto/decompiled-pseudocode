/*
 * XREFs of sub_140946EF8 @ 0x140946EF8
 * Callers:
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_1409589A4 @ 0x1409589A4 (sub_1409589A4.c)
 */

void __fastcall sub_140946EF8(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 >= 769 )
  {
    if ( v2 <= 772 )
      goto LABEL_6;
    if ( v2 >= 784 )
      goto LABEL_7;
    if ( (int)sub_1409589A4(*(PDEVICE_OBJECT *)(a1 + 32)) >= 0 )
    {
LABEL_6:
      sub_140766C3C(*(PDEVICE_OBJECT *)(a1 + 32), 2);
      sub_140766A5C(a1, 1);
    }
    else
    {
      sub_140766C3C(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    }
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    sub_140764FE4(a1);
  sub_140765114(a1, a2, 0);
}
