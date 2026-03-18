/*
 * XREFs of ZwRaiseException @ 0x14041D4E0
 * Callers:
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404290E0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
