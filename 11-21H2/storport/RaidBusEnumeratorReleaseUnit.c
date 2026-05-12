/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x1C001BF3C
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C003C948 (RaidBusEnumeratorProbeLunZero.c)
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C001C558 (RaidAdapterRemoveUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorReleaseUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    RaidAdapterRemoveUnit(*a1, *(_QWORD *)(a2 + 8));
    KeCancelTimer((PKTIMER)(v3 + 1056));
    result = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(result + 684) = 0;
  }
  return result;
}
