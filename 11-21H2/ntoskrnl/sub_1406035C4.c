/*
 * XREFs of sub_1406035C4 @ 0x1406035C4
 * Callers:
 *     CarRegisterRuleOverride @ 0x140603DE0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x140603ED0 (CarRegisterRuleOverrideAllContexts.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406035C4(_QWORD *a1)
{
  unsigned int v1; // ebx
  void *Pool2; // rax

  v1 = 0;
  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 80LL, 1316118851LL);
    *a1 = Pool2;
    if ( Pool2 )
      memset(Pool2, 0, 0x50uLL);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
