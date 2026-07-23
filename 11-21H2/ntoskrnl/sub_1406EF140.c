/*
 * XREFs of sub_1406EF140 @ 0x1406EF140
 * Callers:
 *     sub_140630D00 @ 0x140630D00 (sub_140630D00.c)
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EEF3C @ 0x1406EEF3C (sub_1406EEF3C.c)
 *     sub_1406EF10C @ 0x1406EF10C (sub_1406EF10C.c)
 *     sub_1409E4DAC @ 0x1409E4DAC (sub_1409E4DAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406EF140(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 < 0xB0u )
      return 3221225990LL;
    if ( (a1[11] & 0x20000) != 0 )
      return 0LL;
  }
  return 3221225485LL;
}
