/*
 * XREFs of ?FindFreeRunMbr@SC_DISK_LAYOUT@@QEAA_K_KK0EPEA_K@Z @ 0x1C0010AE4
 * Callers:
 *     ?FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z @ 0x1C0005604 (-FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z.c)
 * Callees:
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 */

unsigned __int64 __fastcall SC_DISK_LAYOUT::FindFreeRunMbr(
        SC_DISK_LAYOUT *this,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned __int64 v8; // rbp
  char v9; // r15
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi

  v6 = 0LL;
  v7 = *((_DWORD *)this + 1);
  v8 = 0x100000LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0xFFFFFFFFLL * a3;
  *a6 = 0LL;
  v12 = 0x100000LL;
  if ( a2 < v11 )
    v11 = a2;
  v13 = v11 - 0x100000;
  if ( v7 >= 4 )
  {
    v7 = 4;
  }
  else if ( !v7 )
  {
    goto LABEL_15;
  }
  v14 = (_QWORD *)((char *)this + 64);
  v15 = v7;
  do
  {
    if ( SC_PART_ENTRY::IsUnused((SC_PART_ENTRY *)(v14 - 2)) )
    {
      v9 = 1;
    }
    else
    {
      v16 = *(v14 - 1);
      if ( v16 > v12 && v16 - v12 > v10 )
      {
        v8 = v12;
        v10 = v16 - v12;
      }
      v12 = v16 + *v14;
    }
    v14 += 18;
    --v15;
  }
  while ( v15 );
LABEL_15:
  if ( v13 > v12 )
  {
    v17 = v13 - v12;
    if ( v17 > v10 )
    {
      v8 = v12;
      v10 = v17;
    }
  }
  if ( !v7 || v9 )
  {
    if ( v10 )
    {
      *a6 = v8;
      return v10;
    }
  }
  return v6;
}
