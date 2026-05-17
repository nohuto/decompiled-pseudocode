/*
 * XREFs of LdrpCondenseGraph @ 0x18006F394
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DAD8 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpCondenseGraphRecurse @ 0x18006F3C8 (LdrpCondenseGraphRecurse.c)
 */

_UNKNOWN **__fastcall LdrpCondenseGraph(__int64 a1)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  if ( *(int *)(a1 + 56) < 6 )
  {
    v3 = 0;
    v4 = 1LL;
    return (_UNKNOWN **)LdrpCondenseGraphRecurse(a1, &v3, &v4);
  }
  return result;
}
