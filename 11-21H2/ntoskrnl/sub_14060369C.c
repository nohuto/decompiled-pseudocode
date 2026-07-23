/*
 * XREFs of sub_14060369C @ 0x14060369C
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140603744 @ 0x140603744 (sub_140603744.c)
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14060369C(_QWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  int v9; // ebx
  void *Pool2; // rax

  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 1240LL, 1316118851LL);
    *a1 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x4D8uLL);
      v9 = sub_140603A00(*a1, a2, a3, a4, a5);
      if ( v9 < 0 )
        sub_140603744(a1);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
