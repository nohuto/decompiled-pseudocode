/*
 * XREFs of RaidEvaluateDsmLedState @ 0x1C004E90C
 * Callers:
 *     RaidDsmGetLedState @ 0x1C004E668 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x1C004E720 (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x1C004E7E8 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x1C004E8A0 (RaidDsmSetLedState.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaBuildDsmRequestForLedState @ 0x1C004CF80 (RaBuildDsmRequestForLedState.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C004F66C (RaidSyncAcpiEvalMethod.c)
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
  memset(a4, 0, *a5);
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
