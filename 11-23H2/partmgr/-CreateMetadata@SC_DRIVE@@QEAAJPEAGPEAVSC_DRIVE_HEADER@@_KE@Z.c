/*
 * XREFs of ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704
 * Callers:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 * Callees:
 *     ?ZeroMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0005388 (-ZeroMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z @ 0x1C0005474 (-WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z.c)
 *     ?AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C000555C (-AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930 (-InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z @ 0x1C0005E5C (-FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_DRIVE::CreateMetadata(SC_DRIVE *this, unsigned __int16 *a2, struct SC_DRIVE_HEADER *a3)
{
  int PartitionTable; // ebx
  __int64 v7; // r8
  struct _GUID v8; // xmm6
  struct SC_DISK_LAYOUT *v9; // rdi
  unsigned int Partition; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-40h]
  unsigned __int8 v13; // [rsp+28h] [rbp-38h]
  struct _GUID v14; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF

  P = 0LL;
  PartitionTable = SC_DISK::ReadPartitionTable(this, (struct SC_DISK_LAYOUT **)&P);
  if ( PartitionTable < 0 )
    goto LABEL_14;
  if ( *((_DWORD *)this + 64) == 2 )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    PartitionTable = SC_DRIVE::InitializePartitionTable(this, (struct SC_DISK_LAYOUT **)&P);
    if ( PartitionTable < 0 )
    {
LABEL_14:
      v9 = (struct SC_DISK_LAYOUT *)P;
      goto LABEL_9;
    }
    v8 = PARTITION_SPACES_GUID;
  }
  else
  {
    v8 = PARTITION_SPACES_GUID;
    v9 = (struct SC_DISK_LAYOUT *)P;
    v14 = PARTITION_SPACES_GUID;
    if ( SC_DISK_LAYOUT::FindPartition((SC_DISK_LAYOUT *)P, &v14, 0xE7u) != -1 )
    {
      PartitionTable = -1073741771;
      goto LABEL_9;
    }
  }
  v14 = v8;
  PartitionTable = SC_DISK::AddPartition(this, &v14, v7, a2, v12, v13, (struct SC_DISK_LAYOUT **)&P);
  if ( PartitionTable < 0 )
    goto LABEL_14;
  v9 = (struct SC_DISK_LAYOUT *)P;
  v14 = PARTITION_SPACES_GUID;
  Partition = SC_DISK_LAYOUT::FindPartition((SC_DISK_LAYOUT *)P, &v14, 0xE7u);
  *((_DWORD *)this + 110) = *((_DWORD *)v9 + 36 * Partition + 18);
  *((_QWORD *)this + 56) = *((_QWORD *)v9 + 18 * Partition + 7);
  *((_QWORD *)this + 57) = *((_QWORD *)v9 + 18 * Partition + 8);
  PartitionTable = SC_DRIVE::ZeroMetadata(this);
  if ( PartitionTable >= 0 )
  {
    PartitionTable = SC_DRIVE::WriteHeader(this, a3);
    if ( PartitionTable >= 0 )
      PartitionTable = SC_DISK::WritePartitionTable(this, v9);
  }
LABEL_9:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)PartitionTable;
}
