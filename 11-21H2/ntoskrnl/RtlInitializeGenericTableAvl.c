/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1402DF2C0
 * Callers:
 *     sub_140776C38 @ 0x140776C38 (sub_140776C38.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14081881C @ 0x14081881C (sub_14081881C.c)
 *     sub_140844B5C @ 0x140844B5C (sub_140844B5C.c)
 *     sub_140851328 @ 0x140851328 (sub_140851328.c)
 *     sub_140858B54 @ 0x140858B54 (sub_140858B54.c)
 *     sub_140A7C400 @ 0x140A7C400 (sub_140A7C400.c)
 *     sub_140A9DD20 @ 0x140A9DD20 (sub_140A9DD20.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B010DC @ 0x140B010DC (sub_140B010DC.c)
 *     sub_140B235FC @ 0x140B235FC (sub_140B235FC.c)
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 *     sub_140B24AB0 @ 0x140B24AB0 (sub_140B24AB0.c)
 *     sub_140B2E514 @ 0x140B2E514 (sub_140B2E514.c)
 *     sub_140B2F780 @ 0x140B2F780 (sub_140B2F780.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = CompareRoutine;
  Table->FreeRoutine = FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = AllocateRoutine;
}
