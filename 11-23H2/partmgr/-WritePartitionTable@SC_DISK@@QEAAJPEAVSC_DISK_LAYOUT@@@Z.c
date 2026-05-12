/*
 * XREFs of ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8
 * Callers:
 *     ?DeleteMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0004FF0 (-DeleteMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 * Callees:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005D84 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E7C (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1C000CCB6 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C001145C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_DISK::WritePartitionTable(SC_DISK *this, struct SC_DISK_LAYOUT *a2)
{
  int v3; // edx
  bool v4; // zf
  struct _CREATE_DISK v8; // [rsp+20h] [rbp-28h] BYREF
  SC_DISK *v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 64) == 2;
  memset(&v8.Mbr, 0, 20);
  if ( !v4
    || (v8.PartitionStyle = *(_DWORD *)a2, v3 = SC_DISK::CreatePartitionTable(this, &v8), v3 >= 0)
    && (v3 = SC_DISK::ResetPartitionCache(this), v3 >= 0) )
  {
    if ( !*(_DWORD *)a2 )
    {
      if ( *((_DWORD *)this + 64)
        && (*((_DWORD *)a2 + 1) != 4
         || *((_BYTE *)a2 + 80) != 0xEE
         || *((_BYTE *)a2 + 224)
         || *((_BYTE *)a2 + 368)
         || *((_BYTE *)a2 + 512)) )
      {
        return (unsigned int)-1073741637;
      }
      SC_MBR::Initialize((SC_MBR *)&v9, this);
      return (unsigned int)SC_MBR::WritePartitionTable((SC_MBR *)&v9, a2);
    }
    if ( *(_DWORD *)a2 == 1 )
    {
      v4 = *((_DWORD *)this + 64) == 1;
      v9 = this;
      return (unsigned int)SC_GPT::WritePartitionTable((SC_GPT *)&v9, a2, !v4);
    }
  }
  return (unsigned int)v3;
}
