/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140AC196C
 * Callers:
 *     IovCallDriver @ 0x140AC11D0 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14028CFC4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14045F88A (IopPerfCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACD5DC (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, ULONG_PTR a2)
{
  VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    return IopPerfCallDriver(Object, a2);
  else
    return IopfCallDriver((__int64)Object, a2);
}
