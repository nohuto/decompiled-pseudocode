/*
 * XREFs of sub_140A9DD20 @ 0x140A9DD20
 * Callers:
 *     sub_140601DB0 @ 0x140601DB0 (sub_140601DB0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 */

void sub_140A9DD20()
{
  byte_140C1A914 = 1;
  RtlInitializeGenericTableAvl(
    &stru_140D58C80,
    (PRTL_AVL_COMPARE_ROUTINE)sub_140A9D650,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_140A9DAF0,
    (PRTL_AVL_FREE_ROUTINE)sub_140A9DCB0,
    0LL);
  _InterlockedExchange(&dword_140D57580, 1);
  RtlInitializeGenericTableAvl(
    &stru_140D58BC0,
    (PRTL_AVL_COMPARE_ROUTINE)sub_140A9D670,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_140A9DAF0,
    (PRTL_AVL_FREE_ROUTINE)sub_140A9DD00,
    0LL);
  _InterlockedExchange(&dword_140D5757C, 1);
}
