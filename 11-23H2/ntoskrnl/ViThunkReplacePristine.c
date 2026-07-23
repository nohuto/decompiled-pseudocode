/*
 * XREFs of ViThunkReplacePristine @ 0x140ADC0F8
 * Callers:
 *     ViThunkRecoverPristines @ 0x140ADBD8C (ViThunkRecoverPristines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkReplacePristine(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
  {
    while ( *a3 != a1[1] )
    {
      a1 += 7;
      if ( !*a1 )
        return result;
    }
    *a3 = a1[2];
    return 1LL;
  }
  return result;
}
