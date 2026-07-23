/*
 * XREFs of EtwpUnsubscribeContainerStateWnf @ 0x1405FCE00
 * Callers:
 *     <none>
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x1407E1360 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void EtwpUnsubscribeContainerStateWnf()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  ExUnsubscribeWnfStateChange(*(_QWORD *)(EtwpHostSiloState + 4152));
  ExFreePoolWithTag(*(PVOID *)(v0 + 4168), 0);
  *(_QWORD *)(v0 + 4168) = 0LL;
}
