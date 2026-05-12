/*
 * XREFs of ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E24
 * Callers:
 *     ?Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0007058 (-Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C (-Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E7C (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall SC_DISK::InitializePartitionCache(SC_DISK *this)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 1 << *((_DWORD *)this + 60), 1833984851LL);
  *((_QWORD *)this + 33) = Pool2;
  if ( Pool2 )
    return SC_DISK::ResetPartitionCache(this);
  else
    return 3221225626LL;
}
