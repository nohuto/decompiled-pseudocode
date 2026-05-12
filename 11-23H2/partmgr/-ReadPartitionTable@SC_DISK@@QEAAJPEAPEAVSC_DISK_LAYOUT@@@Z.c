/*
 * XREFs of ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4
 * Callers:
 *     ?DeleteMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0004FF0 (-DeleteMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 *     ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930 (-InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 * Callees:
 *     ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0006DF0 (-ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E7C (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00098F4 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1C000CCB6 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0010FCC (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_DISK::ReadPartitionTable(SC_DISK *this, struct SC_DISK_LAYOUT **a2)
{
  int v3; // r8d
  int v5; // r8d
  __int64 result; // rax
  SC_DISK *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 64);
  if ( !v3 )
    goto LABEL_9;
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = this;
      return SC_RAW::ReadPartitionTable((SC_RAW *)&v7, a2);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    v7 = this;
    result = SC_GPT::ReadPartitionTable((SC_GPT *)&v7, a2);
    if ( (int)result < 0 )
    {
      result = SC_DISK::ResetPartitionCache(this);
      if ( (int)result >= 0 )
      {
LABEL_9:
        SC_MBR::Initialize((SC_MBR *)&v7, this);
        return SC_MBR::ReadPartitionTable((SC_MBR *)&v7, a2);
      }
    }
  }
  return result;
}
