/*
 * XREFs of sub_14041E540 @ 0x14041E540
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_14042A160 @ 0x14042A160 (sub_14042A160.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041E540(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return sub_140433F80(a1, a2);
}
