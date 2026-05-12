/*
 * XREFs of ?AddPartitionMbr@SC_DISK@@IEAAJ_K0EPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0010A30
 * Callers:
 *     ?AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C000555C (-AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 */

__int64 __fastcall SC_DISK::AddPartitionMbr(
        SC_DISK *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        struct SC_DISK_LAYOUT **a5)
{
  unsigned int v8; // r11d
  _DWORD *v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // r9
  unsigned int v12; // r10d
  int v13; // r11d

  v8 = 0;
  v9 = *a5;
  v10 = *((_DWORD *)*a5 + 1);
  if ( v10 )
  {
    while ( v8 < 4 )
    {
      if ( SC_PART_ENTRY::IsUnused((SC_PART_ENTRY *)&v9[36 * v8 + 12]) )
      {
        *(_QWORD *)(v11 + 56) = a2;
        *(_DWORD *)(v11 + 48) = v12;
        *(_QWORD *)(v11 + 64) = a3;
        *(_BYTE *)(v11 + 76) = 1;
        *(_BYTE *)(v11 + 80) = -25;
        *(_DWORD *)(v11 + 84) = a2 >> *((_DWORD *)this + 60);
        return v12;
      }
      v8 = v13 + 1;
      if ( v8 >= v10 )
        return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)-1073741275;
}
