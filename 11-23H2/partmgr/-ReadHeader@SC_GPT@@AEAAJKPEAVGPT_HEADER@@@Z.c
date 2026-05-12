/*
 * XREFs of ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1C0008D38
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00098F4 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0008F10 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     RtlComputeCrc32_0 @ 0x1C000B40D (RtlComputeCrc32_0.c)
 */

__int64 __fastcall SC_GPT::ReadHeader(SC_DISK **this, int a2, struct GPT_HEADER *a3)
{
  unsigned __int64 v5; // rbx
  int Sectors; // esi
  int v7; // ebx
  ULONG v8; // eax

  if ( a2 )
    v5 = *((_QWORD *)*this + 31) - 1LL;
  else
    v5 = 1LL;
  Sectors = SC_DISK::ReadSectors(*this, 1u, v5, a3);
  if ( Sectors >= 0 )
  {
    Sectors = -1073741774;
    if ( *(_QWORD *)a3 == 0x5452415020494645LL
      && *((_DWORD *)a3 + 2) == 0x10000
      && *((_DWORD *)a3 + 3) == 92
      && *((_DWORD *)a3 + 21) == 128
      && (unsigned int)(*((_DWORD *)a3 + 20) - 1) <= 0x3FF
      && *((_QWORD *)a3 + 3) == v5 )
    {
      v7 = *((_DWORD *)a3 + 4);
      *((_DWORD *)a3 + 4) = 0;
      v8 = RtlComputeCrc32_0(0, (PUCHAR)a3, 0x5Cu);
      *((_DWORD *)a3 + 4) = v7;
      if ( v8 == v7 )
        return *((_QWORD *)a3 + 5) < (unsigned __int64)(((-*((_DWORD *)*this + 59) & (unsigned int)(*((_DWORD *)*this + 59)
                                                                                                  + *((_DWORD *)a3 + 20) * *((_DWORD *)a3 + 21)
                                                                                                  - 1)) >> *((_DWORD *)*this + 60))
                                                      + 2)
             ? 0xC0000032
             : 0;
    }
  }
  return (unsigned int)Sectors;
}
