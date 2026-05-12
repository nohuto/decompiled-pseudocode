/*
 * XREFs of ?DeleteMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0004FF0
 * Callers:
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 * Callees:
 *     ?FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z @ 0x1C0005E5C (-FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall SC_DRIVE::DeleteMetadata(SC_DRIVE *this)
{
  int PartitionTable; // eax
  SC_DISK_LAYOUT *v3; // rdi
  int v4; // ebx
  unsigned int Partition; // eax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v9; // rbx
  struct _GUID v10; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  PartitionTable = SC_DISK::ReadPartitionTable(this, (struct SC_DISK_LAYOUT **)&P);
  v3 = (SC_DISK_LAYOUT *)P;
  v4 = PartitionTable;
  if ( PartitionTable >= 0 )
  {
    v10 = PARTITION_SPACES_GUID;
    Partition = SC_DISK_LAYOUT::FindPartition((SC_DISK_LAYOUT *)P, &v10, 0xE7u);
    if ( Partition == -1 )
    {
      v4 = -1073741772;
    }
    else
    {
      v6 = 144LL * Partition;
      memset((char *)v3 + v6 + 48, 0, 0x90uLL);
      *(_DWORD *)((char *)v3 + v6 + 48) = *(_DWORD *)v3;
      *((_BYTE *)v3 + v6 + 76) = 1;
      v10 = (struct _GUID)PARTITION_SPACES_DATA_GUID;
      v7 = SC_DISK_LAYOUT::FindPartition(v3, &v10, 0xD7u);
      if ( v7 != -1 )
      {
        v9 = 144LL * v7;
        memset((char *)v3 + v9 + 48, 0, 0x90uLL);
        *(_DWORD *)((char *)v3 + v9 + 48) = *(_DWORD *)v3;
        *((_BYTE *)v3 + v9 + 76) = 1;
      }
      v4 = SC_DISK::WritePartitionTable(this, v3);
      if ( v4 >= 0 )
      {
        *((_DWORD *)this + 110) = 0;
        *((_QWORD *)this + 56) = 0LL;
        *((_QWORD *)this + 57) = 0LL;
      }
    }
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v4;
}
