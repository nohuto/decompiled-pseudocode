/*
 * XREFs of sub_140844B5C @ 0x140844B5C
 * Callers:
 *     sub_140B1B1D0 @ 0x140B1B1D0 (sub_140B1B1D0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 */

void __fastcall sub_140844B5C(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    (PRTL_AVL_COMPARE_ROUTINE)sub_1406A9190,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406E5730,
    sub_140948F40,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
