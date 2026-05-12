/*
 * XREFs of ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E7C
 * Callers:
 *     ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930 (-InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E24 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1C0011308 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0008F10 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?IsVbr@SC_DISK@@QEAAEXZ @ 0x1C000CC06 (-IsVbr@SC_DISK@@QEAAEXZ.c)
 */

__int64 __fastcall SC_DISK::ResetPartitionCache(SC_DISK *this)
{
  int Sectors; // edi
  __int64 v3; // rdx

  Sectors = SC_DISK::ReadSectors(this, 1u, 0LL, 0LL);
  if ( Sectors >= 0 )
  {
    v3 = *((_QWORD *)this + 33);
    if ( *(_WORD *)(v3 + 510) == 0xAA55 )
    {
      if ( *(_BYTE *)(v3 + 450) != 0xEE || *(_BYTE *)(v3 + 466) || *(_BYTE *)(v3 + 482) || *(_BYTE *)(v3 + 498) )
        *((_DWORD *)this + 64) = SC_DISK::IsVbr(this) != 0 ? 2 : 0;
      else
        *((_DWORD *)this + 64) = 1;
    }
    else
    {
      *((_DWORD *)this + 64) = 2;
    }
  }
  return (unsigned int)Sectors;
}
