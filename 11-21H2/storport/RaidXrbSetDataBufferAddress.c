/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C0005970
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004120 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003BA30 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004C4B8 (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  char v4; // si
  __int64 v5; // rcx
  PVOID MappedSystemVa; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  struct _MDL *v11; // r12
  unsigned int v12; // r15d
  bool v13; // cc
  int v14; // eax
  char v15; // si
  __int64 v16; // rcx
  __int64 result; // rax
  int v18; // ecx
  PMDL v19; // rcx
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  char v26; // al
  __int64 BidirectionalData; // rax
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // ecx
  unsigned int *Src; // [rsp+30h] [rbp-58h]
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-50h] BYREF
  __int64 v33; // [rsp+40h] [rbp-48h]
  unsigned int Size; // [rsp+90h] [rbp+8h]
  char v35; // [rsp+A0h] [rbp+18h]
  int v36; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  v35 = 0;
  MappedSystemVa = 0LL;
  v33 = 0LL;
  v9 = a1[21];
  if ( a3 )
  {
    BidirectionalData = RaidSrbExGetBidirectionalData(a1[21]);
    v10 = a1[19];
    v5 = BidirectionalData;
    v11 = (struct _MDL *)a1[17];
    v33 = BidirectionalData;
  }
  else
  {
    v10 = a1[14];
    v11 = (struct _MDL *)a1[13];
  }
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v12 = *(unsigned __int8 *)(v9 + 2);
    v4 = *(_BYTE *)(v9 + 72);
    v36 = *(_DWORD *)(v9 + 12);
    v35 = *(_BYTE *)(v9 + 4);
    Src = *(unsigned int **)(v9 + 24);
    Size = *(_DWORD *)(v9 + 16);
    goto LABEL_5;
  }
  v12 = *(_DWORD *)(v9 + 20);
  v36 = *(_DWORD *)(v9 + 24);
  if ( v5 && a3 )
  {
    Src = *(unsigned int **)(v5 + 16);
    Size = *(_DWORD *)(v5 + 8);
  }
  else
  {
    Src = *(unsigned int **)(v9 + 64);
    Size = *(_DWORD *)(v9 + 60);
  }
  if ( v12 )
  {
    v13 = v12 <= 0x17;
    if ( v12 != 23 )
    {
LABEL_6:
      if ( !v13 )
        goto LABEL_27;
      v14 = 8389124;
      if ( !_bittest(&v14, v12) )
        goto LABEL_27;
      goto LABEL_8;
    }
  }
  v20 = *(_DWORD *)(v9 + 56);
  v21 = 0LL;
  if ( !v20 )
  {
LABEL_5:
    v13 = v12 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v22 = *(unsigned int *)(v9 + 4 * v21 + 120);
    if ( (unsigned int)v22 < 0x80 )
      goto LABEL_50;
    v23 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v22 > (unsigned int)v23 )
      goto LABEL_50;
    v24 = (unsigned int)v22;
    v25 = *(_DWORD *)(v22 + v9);
    if ( v25 == 64 )
    {
      if ( !v12 && v24 + 40 <= v23 )
        goto LABEL_25;
      goto LABEL_50;
    }
    v28 = v25 - 65;
    if ( v28 )
      break;
    if ( !v12 && v24 + 56 <= v23 )
    {
LABEL_25:
      if ( *(_BYTE *)(v24 + v9 + 10) )
        v4 = *(_BYTE *)(v24 + v9 + 24);
      goto LABEL_27;
    }
LABEL_50:
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v20 )
      goto LABEL_5;
  }
  v29 = v28 - 1;
  if ( v29 )
  {
    if ( v29 == 30 && v12 == 23 && v24 + 24 <= v23 )
    {
      v15 = *(_BYTE *)(v24 + v9 + 8);
      goto LABEL_9;
    }
    goto LABEL_50;
  }
  if ( v12 || v24 + 40 > v23 )
    goto LABEL_50;
  if ( *(_DWORD *)(v24 + v9 + 12) )
    v4 = *(_BYTE *)(v24 + v9 + 32);
LABEL_27:
  v26 = *(_BYTE *)(a2 + 433);
  if ( v26 != 3 && ((unsigned __int8)(v26 - 1) > 1u || !v12 && ((v4 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_8:
  v15 = v35;
LABEL_9:
  if ( !v10 )
    return 0LL;
  v16 = *(_QWORD *)(a2 + 752);
  MemoryDescriptorList = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(v16 + 8) + 120LL))(
             v16,
             v10,
             v11,
             &MemoryDescriptorList);
  v18 = result;
  if ( (int)result >= 0 )
  {
    v19 = MemoryDescriptorList;
    a1[18] = MemoryDescriptorList;
    if ( v11 == v19 )
    {
      v18 = -2147483622;
    }
    else
    {
      if ( (v19->MdlFlags & 5) != 0 )
        MappedSystemVa = v19->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000020u);
      v18 = 0;
    }
    result = (unsigned int)v18;
  }
  if ( v18 == -2147483622 )
    return 0LL;
  if ( v18 >= 0 )
  {
    if ( MappedSystemVa )
    {
      if ( (v36 & 0x80u) == 0 || a3 )
      {
        v30 = Size;
        if ( v12 == 23 && v15 == 9 && *Src )
          v30 = *Src;
        memmove(MappedSystemVa, Src, v30);
      }
      if ( *(_BYTE *)(v9 + 2) == 40 )
      {
        if ( a3 )
          *(_QWORD *)(v33 + 16) = MappedSystemVa;
        else
          *(_QWORD *)(v9 + 64) = MappedSystemVa;
      }
      else
      {
        *(_QWORD *)(v9 + 24) = MappedSystemVa;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  return result;
}
