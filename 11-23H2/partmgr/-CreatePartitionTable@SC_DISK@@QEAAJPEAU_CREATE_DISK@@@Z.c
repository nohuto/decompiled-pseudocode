/*
 * XREFs of ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005D84
 * Callers:
 *     ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930 (-InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 * Callees:
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005DCC (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1C000CCB6 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0010F18 (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x1C00119A0 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 */

__int64 __fastcall SC_DISK::CreatePartitionTable(SC_DISK *this, struct _CREATE_DISK *a2)
{
  struct _CREATE_DISK *v3; // r9
  SC_DISK *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2->PartitionStyle == PARTITION_STYLE_MBR )
    {
      SC_MBR::Initialize((SC_MBR *)&v4, this);
      return SC_MBR::CreatePartitionTable((SC_MBR *)&v4, v3);
    }
    if ( a2->PartitionStyle == PARTITION_STYLE_GPT )
    {
      v4 = this;
      return SC_GPT::CreatePartitionTable((SC_GPT *)&v4, a2);
    }
    if ( a2->PartitionStyle != PARTITION_STYLE_RAW )
      return 3221225659LL;
  }
  v4 = this;
  return SC_RAW::CreatePartitionTable((SC_RAW *)&v4);
}
