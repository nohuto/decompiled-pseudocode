/*
 * XREFs of vDisableSynchronize @ 0x1C00C141C
 * Callers:
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vDisableSynchronize())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B468;
  if ( qword_1C029B468 )
    return (__int64 (*)(void))qword_1C029B468();
  return result;
}
