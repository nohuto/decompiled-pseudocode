/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0
 * Callers:
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005DCC (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1C00116B0 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1C0005CA8 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?FindPartitionGpt@SC_DISK_LAYOUT@@QEAAKU_GUID@@@Z @ 0x1C0006768 (-FindPartitionGpt@SC_DISK_LAYOUT@@QEAAKU_GUID@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0006D68 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1C0008D38 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     RtlComputeCrc32_0 @ 0x1C000B40D (RtlComputeCrc32_0.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1C001EA54 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_GPT *this, struct SC_DISK_LAYOUT *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  int Header; // ebx
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // edx
  unsigned __int64 v12; // r12
  unsigned int v13; // ebp
  unsigned int v14; // edi
  unsigned int PartitionGpt; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r12
  size_t v21; // r15
  char *Pool2; // rax
  char *v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rcx
  char *v26; // r15
  __int64 v27; // r12
  char *v28; // rbx
  int v29; // r9d
  struct _GUID *v30; // rcx
  unsigned __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int128 *v35; // rbx
  UCHAR *v36; // r13
  __int128 v37; // xmm0
  ULONG v38; // eax
  ULONG v39; // r8d
  ULONG v40; // eax
  unsigned __int64 v41; // r8
  UCHAR *v42; // r9
  SC_DISK *v43; // rcx
  unsigned int v44; // r12d
  __int64 v45; // rcx
  __int64 v46; // rax
  ULONG v47; // r8d
  ULONG v48; // eax
  unsigned __int64 v49; // r8
  int v51; // [rsp+20h] [rbp-68h]
  int v52; // [rsp+24h] [rbp-64h]
  unsigned __int64 v53; // [rsp+28h] [rbp-60h]
  unsigned __int64 v54; // [rsp+30h] [rbp-58h]
  PUCHAR Buffer[9]; // [rsp+40h] [rbp-48h] BYREF
  int v56; // [rsp+90h] [rbp+8h]
  __int64 v57; // [rsp+90h] [rbp+8h]
  unsigned int v59; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)this;
  v52 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)this + 264LL);
  if ( !a3 )
  {
    v13 = 2 - ((*(_BYTE *)(v3 + 200) & 1) != 0);
    v14 = 0;
    while ( 1 )
    {
      Header = SC_GPT::ReadHeader(this, v14, (struct GPT_HEADER *)v6);
      if ( Header >= 0 )
        break;
      if ( ++v14 >= v13 )
        return (unsigned int)Header;
    }
    v3 = *(_QWORD *)this;
    v11 = *(_DWORD *)(v6 + 80);
    v12 = *(_QWORD *)(v6 + 40);
    v51 = *(_DWORD *)(v6 + 84);
    v9 = -*(_DWORD *)(*(_QWORD *)this + 236LL) & (v51 * v11 + *(_DWORD *)(*(_QWORD *)this + 236LL) - 1);
    v10 = v9 >> *(_DWORD *)(*(_QWORD *)this + 240LL);
LABEL_14:
    v59 = v11;
    v53 = v12;
    if ( *((_DWORD *)a2 + 1) > v11 )
      return (unsigned int)-1073741811;
    *(_OWORD *)Buffer = PARTITION_LEGACY_BL_GUID;
    PartitionGpt = SC_DISK_LAYOUT::FindPartitionGpt(a2, (struct _GUID *)Buffer);
    if ( PartitionGpt != -1 )
    {
      v16 = 9LL * PartitionGpt;
      v17 = *(_DWORD *)(v3 + 236);
      v18 = *((_QWORD *)a2 + 2 * v16 + 8);
      if ( v17 )
        v18 /= (__int64)v17;
      if ( v12 < (unsigned __int64)v10 + v18 + 2 )
        v12 = v10 + v18 + 2;
      v53 = v12;
    }
    v19 = *(_QWORD *)(v3 + 248);
    if ( (*(_DWORD *)(v3 + 200) & 1) != 0 )
      v20 = v19 - 1;
    else
      v20 = v19 - v10 - 2;
    v21 = v9 + (2 << *(_DWORD *)(v3 + 240));
    v54 = v20;
    Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)v21, 1833984851LL);
    v23 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    memset(Pool2, 0, v21);
    v24 = 0LL;
    v56 = 0;
    v25 = 1 << *(_DWORD *)(*(_QWORD *)this + 240LL);
    v26 = &v23[v21 - v25];
    Buffer[0] = (PUCHAR)&v23[v25];
    if ( *((_DWORD *)a2 + 1) )
    {
      v27 = (__int64)&v23[v25 + 32];
      while ( 1 )
      {
        v28 = (char *)a2 + 144 * v24;
        if ( !SC_PART_ENTRY::IsUnused((SC_PART_ENTRY *)(v28 + 48)) )
        {
          v30 = (struct _GUID *)(v28 + 96);
          if ( *((_QWORD *)v28 + 12) == *(_QWORD *)&GUID_NULL.Data1
            && *((_QWORD *)v28 + 13) == *(_QWORD *)GUID_NULL.Data4 )
          {
            SC_ENV::CreateGuid(v30);
            v29 = v56;
            v30 = (struct _GUID *)(v28 + 96);
          }
          *(_OWORD *)(v27 - 32) = *((_OWORD *)v28 + 5);
          *(struct _GUID *)(v27 - 16) = *v30;
          v31 = *((_QWORD *)v28 + 7);
          v32 = *(_DWORD *)(*(_QWORD *)this + 236LL);
          if ( v32 )
            v31 = (__int64)v31 / v32;
          *(_QWORD *)v27 = v31;
          v33 = *((_QWORD *)v28 + 8) - 1LL + *((_QWORD *)v28 + 7);
          v34 = *(_DWORD *)(*(_QWORD *)this + 236LL);
          if ( v34 )
            v33 /= (__int64)v34;
          *(_QWORD *)(v27 + 8) = v33;
          *(_QWORD *)(v27 + 16) = *((_QWORD *)v28 + 14);
          *(_OWORD *)(v27 + 24) = *(_OWORD *)(v28 + 120);
          *(_OWORD *)(v27 + 40) = *(_OWORD *)(v28 + 136);
          *(_OWORD *)(v27 + 56) = *(_OWORD *)(v28 + 152);
          *(_OWORD *)(v27 + 72) = *(_OWORD *)(v28 + 168);
          *(_QWORD *)(v27 + 88) = *((_QWORD *)v28 + 23);
          if ( v31 < v53 || v33 > v54 )
          {
            Header = -1073741811;
            goto LABEL_54;
          }
          v27 += 128LL;
        }
        v24 = (unsigned int)(v29 + 1);
        v56 = v24;
        if ( (unsigned int)v24 >= *((_DWORD *)a2 + 1) )
        {
          v20 = v54;
          break;
        }
      }
    }
    v35 = (__int128 *)((char *)a2 + 8);
    if ( *((_QWORD *)a2 + 1) == *(_QWORD *)&GUID_NULL.Data1 && *((_QWORD *)a2 + 2) == *(_QWORD *)GUID_NULL.Data4 )
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
    *((_QWORD *)a2 + 4) = (v20 - v53 + 1) << *(_DWORD *)(*(_QWORD *)this + 240LL);
    *((_DWORD *)a2 + 10) = v59;
    v36 = Buffer[0];
    *(_QWORD *)v23 = 0x5452415020494645LL;
    *((_QWORD *)v23 + 5) = v53;
    *((_DWORD *)v23 + 2) = 0x10000;
    *((_QWORD *)v23 + 4) = v10 + v20 + 1;
    *((_DWORD *)v23 + 3) = 92;
    *((_QWORD *)v23 + 3) = 1LL;
    *((_QWORD *)v23 + 6) = v20;
    v37 = *v35;
    *((_QWORD *)v23 + 9) = v53 - v10;
    *((_DWORD *)v23 + 20) = v59;
    *(_OWORD *)(v23 + 56) = v37;
    *((_DWORD *)v23 + 21) = v51;
    v57 = v10;
    v38 = RtlComputeCrc32_0(0, v36, v10 << *(_DWORD *)(*(_QWORD *)this + 240LL));
    v39 = *((_DWORD *)v23 + 3);
    *((_DWORD *)v23 + 22) = v38;
    v40 = RtlComputeCrc32_0(0, (PUCHAR)v23, v39);
    v41 = *((_QWORD *)v23 + 3);
    v42 = (UCHAR *)v23;
    *((_DWORD *)v23 + 4) = v40;
    v43 = *(SC_DISK **)this;
    if ( *((_QWORD *)v23 + 9) == v41 + 1 )
    {
      v44 = ++v10;
    }
    else
    {
      Header = SC_DISK::WriteSectors(v43, 1u, v41, v23);
      if ( Header < 0 )
      {
LABEL_54:
        ExFreePoolWithTag(v23, 0);
        return (unsigned int)Header;
      }
      v43 = *(SC_DISK **)this;
      v44 = v10 + 1;
      v41 = *((_QWORD *)v23 + 9);
      v42 = v36;
    }
    Header = SC_DISK::WriteSectors(v43, v10, v41, v42);
    if ( Header >= 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)this + 200LL) & 1) != 0 )
        goto LABEL_52;
      *(_OWORD *)v26 = *(_OWORD *)v23;
      *((_OWORD *)v26 + 1) = *((_OWORD *)v23 + 1);
      *((_OWORD *)v26 + 2) = *((_OWORD *)v23 + 2);
      *((_OWORD *)v26 + 3) = *((_OWORD *)v23 + 3);
      *((_OWORD *)v26 + 4) = *((_OWORD *)v23 + 4);
      *((_QWORD *)v26 + 10) = *((_QWORD *)v23 + 10);
      *((_DWORD *)v26 + 22) = *((_DWORD *)v23 + 22);
      v45 = *((_QWORD *)v26 + 4);
      v46 = *((_QWORD *)v26 + 3);
      v47 = *((_DWORD *)v26 + 3);
      *((_DWORD *)v26 + 4) = 0;
      *((_QWORD *)v26 + 3) = v45;
      *((_QWORD *)v26 + 9) = v45 - v57;
      *((_QWORD *)v26 + 4) = v46;
      v48 = RtlComputeCrc32_0(0, (PUCHAR)v26, v47);
      v49 = *((_QWORD *)v26 + 9);
      *((_DWORD *)v26 + 4) = v48;
      Header = SC_DISK::WriteSectors(*(SC_DISK **)this, v44, v49, v36);
      if ( Header >= 0 )
      {
LABEL_52:
        *(_DWORD *)(*(_QWORD *)this + 200LL) &= ~2u;
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 458) = -1;
          *(_DWORD *)(v6 + 440) = v52;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)(*(_QWORD *)this + 216LL));
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*(SC_DISK **)this, 1u, 0LL, 0LL);
        }
      }
    }
    goto LABEL_54;
  }
  if ( *(_WORD *)(v6 + 510) == 0xAA55 )
    v52 = *(_DWORD *)(v6 + 440);
  v7 = *((_DWORD *)a2 + 10);
  if ( v7 <= 0x80 )
  {
    v7 = 128;
    goto LABEL_8;
  }
  if ( v7 <= 0x400 )
  {
LABEL_8:
    v51 = 128;
    v9 = -*(_DWORD *)(v3 + 236) & ((v7 << 7) + *(_DWORD *)(v3 + 236) - 1);
    v10 = v9 >> *(_DWORD *)(v3 + 240);
    v11 = v9 >> 7;
    v12 = v10 + 2;
    goto LABEL_14;
  }
  return (unsigned int)-1073741811;
}
