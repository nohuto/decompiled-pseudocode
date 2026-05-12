/*
 * XREFs of ?FindFreeRunGpt@SC_DISK_LAYOUT@@QEAA_K_KEPEA_K@Z @ 0x1C0004C14
 * Callers:
 *     ?FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z @ 0x1C0005604 (-FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z.c)
 * Callees:
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 */

unsigned __int64 __fastcall SC_DISK_LAYOUT::FindFreeRunGpt(
        SC_DISK_LAYOUT *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // edx
  __int64 v5; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r9

  v4 = *((_DWORD *)this + 1);
  v5 = 0LL;
  *a4 = 0LL;
  if ( v4 != *((_DWORD *)this + 10) )
  {
    v7 = *((_QWORD *)this + 3);
    v8 = 0LL;
    v9 = v7;
    v10 = v7 + *((_QWORD *)this + 4);
    if ( v4 )
    {
      v11 = (_QWORD *)((char *)this + 64);
      v12 = v4;
      do
      {
        if ( !SC_PART_ENTRY::IsUnused((SC_PART_ENTRY *)(v11 - 2)) )
        {
          v13 = *(v11 - 1);
          if ( v13 > v9 && v13 - v9 > v8 )
          {
            v7 = v9;
            v8 = v13 - v9;
          }
          v9 = v13 + *v11;
        }
        v11 += 18;
        --v12;
      }
      while ( v12 );
    }
    if ( v10 > v9 )
    {
      v14 = v10 - v9;
      if ( v14 > v8 )
      {
        v7 = v9;
        v8 = v14;
      }
    }
    if ( v8 )
    {
      *a4 = v7;
      return v8;
    }
  }
  return v5;
}
