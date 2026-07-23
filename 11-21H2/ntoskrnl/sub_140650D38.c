/*
 * XREFs of sub_140650D38 @ 0x140650D38
 * Callers:
 *     sub_140650E30 @ 0x140650E30 (sub_140650E30.c)
 *     sub_140930210 @ 0x140930210 (sub_140930210.c)
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
 *     sub_140651FB8 @ 0x140651FB8 (sub_140651FB8.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

__int64 __fastcall sub_140650D38(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *a1 = off_14000A4D0;
  v2 = a1[46];
  if ( v2 )
    sub_1406D9550(v2);
  v3 = a1[45];
  if ( v3 )
    sub_1406D9550(v3);
  v4 = a1[44];
  if ( v4 )
    sub_1406D9550(v4);
  v5 = a1[43];
  if ( v5 )
    sub_1406D9550(v5);
  v6 = a1[42];
  if ( v6 )
    sub_1406D9550(v6);
  v7 = a1[41];
  if ( v7 )
    sub_1406D9550(v7);
  v8 = a1[40];
  if ( v8 )
    sub_1406D9550(v8);
  v9 = a1[39];
  if ( v9 )
    sub_1406D9550(v9);
  v10 = a1[38];
  if ( v10 )
    sub_1406D9550(v10);
  v11 = a1[37];
  if ( v11 )
    sub_1406D9550(v11);
  v12 = a1[35];
  if ( v12 )
    sub_1406D9550(v12);
  v13 = a1[33];
  if ( v13 )
    sub_1406D9550(v13);
  return sub_140651FB8(a1);
}
