/*
 * XREFs of _SetTouchWindowFlags @ 0x1C01D73AC
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C01FA640 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5u);
  InternalRemoveProp(a1, (unsigned __int16)gatomTouchFlags, 1u);
  return 1LL;
}
