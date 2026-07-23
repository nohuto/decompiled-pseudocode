/*
 * XREFs of MiConvertCrossPartitionChargeTypeToAggregate @ 0x1406598F8
 * Callers:
 *     MiApplyCrossPartitionCharges @ 0x14065946C (MiApplyCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x14065B828 (MiReturnCrossPartitionCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertCrossPartitionChargeTypeToAggregate(int a1)
{
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF9) != 0 )
    return 8LL;
  result = 7LL;
  if ( a1 == 4 )
    return 8LL;
  return result;
}
