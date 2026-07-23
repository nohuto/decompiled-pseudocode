/*
 * XREFs of sub_14062D370 @ 0x14062D370
 * Callers:
 *     <none>
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140791480 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_14062D370()
{
  __int64 v0; // rbx

  v0 = qword_140D05008;
  ExUnsubscribeWnfStateChange(*(_QWORD *)(qword_140D05008 + 4152));
  ExFreePoolWithTag(*(PVOID *)(v0 + 4168), 0);
  *(_QWORD *)(v0 + 4168) = 0LL;
}
