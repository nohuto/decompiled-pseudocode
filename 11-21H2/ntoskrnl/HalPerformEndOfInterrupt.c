/*
 * XREFs of HalPerformEndOfInterrupt @ 0x140222670
 * Callers:
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     HvlPerformEndOfInterrupt @ 0x140459C10 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050A598 @ 0x14050A598 (sub_14050A598.c)
 *     sub_14050A60C @ 0x14050A60C (sub_14050A60C.c)
 */

__int64 __fastcall HalPerformEndOfInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 && *(_BYTE *)(a1 + 101) )
    sub_14050A60C();
  result = sub_14042A5E0(a1, a2, a3);
  if ( byte_140C4AD7E )
    return sub_14050A598(a1);
  return result;
}
