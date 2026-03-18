/*
 * XREFs of MagpFindThreadContext @ 0x1C014E84A
 * Callers:
 *     MagContextThreadCallout @ 0x1C01A2E60 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01A30A4 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01A31B0 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01A3870 (MagSetLensContextInformation.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
