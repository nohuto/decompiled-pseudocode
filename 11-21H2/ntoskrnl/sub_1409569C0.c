/*
 * XREFs of sub_1409569C0 @ 0x1409569C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140956ADC @ 0x140956ADC (sub_140956ADC.c)
 */

__int64 sub_1409569C0()
{
  __int64 result; // rax

  if ( dword_140C44634 != 1 )
  {
    if ( dword_140C44634 == 2 )
    {
      return sub_140956ADC();
    }
    else if ( dword_140C44634 != 3 )
    {
      __fastfail(5u);
    }
  }
  return result;
}
