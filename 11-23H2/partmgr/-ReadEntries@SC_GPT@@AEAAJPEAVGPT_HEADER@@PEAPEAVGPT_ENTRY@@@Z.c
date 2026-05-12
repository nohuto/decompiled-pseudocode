/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x1C0008B68
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00098F4 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x1C0008C08 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_GPT *this, struct GPT_HEADER *a2, struct GPT_ENTRY **a3)
{
  __int64 v3; // rax
  int v5; // edx
  struct GPT_ENTRY *Pool2; // rax
  struct GPT_ENTRY *v9; // rdi
  int Entries; // ebx

  v3 = *(_QWORD *)this;
  v5 = *((_DWORD *)a2 + 21);
  *a3 = 0LL;
  Pool2 = (struct GPT_ENTRY *)ExAllocatePool2(
                                64LL,
                                -*(_DWORD *)(v3 + 236) & (unsigned int)(*(_DWORD *)(v3 + 236)
                                                                      + *((_DWORD *)a2 + 20) * v5
                                                                      - 1),
                                1833984851LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Entries = SC_GPT::ReadEntries(this, a2, Pool2);
    if ( Entries < 0 )
      ExFreePoolWithTag(v9, 0);
    else
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Entries;
}
