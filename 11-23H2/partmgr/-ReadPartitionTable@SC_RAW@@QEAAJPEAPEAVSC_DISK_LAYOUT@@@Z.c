/*
 * XREFs of ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0006DF0
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x1C0006EAC (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall SC_RAW::ReadPartitionTable(SC_RAW *this, struct SC_DISK_LAYOUT **a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  MBR_HEADER *v6; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v8; // rbx
  __int64 v10; // rdx
  char v11; // r8

  v2 = *(_QWORD *)this;
  v3 = 0;
  *a2 = 0LL;
  v6 = *(MBR_HEADER **)(v2 + 264);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 192LL, 1833984851LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xC0uLL);
    if ( *(_DWORD *)(*(_QWORD *)this + 224LL) == 11 || *((_WORD *)v6 + 255) == 0xAA55 )
    {
      v8[1] = 1;
      v8[2] = 1;
      v8[3] = MBR_HEADER::CheckSum(v6);
      *((_QWORD *)v8 + 7) = 0LL;
      v10 = *(_QWORD *)(*(_QWORD *)this + 248LL) << *(_DWORD *)(*(_QWORD *)this + 240LL);
      v8[18] = -1;
      *((_QWORD *)v8 + 8) = v10;
      *((_WORD *)v8 + 40) = 4;
      *((_BYTE *)v8 + 82) = v11;
      v8[21] = 0;
      *((_QWORD *)v8 + 11) = (unsigned int)v8[2];
      *((_QWORD *)v8 + 12) = 0LL;
    }
    else
    {
      v8[3] = MBR_HEADER::CheckSum(v6);
    }
    *a2 = (struct SC_DISK_LAYOUT *)v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
