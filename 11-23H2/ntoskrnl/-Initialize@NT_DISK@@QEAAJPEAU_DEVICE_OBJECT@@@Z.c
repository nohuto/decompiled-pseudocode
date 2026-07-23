/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140940638
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
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x140675DF0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140675F54 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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
