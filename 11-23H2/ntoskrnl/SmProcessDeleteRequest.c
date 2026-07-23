/*
 * XREFs of SmProcessDeleteRequest @ 0x1409D6F2C
 * Callers:
 *     SmSetStoreInformation @ 0x1407E8044 (SmSetStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     SmKmStoreDelete @ 0x1407B75C8 (SmKmStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessDeleteRequest(__int64 *a1, int a2, char a3)
{
  __int64 ProcessPartition; // rax
  char v5; // r8
  __int64 v6; // [rsp+48h] [rbp+20h]

  if ( a2 != 8 )
    return 3221225990LL;
  if ( a3 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = *a1;
  if ( (unsigned __int8)*a1 != 1 || (*a1 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  return SmKmStoreDelete(ProcessPartition, HIDWORD(v6), v5);
}
