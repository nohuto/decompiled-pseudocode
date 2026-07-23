/*
 * XREFs of sub_14074ED04 @ 0x14074ED04
 * Callers:
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_14074D6EC @ 0x14074D6EC (sub_14074D6EC.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 *     sub_1409502B0 @ 0x1409502B0 (sub_1409502B0.c)
 * Callees:
 *     sub_14074D3C8 @ 0x14074D3C8 (sub_14074D3C8.c)
 *     sub_14074F8BC @ 0x14074F8BC (sub_14074F8BC.c)
 *     sub_14095E318 @ 0x14095E318 (sub_14095E318.c)
 */

void __fastcall sub_14074ED04(__int64 a1, int a2)
{
  switch ( a2 )
  {
    case 1:
      sub_14074F8BC();
      break;
    case 2:
      sub_14074D3C8(a1);
      break;
    case 3:
      sub_14095E318();
      break;
    default:
      if ( a2 <= 3 || a2 > 5 )
        __fastfail(5u);
      break;
  }
}
