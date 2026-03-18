/*
 * XREFs of ZwRaiseException @ 0x14041E540
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x14042A160 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
