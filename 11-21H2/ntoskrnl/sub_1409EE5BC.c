/*
 * XREFs of sub_1409EE5BC @ 0x1409EE5BC
 * Callers:
 *     sub_1409EE650 @ 0x1409EE650 (sub_1409EE650.c)
 * Callees:
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EE5BC(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *Pool2; // rbx
  ULONG_PTR v5; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1769436229LL);
  if ( !Pool2 )
    return 3221225495LL;
  v5 = sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C15CD0);
  Pool2[2] = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1032) = Pool2;
  return 0LL;
}
