/*
 * XREFs of ?AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005864
 * Callers:
 *     ?AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C000555C (-AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z @ 0x1C0005AA8 (-AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0005B38 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1C001EA54 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_DISK::AddPartitionGpt(
        SC_DISK *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4,
        unsigned __int16 *a5,
        struct SC_DISK_LAYOUT **a6)
{
  struct SC_DISK_LAYOUT *v9; // rax
  unsigned __int64 v10; // rdx
  struct SC_DISK_LAYOUT *v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // r10
  __int64 v14; // r10
  int Guid; // edi

  v9 = SC_DISK_LAYOUT::AddEntries(*a6, a2);
  v11 = v9;
  if ( v9 )
  {
    v12 = (__int128)*a4;
    v13 = 144LL * (unsigned int)(*((_DWORD *)v9 + 1) - 1);
    *(_DWORD *)((char *)v9 + v13 + 48) = 1;
    *(_QWORD *)((char *)v9 + v13 + 56) = a2;
    *(_QWORD *)((char *)v9 + v13 + 64) = a3;
    *((_BYTE *)v9 + v13 + 76) = 1;
    *(_OWORD *)((char *)v9 + v13 + 80) = v12;
    RtlStringCbCopyW((unsigned __int16 *)((char *)v9 + v13 + 120), v10, a5);
    Guid = SC_ENV::CreateGuid((struct _GUID *)((char *)v11 + v14 + 96));
    if ( Guid < 0 )
    {
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      ExFreePoolWithTag(*a6, 0);
      *a6 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Guid;
}
