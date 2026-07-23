/*
 * XREFs of sub_140930388 @ 0x140930388
 * Callers:
 *     IoCreateDisk @ 0x140930510 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1409305C0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1409306C0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140930890 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140930940 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140930A20 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140930AE0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140930B90 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140930D00 (IoWritePartitionTableEx.c)
 * Callees:
 *     sub_1406510A0 @ 0x1406510A0 (sub_1406510A0.c)
 *     sub_14065120C @ 0x14065120C (sub_14065120C.c)
 */

__int64 __fastcall sub_140930388(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 376) = a2;
  result = sub_1406510A0(a1);
  if ( (int)result >= 0 )
    return sub_14065120C(a1);
  return result;
}
