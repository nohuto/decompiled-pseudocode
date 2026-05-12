/*
 * XREFs of ?FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z @ 0x1C0005E5C
 * Callers:
 *     ?DeleteMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0004FF0 (-DeleteMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 * Callees:
 *     ?FindPartitionGpt@SC_DISK_LAYOUT@@QEAAKU_GUID@@@Z @ 0x1C0006768 (-FindPartitionGpt@SC_DISK_LAYOUT@@QEAAKU_GUID@@@Z.c)
 */

__int64 __fastcall SC_DISK_LAYOUT::FindPartition(SC_DISK_LAYOUT *this, struct _GUID *a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  unsigned int v6; // edx
  _BYTE *i; // rcx
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1;
  v4 = 0;
  if ( !*(_DWORD *)this )
  {
    v6 = *((_DWORD *)this + 1);
    if ( !v6 )
      return v3;
    for ( i = (char *)this + 80; *i != a3; i += 144 )
    {
      if ( ++v4 >= v6 )
        return v3;
    }
    return v4;
  }
  if ( *(_DWORD *)this == 1 )
  {
    v8 = *a2;
    return SC_DISK_LAYOUT::FindPartitionGpt(this, &v8);
  }
  return v3;
}
