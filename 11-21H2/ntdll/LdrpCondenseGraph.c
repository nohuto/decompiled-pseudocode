/*
 * XREFs of LdrpCondenseGraph @ 0x1800757A4
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpPrepareModuleForExecution @ 0x18004DB8C (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpCondenseGraphRecurse @ 0x1800757D8 (LdrpCondenseGraphRecurse.c)
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
