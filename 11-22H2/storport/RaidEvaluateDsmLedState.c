/*
 * XREFs of RaidEvaluateDsmLedState @ 0x1C0058FAC
 * Callers:
 *     RaidDsmGetLedState @ 0x1C0058BC0 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x1C0058C78 (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x1C0058D40 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x1C0058DF8 (RaidDsmSetLedState.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaBuildDsmRequestForLedState @ 0x1C0056498 (RaBuildDsmRequestForLedState.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C005B7BC (RaidSyncAcpiEvalMethod.c)
 */

__int64 __fastcall RaidEvaluateDsmLedState(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        int a3,
        union _LARGE_INTEGER *a4,
        ULONG *a5)
{
  __int64 Pool; // rax
  __int64 v10; // rdx
  void *v11; // rbx
  int v13; // esi
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v14[0]) = 0;
  memset_0(a4, 0, *a5);
  Pool = RaidAllocatePool(64LL, 64LL, 1128358226LL, (__int64)DeviceObject);
  v11 = (void *)Pool;
  if ( !Pool )
    return 3221225626LL;
  RaBuildDsmRequestForLedState(Pool, v10, a2, a3);
  v13 = RaidSyncAcpiEvalMethod(DeviceObject, v11, 0x40u, a4, *a5, (__int64)v14);
  if ( v13 >= 0 )
    *a5 = v14[0];
  ExFreePoolWithTag(v11, 0x43416152u);
  return (unsigned int)v13;
}
