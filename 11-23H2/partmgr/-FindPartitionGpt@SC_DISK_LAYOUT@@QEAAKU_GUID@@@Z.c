/*
 * XREFs of ?FindPartitionGpt@SC_DISK_LAYOUT@@QEAAKU_GUID@@@Z @ 0x1C0006768
 * Callers:
 *     ?FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z @ 0x1C0005E5C (-FindPartition@SC_DISK_LAYOUT@@QEAAKU_GUID@@E@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SC_DISK_LAYOUT::FindPartitionGpt(SC_DISK_LAYOUT *this, struct _GUID *a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r8
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 1);
  v3 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)this + 18 * v3 + 10) - *(_QWORD *)&a2->Data1;
      if ( !v5 )
        v5 = *((_QWORD *)this + 18 * v3 + 11) - *(_QWORD *)a2->Data4;
      if ( !v5 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v2 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LODWORD(v3) = -1;
  }
  return (unsigned int)v3;
}
