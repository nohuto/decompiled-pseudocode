/*
 * XREFs of sub_140B2E514 @ 0x140B2E514
 * Callers:
 *     sub_140B2E474 @ 0x140B2E474 (sub_140B2E474.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 */

__int64 sub_140B2E514()
{
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1406DAD90,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406E9100,
    (PRTL_AVL_FREE_ROUTINE)sub_1406EB7B0,
    0LL);
  qword_140D3CF50 = (__int64)&Buffer;
  Buffer = &Buffer;
  return 0LL;
}
