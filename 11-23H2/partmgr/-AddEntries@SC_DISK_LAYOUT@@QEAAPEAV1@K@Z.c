/*
 * XREFs of ?AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z @ 0x1C0005AA8
 * Callers:
 *     ?AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005864 (-AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930 (-InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     memmove @ 0x1C000B740 (memmove.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

struct SC_DISK_LAYOUT *__fastcall SC_DISK_LAYOUT::AddEntries(SC_DISK_LAYOUT *this)
{
  __int64 v2; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v4; // rbx

  v2 = (unsigned int)(144 * *((_DWORD *)this + 1) + 192);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v2, 1833984851LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, this, (unsigned int)(v2 - 144));
    memset(&v4[36 * *((unsigned int *)this + 1) + 12], 0, 0x90uLL);
    ++v4[1];
  }
  return (struct SC_DISK_LAYOUT *)v4;
}
