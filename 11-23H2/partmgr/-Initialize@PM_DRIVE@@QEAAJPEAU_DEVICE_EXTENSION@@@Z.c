/*
 * XREFs of ?Initialize@PM_DRIVE@@QEAAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0007058
 * Callers:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 * Callees:
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E24 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1C00094B0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 */

__int64 __fastcall PM_DRIVE::Initialize(PM_DRIVE *this, struct _DEVICE_EXTENSION *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 73) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this);
  return result;
}
