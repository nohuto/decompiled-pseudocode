/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C023D910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029AF08;
  if ( qword_1C029AF08 )
    return (__int64 (*)(void))qword_1C029AF08();
  return result;
}
