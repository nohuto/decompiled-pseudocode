/*
 * XREFs of MagpFindThreadContext @ 0x1C0060DF0
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01C9610 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01C9860 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01C9964 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CA01C (MagSetLensContextInformation.c)
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
