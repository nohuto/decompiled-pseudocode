/*
 * XREFs of sub_1409506AC @ 0x1409506AC
 * Callers:
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_1409506AC(ULONG_PTR a1)
{
  void *Pool2; // rbx
  int v3; // eax
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  Pool2 = 0LL;
  v3 = PsQueryProcessCommandLine(a1, 0LL, 0, 0, &v5);
  if ( v3 == -1073741820 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v5, 1332768336LL);
    if ( !Pool2 )
      return Pool2;
    v3 = PsQueryProcessCommandLine(a1, (__int64)Pool2, v5, 0, &v5);
  }
  if ( v3 < 0 && Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x4F706E50u);
    return 0LL;
  }
  return Pool2;
}
