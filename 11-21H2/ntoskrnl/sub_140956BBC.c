/*
 * XREFs of sub_140956BBC @ 0x140956BBC
 * Callers:
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 *     sub_140826E04 @ 0x140826E04 (sub_140826E04.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 * Callees:
 *     sub_140956ADC @ 0x140956ADC (sub_140956ADC.c)
 *     sub_140957DE0 @ 0x140957DE0 (sub_140957DE0.c)
 */

void sub_140956BBC()
{
  if ( dword_140C44634 == 1 )
  {
LABEL_6:
    sub_140956ADC();
    return;
  }
  if ( dword_140C44634 == 2 )
  {
    if ( (unsigned __int8)sub_140957DE0() )
      return;
    goto LABEL_6;
  }
  if ( dword_140C44634 != 3 )
    __fastfail(5u);
}
