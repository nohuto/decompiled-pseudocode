/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0010FCC
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1C0011308 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x1C0006EAC (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0008F10 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x1C00113FC (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  SC_DISK *v2; // rax
  unsigned int v3; // r15d
  const __m128i *v4; // r13
  unsigned int v5; // edi
  unsigned int v6; // r12d
  __int64 Pool2; // rax
  struct SC_DISK_LAYOUT *v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rbp
  unsigned __int8 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  MBR_ENTRY *v14; // rax
  char v15; // r12
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // cf
  char v22; // al
  unsigned int v23; // r8d
  struct SC_DISK_LAYOUT *v24; // rax
  struct SC_DISK_LAYOUT *v25; // rsi
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int Sectors; // [rsp+24h] [rbp-64h]
  MBR_ENTRY *v29; // [rsp+28h] [rbp-60h]
  char v32; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]

  v2 = *this;
  *a2 = 0LL;
  v33 = 0;
  v3 = 0;
  v32 = 0;
  v4 = (const __m128i *)*((_QWORD *)v2 + 33);
  v5 = 0;
  Sectors = 0;
  v6 = 0;
  v27 = 0;
  Pool2 = ExAllocatePool2(64LL, 624LL, 1833984851LL);
  v8 = (struct SC_DISK_LAYOUT *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset((void *)(Pool2 + 4), 0, 0x26CuLL);
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 2) = v4[27].m128i_i32[2];
  *((_DWORD *)v8 + 3) = MBR_HEADER::CheckSum(v4);
  if ( v4[31].m128i_i16[7] != -21931 )
    goto LABEL_27;
  v9 = &v4[28].m128i_u8[2];
  while ( 2 )
  {
    v10 = 0LL;
    v11 = v9;
    v12 = 4LL;
    while ( 1 )
    {
      v13 = 18LL * v3;
      if ( *v11 == 5 || *v11 == 15 )
      {
        if ( v10 )
        {
          v15 = 1;
          v32 = 1;
          goto LABEL_19;
        }
        v10 = v11 - 4;
        v6 = v33;
        v14 = (MBR_ENTRY *)(v11 - 4);
      }
      else
      {
        v14 = (MBR_ENTRY *)(v11 - 4);
      }
      v29 = v14;
      if ( MBR_ENTRY::Validate(v14, v6, *((_QWORD *)*this + 31)) )
      {
        *((_DWORD *)v8 + 36 * v3 + 12) = 0;
        v16 = (v6 + (unsigned __int64)*((unsigned int *)v11 + 1)) << *((_DWORD *)*this + 60);
        *((_QWORD *)v8 + 18 * v3 + 7) = v16;
        v17 = *((unsigned int *)v11 + 2);
        v18 = *((_DWORD *)*this + 60);
        *((_DWORD *)v8 + 36 * v3 + 18) = -1;
        *((_QWORD *)v8 + 18 * v3 + 8) = v17 << v18;
        *((_BYTE *)v8 + 144 * v3 + 80) = *v11;
        *((_BYTE *)v8 + 144 * v3 + 81) = *(_BYTE *)v29 == 0x80;
        v19 = *v11;
        if ( (unsigned __int8)v19 > 0xFu || (v20 = 32801, v21 = _bittest(&v20, v19), v22 = 0, !v21) )
          v22 = 1;
        v15 = v32;
        ++v3;
        *((_BYTE *)v8 + 8 * v13 + 82) = v22;
        *((_DWORD *)v8 + 2 * v13 + 21) = *((_DWORD *)v11 + 1);
        *((_QWORD *)v8 + v13 + 11) = *((unsigned int *)v8 + 2);
        *((_QWORD *)v8 + v13 + 12) = v16;
      }
      else
      {
        v15 = 1;
        v32 = 1;
      }
LABEL_19:
      v11 += 16;
      if ( !--v12 )
        break;
      v6 = v27;
    }
    v5 = Sectors;
    if ( v15 || !v10 )
    {
LABEL_27:
      *((_DWORD *)v8 + 1) = (v3 + 3) & 0xFFFFFFFC;
      *a2 = v8;
    }
    else
    {
      v23 = v33;
      v6 = *((_DWORD *)v10 + 2) + v33;
      if ( !v33 )
        v23 = *((_DWORD *)v10 + 2);
      v33 = v23;
      v27 = v6;
      v24 = (struct SC_DISK_LAYOUT *)ExAllocatePool2(64LL, 144 * v3 + 624, 1833984851LL);
      v25 = v24;
      if ( v24 )
      {
        memmove(v24, v8, (int)(144 * v3 + 48));
        memset((char *)v25 + 144 * v3 + 48, 0, 0x240uLL);
        ExFreePoolWithTag(v8, 0);
        v8 = v25;
        Sectors = SC_DISK::ReadSectors(*this, 1, v6, 0LL);
        v5 = Sectors;
        if ( Sectors >= 0 )
        {
          v9 = &v4[28].m128i_u8[2];
          if ( v4[31].m128i_i16[7] != -21931 )
            goto LABEL_27;
          continue;
        }
LABEL_30:
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        v5 = -1073741670;
        if ( v8 )
          goto LABEL_30;
      }
    }
    return v5;
  }
}
