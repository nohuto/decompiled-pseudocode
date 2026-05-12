/*
 * XREFs of ?PmCheckServicePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAVSC_DISK_LAYOUT@@@Z @ 0x1C0026AF8
 * Callers:
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 * Callees:
 *     ?GetEntry@SC_DISK_LAYOUT@@QEAAPEAVSC_PART_ENTRY@@K@Z @ 0x1C0010BE0 (-GetEntry@SC_DISK_LAYOUT@@QEAAPEAVSC_PART_ENTRY@@K@Z.c)
 */

__int64 __fastcall PmCheckServicePartitions(struct _DEVICE_EXTENSION *a1, struct SC_DISK_LAYOUT *a2)
{
  unsigned int v2; // edi
  char *v4; // rsi
  char *i; // rbx
  unsigned int v6; // r9d
  struct SC_PART_ENTRY *Entry; // r8
  int v8; // r9d
  unsigned int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rcx

  v2 = 0;
  if ( *((_DWORD *)a1 + 228) == 1 )
  {
    v4 = (char *)a1 + 896;
    v2 = -1073741790;
    for ( i = (char *)*((_QWORD *)a1 + 112); i != v4; i = *(char **)i )
    {
      if ( i[53] )
      {
        v6 = 0;
        if ( !*((_DWORD *)a2 + 1) )
          return v2;
        while ( 1 )
        {
          Entry = SC_DISK_LAYOUT::GetEntry(a2, v6);
          if ( *((_QWORD *)Entry + 1) == v10 )
            break;
          v6 = v8 + 1;
          if ( v6 >= v9 )
            return v2;
        }
        if ( *((_QWORD *)Entry + 2) != *((_QWORD *)i + 5) || *((_QWORD *)Entry + 8) != *((_QWORD *)i + 11) )
          return v2;
        v11 = *((_QWORD *)Entry + 4) - *((_QWORD *)i + 7);
        if ( !v11 )
          v11 = *((_QWORD *)Entry + 5) - *((_QWORD *)i + 8);
        if ( v11 || RtlCompareMemory((char *)Entry + 72, i + 96, 0x48uLL) != 72 )
          return v2;
      }
    }
    return 0;
  }
  return v2;
}
