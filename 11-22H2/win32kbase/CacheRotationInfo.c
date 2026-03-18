/*
 * XREFs of CacheRotationInfo @ 0x1C00D60D8
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CacheRotationInfo())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295CA0;
  if ( qword_1C0295CA0 )
    return (__int64 (*)(void))qword_1C0295CA0();
  return result;
}
