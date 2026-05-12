/*
 * XREFs of sub_1C0008F40 @ 0x1C0008F40
 * Callers:
 *     sub_1C0008ED0 @ 0x1C0008ED0 (sub_1C0008ED0.c)
 *     sub_1C003DD30 @ 0x1C003DD30 (sub_1C003DD30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C0050448 @ 0x1C0050448 (sub_1C0050448.c)
 */

__int64 __fastcall sub_1C0008F40(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  char v4; // si
  __int64 v5; // r13
  __int64 v9; // r11
  struct _MDL *v10; // r12
  unsigned int v11; // ebp
  unsigned int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  char v18; // al
  __int64 result; // rax
  bool v20; // cc
  int v21; // eax
  char v22; // si
  __int64 v23; // rcx
  int v24; // ecx
  PMDL v25; // rcx
  PVOID v26; // rbx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // ecx
  unsigned int *Src; // [rsp+30h] [rbp-58h]
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-50h] BYREF
  void *v33; // [rsp+40h] [rbp-48h]
  unsigned int Size; // [rsp+90h] [rbp+8h]
  char v35; // [rsp+A0h] [rbp+18h]
  int v36; // [rsp+A8h] [rbp+20h]

  v3 = a1[21];
  v4 = 0;
  v5 = 0LL;
  v35 = 0;
  v33 = 0LL;
  if ( a3 )
  {
    v27 = sub_1C0050448(v3);
    v9 = a1[19];
    v5 = v27;
    v10 = (struct _MDL *)a1[17];
  }
  else
  {
    v9 = a1[14];
    v10 = (struct _MDL *)a1[13];
  }
  if ( *(_BYTE *)(v3 + 2) != 40 )
  {
    v11 = *(unsigned __int8 *)(v3 + 2);
    v4 = *(_BYTE *)(v3 + 72);
    v36 = *(_DWORD *)(v3 + 12);
    v35 = *(_BYTE *)(v3 + 4);
    Src = *(unsigned int **)(v3 + 24);
    Size = *(_DWORD *)(v3 + 16);
    goto LABEL_22;
  }
  v11 = *(_DWORD *)(v3 + 20);
  v36 = *(_DWORD *)(v3 + 24);
  if ( v5 && a3 )
  {
    Src = *(unsigned int **)(v5 + 16);
    Size = *(_DWORD *)(v5 + 8);
  }
  else
  {
    Src = *(unsigned int **)(v3 + 64);
    Size = *(_DWORD *)(v3 + 60);
  }
  if ( v11 )
  {
    v20 = v11 <= 0x17;
    if ( v11 != 23 )
    {
LABEL_23:
      if ( !v20 )
        goto LABEL_15;
      v21 = 8389124;
      if ( !_bittest(&v21, v11) )
        goto LABEL_15;
      goto LABEL_25;
    }
  }
  v12 = *(_DWORD *)(v3 + 56);
  v13 = 0LL;
  if ( !v12 )
  {
LABEL_22:
    v20 = v11 <= 0x17;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v14 = *(unsigned int *)(v3 + 4 * v13 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_51;
    v15 = *(unsigned int *)(v3 + 16);
    if ( (unsigned int)v14 > (unsigned int)v15 )
      goto LABEL_51;
    v16 = (unsigned int)v14;
    v17 = *(_DWORD *)(v14 + v3);
    if ( v17 == 64 )
    {
      if ( !v11 && v16 + 40 <= v15 )
        goto LABEL_13;
      goto LABEL_51;
    }
    v28 = v17 - 65;
    if ( v28 )
      break;
    if ( !v11 && v16 + 56 <= v15 )
    {
LABEL_13:
      if ( *(_BYTE *)(v16 + v3 + 10) )
        v4 = *(_BYTE *)(v16 + v3 + 24);
      goto LABEL_15;
    }
LABEL_51:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v12 )
      goto LABEL_22;
  }
  v29 = v28 - 1;
  if ( v29 )
  {
    if ( v29 == 30 && v11 == 23 && v16 + 24 <= v15 )
    {
      v22 = *(_BYTE *)(v16 + v3 + 8);
      goto LABEL_26;
    }
    goto LABEL_51;
  }
  if ( v11 || v16 + 40 > v15 )
    goto LABEL_51;
  if ( *(_DWORD *)(v16 + v3 + 12) )
    v4 = *(_BYTE *)(v16 + v3 + 32);
LABEL_15:
  v18 = *(_BYTE *)(a2 + 433);
  if ( v18 != 3 && ((unsigned __int8)(v18 - 1) > 1u || !v11 && ((v4 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_25:
  v22 = v35;
LABEL_26:
  if ( !v9 )
    return 0LL;
  v23 = *(_QWORD *)(a2 + 760);
  MemoryDescriptorList = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(v23 + 8) + 120LL))(
             v23,
             v9,
             v10,
             &MemoryDescriptorList);
  v24 = result;
  if ( (int)result < 0 )
  {
    v26 = v33;
  }
  else
  {
    v25 = MemoryDescriptorList;
    a1[18] = MemoryDescriptorList;
    if ( v10 == v25 )
    {
      v26 = 0LL;
      v24 = -2147483622;
    }
    else
    {
      v26 = (v25->MdlFlags & 5) != 0
          ? v25->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v25, 0, MmCached, 0LL, 0, 0x40000020u);
      v24 = 0;
    }
    result = (unsigned int)v24;
  }
  if ( v24 == -2147483622 )
    return 0LL;
  if ( v24 >= 0 )
  {
    if ( v26 )
    {
      if ( (v36 & 0x80u) == 0 || a3 )
      {
        v30 = Size;
        if ( v11 == 23 && v22 == 9 && *Src )
          v30 = *Src;
        memmove(v26, Src, v30);
      }
      if ( *(_BYTE *)(v3 + 2) == 40 )
      {
        if ( a3 )
          *(_QWORD *)(v5 + 16) = v26;
        else
          *(_QWORD *)(v3 + 64) = v26;
      }
      else
      {
        *(_QWORD *)(v3 + 24) = v26;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  return result;
}
