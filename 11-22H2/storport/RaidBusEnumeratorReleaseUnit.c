/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x1C00177A8
 * Callers:
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0014634 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017C9C (RaidBusEnumeratorGetLunList.c)
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0017F88 (RaidAdapterRemoveUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorReleaseUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    RaidAdapterRemoveUnit(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer((PKTIMER)(v3 + 1112));
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 680) = 0;
  }
  return result;
}
