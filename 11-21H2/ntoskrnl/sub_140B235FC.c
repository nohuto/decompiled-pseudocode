/*
 * XREFs of sub_140B235FC @ 0x140B235FC
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 */

NTSTATUS sub_140B235FC()
{
  NTSTATUS result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  DWORD1(v1) = 0;
  RtlInitializeGenericTableAvl(
    &stru_140C447A0,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1406E9010,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406EB580,
    (PRTL_AVL_FREE_ROUTINE)sub_140953690,
    0LL);
  RtlInitializeGenericTableAvl(
    &stru_140C44720,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1406E65D0,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1406EB580,
    (PRTL_AVL_FREE_ROUTINE)sub_140953690,
    0LL);
  qword_140C44898 = (__int64)&qword_140C44890;
  qword_140C44890 = (__int64)&qword_140C44890;
  result = ExInitializeResourceLite(&stru_140C44820);
  if ( result >= 0 )
  {
    LODWORD(v1) = 3014700;
    *((_QWORD *)&v1 + 1) = L"\\Driver\\SoftwareDevice";
    return IoCreateDriver(&v1, (unsigned __int64)sub_140AF3340);
  }
  return result;
}
