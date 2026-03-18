/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1409404E8
 * Callers:
 *     IoCreateDisk @ 0x140940670 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140940720 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140940820 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1409409F0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140940AA0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140940B80 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x140940C40 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140940CF0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140940E60 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x140675910 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140675A74 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 v5; // r8

  *((_QWORD *)this + 49) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this, v4, v5);
  return result;
}
