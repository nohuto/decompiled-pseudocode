/*
 * XREFs of ?ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ @ 0x140676E18
 * Callers:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1406770A0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SC_DEVICE::ExtractFaultDomainIds(SC_DEVICE *this)
{
  __int64 v2; // r9
  unsigned int v3; // eax

  memset((char *)this + 88, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    v3 = 4;
    if ( *(_DWORD *)(v2 + 8) < 4u )
      v3 = *(_DWORD *)(v2 + 8);
    memmove((char *)this + 88, (const void *)(v2 + 12), 16LL * v3);
  }
  return 0LL;
}
