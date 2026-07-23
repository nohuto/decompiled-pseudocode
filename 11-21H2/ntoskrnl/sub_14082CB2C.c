/*
 * XREFs of sub_14082CB2C @ 0x14082CB2C
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14081BD3C @ 0x14081BD3C (sub_14081BD3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *sub_14082CB2C()
{
  struct _KTHREAD *v0; // rdi
  int *v1; // rbx
  __int64 v3; // rax

  v0 = sub_1406F5B50();
  while ( 1 )
  {
    v1 = (int *)qword_140C4F430;
    if ( qword_140C4F430 == &qword_140C4F430 )
      break;
    if ( *((PVOID **)qword_140C4F430 + 1) != &qword_140C4F430
      || (v3 = *(_QWORD *)qword_140C4F430, *(PVOID *)(*(_QWORD *)qword_140C4F430 + 8LL) != qword_140C4F430) )
    {
      __fastfail(3u);
    }
    qword_140C4F430 = *(PVOID *)qword_140C4F430;
    *(_QWORD *)(v3 + 8) = &qword_140C4F430;
    sub_14081BD3C((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return sub_1406F5AF0((__int64)v0);
}
