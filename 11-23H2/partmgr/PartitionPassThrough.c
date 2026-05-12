/*
 * XREFs of PartitionPassThrough @ 0x1C00027B4
 * Callers:
 *     PartitionIoctlBandmgmt @ 0x1C001C20C (PartitionIoctlBandmgmt.c)
 *     PartitionIoctlQueryProperty @ 0x1C001C65C (PartitionIoctlQueryProperty.c)
 * Callees:
 *     PartitionSendRequest @ 0x1C0002A90 (PartitionSendRequest.c)
 */

__int64 __fastcall PartitionPassThrough(__int64 a1, __int64 a2)
{
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return PartitionSendRequest();
}
