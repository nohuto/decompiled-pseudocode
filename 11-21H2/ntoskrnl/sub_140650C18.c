/*
 * XREFs of sub_140650C18 @ 0x140650C18
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
 *     <none>
 */

__int64 __fastcall sub_140650C18(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_14000A518;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)a1 = off_14000A4D0;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)&xmmword_140010DE8;
  *(_DWORD *)(a1 + 288) = -1;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 292) = -1;
  result = a1;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_OWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 2;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  return result;
}
