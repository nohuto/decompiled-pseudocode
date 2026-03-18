/*
 * XREFs of ZwRaiseException @ 0x14041DBA0
 * Callers:
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404297A0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
