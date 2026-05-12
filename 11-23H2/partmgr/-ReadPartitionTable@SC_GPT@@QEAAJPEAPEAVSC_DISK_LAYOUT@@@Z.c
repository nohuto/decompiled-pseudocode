/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00098F4
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1C00116B0 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x1C0008B68 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1C0008D38 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  SC_DISK *v3; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  int Header; // esi
  SC_DISK *v9; // rdx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  char *Pool2; // rax
  char *v14; // rdi
  char *v15; // r10
  __int64 v16; // rbp
  unsigned int v17; // r11d
  char *v18; // r9
  __int64 v19; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v3 = *this;
  *a2 = 0LL;
  v5 = *((_QWORD *)v3 + 33);
  v6 = 2 - ((*((_BYTE *)v3 + 200) & 1) != 0);
  v7 = 0;
  do
  {
    Header = SC_GPT::ReadHeader(this, v7, (struct GPT_HEADER *)v5);
    if ( Header >= 0 )
    {
      Header = SC_GPT::ReadEntries((SC_GPT *)this, (struct GPT_HEADER *)v5, (struct GPT_ENTRY **)&P);
      if ( Header >= 0 )
        goto LABEL_4;
    }
    ++v7;
  }
  while ( v7 < v6 );
  if ( Header < 0 )
  {
LABEL_27:
    v15 = (char *)P;
    goto LABEL_15;
  }
LABEL_4:
  v9 = *this;
  v10 = *((_DWORD *)*this + 50);
  if ( (v10 & 1) != 0 || v7 || *(_QWORD *)(v5 + 32) == *((_QWORD *)v9 + 31) - 1LL )
    v11 = v10 & 0xFFFFFFFD;
  else
    v11 = v10 | 2;
  *((_DWORD *)v9 + 50) = v11;
  v12 = 144 * *(_DWORD *)(v5 + 80) + 48;
  Pool2 = (char *)ExAllocatePool2(64LL, v12, 1833984851LL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    Header = -1073741670;
    goto LABEL_27;
  }
  memset(Pool2, 0, v12);
  v15 = (char *)P;
  v16 = 0LL;
  *(_DWORD *)v14 = 1;
  v17 = 0;
  *(_OWORD *)(v14 + 8) = *(_OWORD *)(v5 + 56);
  *((_QWORD *)v14 + 3) = *(_QWORD *)(v5 + 40) << *((_DWORD *)*this + 60);
  *((_QWORD *)v14 + 4) = (*(_QWORD *)(v5 + 48) - *(_QWORD *)(v5 + 40) + 1LL) << *((_DWORD *)*this + 60);
  for ( *((_DWORD *)v14 + 10) = *(_DWORD *)(v5 + 80); v17 < *(_DWORD *)(v5 + 80); ++v17 )
  {
    v18 = &v15[128 * (unsigned __int64)v17];
    v19 = *(_QWORD *)v18 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)v18 == *(_QWORD *)&GUID_NULL.Data1 )
      v19 = *((_QWORD *)v18 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v19 )
    {
      v21 = *((_QWORD *)v18 + 4);
      v22 = *((_QWORD *)v18 + 5);
      if ( v21 <= v22 && v21 >= *(_QWORD *)(v5 + 40) && v22 <= *(_QWORD *)(v5 + 48) )
      {
        v23 = 18 * v16;
        *(_DWORD *)&v14[8 * v23 + 48] = 1;
        *(_QWORD *)&v14[8 * v23 + 56] = *((_QWORD *)v18 + 4) << *((_DWORD *)*this + 60);
        v24 = *((_QWORD *)v18 + 5) - *((_QWORD *)v18 + 4) + 1LL;
        v25 = *((_DWORD *)*this + 60);
        *(_DWORD *)&v14[8 * v23 + 72] = -1;
        *(_QWORD *)&v14[8 * v23 + 64] = v24 << v25;
        v16 = (unsigned int)(v16 + 1);
        *(_OWORD *)&v14[8 * v23 + 80] = *(_OWORD *)v18;
        *(_OWORD *)&v14[8 * v23 + 96] = *((_OWORD *)v18 + 1);
        *(_QWORD *)&v14[8 * v23 + 112] = *((_QWORD *)v18 + 6);
        *(_OWORD *)&v14[8 * v23 + 120] = *(_OWORD *)(v18 + 56);
        *(_OWORD *)&v14[8 * v23 + 136] = *(_OWORD *)(v18 + 72);
        *(_OWORD *)&v14[8 * v23 + 152] = *(_OWORD *)(v18 + 88);
        *(_OWORD *)&v14[8 * v23 + 168] = *(_OWORD *)(v18 + 104);
        *(_QWORD *)&v14[8 * v23 + 184] = *((_QWORD *)v18 + 15);
      }
    }
  }
  *((_DWORD *)v14 + 1) = v16;
  *a2 = (struct SC_DISK_LAYOUT *)v14;
LABEL_15:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)Header;
}
