/*
 * XREFs of IoSetIoAttributionIrp @ 0x140557CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020B7D4 @ 0x14020B7D4 (sub_14020B7D4.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 */

__int64 __fastcall IoSetIoAttributionIrp(__int64 a1, __int64 a2, int a3)
{
  if ( a3 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a3 & 1) == 0 )
      return sub_14020B7D4(a1, a2);
    if ( (a3 & 2) == 0 )
      return sub_1403437A0(a1, a2);
  }
  return 3221225485LL;
}
