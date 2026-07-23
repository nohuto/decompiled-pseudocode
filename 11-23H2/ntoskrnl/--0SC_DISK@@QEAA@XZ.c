/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x1406758B8
 * Callers:
 *     IoCreateDisk @ 0x1409407C0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140940870 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140940970 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140940B40 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140940BF0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140940CD0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140940D90 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140940E40 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140940FB0 (IoWritePartitionTableEx.c)
 * Callees:
 *     <none>
 */

SC_DISK *__fastcall SC_DISK::SC_DISK(SC_DISK *this)
{
  SC_DISK *result; // rax

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &SC_DISK::`vftable';
  *(GUID *)((char *)this + 8) = NullGuid;
  *((_DWORD *)this + 76) = -1;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *((_DWORD *)this + 77) = -1;
  result = this;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_OWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 2;
  *((_QWORD *)this + 33) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  return result;
}
