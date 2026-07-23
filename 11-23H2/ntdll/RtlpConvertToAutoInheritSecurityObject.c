/*
 * XREFs of RtlpConvertToAutoInheritSecurityObject @ 0x1800F3B14
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800E2E90 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x180071880 (RtlValidSecurityDescriptor.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F3290 (RtlpConvertAclToAutoInherit.c)
 */

__int64 __fastcall RtlpConvertToAutoInheritSecurityObject(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  int v10; // edi
  __int16 v11; // si
  unsigned __int8 *v12; // r12
  unsigned __int8 *v13; // r15
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  ACL *v17; // rdx
  ACL *v18; // r10
  __int16 v19; // si
  __int64 v20; // rax
  __int16 v21; // di
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  ACL *v25; // rdx
  ACL *v26; // r10
  __int16 v27; // di
  unsigned int v28; // r12d
  unsigned int v29; // r8d
  unsigned int v30; // r15d
  unsigned int v31; // r14d
  PVOID v32; // rbx
  _DWORD *Heap; // rax
  char *v34; // rbx
  __int16 v35; // si
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  unsigned __int8 *v39; // rdx
  unsigned __int8 *v40; // rdx
  char *v41; // rbx
  char v43; // [rsp+50h] [rbp-30h]
  _DWORD v44[3]; // [rsp+54h] [rbp-2Ch] BYREF
  void *Src; // [rsp+60h] [rbp-20h] BYREF
  void *v46; // [rsp+68h] [rbp-18h]
  PVOID HeapHandle; // [rsp+70h] [rbp-10h]
  void *v48; // [rsp+78h] [rbp-8h]
  char v49; // [rsp+C8h] [rbp+48h]

  v6 = 0LL;
  Src = 0LL;
  *(_QWORD *)&v44[1] = 0LL;
  v43 = 0;
  v49 = 0;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  if ( !RtlValidSecurityDescriptor((PSECURITY_DESCRIPTOR)a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  if ( v11 >= 0 )
  {
    v12 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_109;
    }
    v12 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v48 = v12;
  if ( !v12 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v13 = *(unsigned __int8 **)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v13 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v13 = 0LL;
  }
  v46 = v13;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v14 = *(void **)(a2 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_44;
      v14 = (void *)(a2 + *(unsigned int *)(a2 + 12));
    }
    if ( v14 )
    {
      if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !a1 )
      {
        Src = v14;
        v19 = v11 & 0x2010 | 0x800;
        goto LABEL_52;
      }
      if ( v11 >= 0 )
      {
        v15 = *(_QWORD *)(a2 + 16);
        v16 = *(_QWORD *)(a2 + 8);
      }
      else
      {
        if ( *(_DWORD *)(a2 + 8) )
          v15 = a2 + *(unsigned int *)(a2 + 8);
        else
          v15 = 0LL;
        if ( *(_DWORD *)(a2 + 4) )
          v16 = a2 + *(unsigned int *)(a2 + 4);
        else
          v16 = 0LL;
      }
      if ( v11 >= 0 )
      {
        v17 = *(ACL **)(a2 + 24);
      }
      else if ( *(_DWORD *)(a2 + 12) )
      {
        v17 = (ACL *)(a2 + *(unsigned int *)(a2 + 12));
      }
      else
      {
        v17 = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
        goto LABEL_36;
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v18 = *(ACL **)(a1 + 24);
        goto LABEL_41;
      }
      if ( *(_DWORD *)(a1 + 12) )
        v18 = (ACL *)(a1 + *(unsigned int *)(a1 + 12));
      else
LABEL_36:
        v18 = 0LL;
LABEL_41:
      v10 = RtlpConvertAclToAutoInherit(v18, v17, a4, a5, v16, v15, a6, &Src, v44);
      if ( v10 < 0 )
        goto LABEL_109;
      v43 = 1;
      v19 = 2 * (v44[0] & 0x1400 | (2 * (v44[0] & 8 | 4)));
      goto LABEL_52;
    }
  }
LABEL_44:
  v19 = v11 & 0x2010 | 0x800;
  if ( a1 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_52;
      v20 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v20 )
      v19 |= 0x2000u;
  }
LABEL_52:
  v21 = *(_WORD *)(a2 + 2);
  if ( (v21 & 4) == 0 )
    goto LABEL_83;
  if ( v21 < 0 )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      v22 = a2 + *(unsigned int *)(a2 + 16);
      goto LABEL_57;
    }
LABEL_83:
    v27 = *(_WORD *)(a2 + 2) & 4 | 0x1400;
    goto LABEL_84;
  }
  v22 = *(_QWORD *)(a2 + 32);
LABEL_57:
  if ( !v22 )
    goto LABEL_83;
  if ( (v21 & 0x400) != 0 || (v21 & 0x1000) != 0 || !a1 )
  {
    *(_QWORD *)&v44[1] = v22;
    v27 = v21 & 0x1004 | 0x400;
LABEL_85:
    v28 = (4 * v12[1] + 11) & 0xFFFFFFFC;
    if ( v13 )
      v29 = (4 * v13[1] + 11) & 0xFFFFFFFC;
    else
      v29 = 0;
    if ( Src )
      v30 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    if ( v22 )
      v31 = (*(unsigned __int16 *)(v22 + 2) + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    v32 = HeapHandle;
    Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v28 + v31 + v30 + 20 + v29);
    v6 = Heap;
    if ( Heap )
    {
      v34 = (char *)(Heap + 5);
      *(_OWORD *)Heap = 0LL;
      Heap[4] = 0;
      v35 = *((_WORD *)Heap + 1) | 0x8000 | v19;
      *(_BYTE *)Heap = 1;
      *((_WORD *)Heap + 1) = v35;
      if ( Src )
      {
        memmove(Heap + 5, Src, *((unsigned __int16 *)Src + 1));
        v34 += v30;
        v36 = 20;
      }
      else
      {
        v36 = 0;
      }
      v6[3] = v36;
      *((_WORD *)v6 + 1) |= v27;
      if ( *(_QWORD *)&v44[1] )
      {
        memmove(v34, *(const void **)&v44[1], *(unsigned __int16 *)(*(_QWORD *)&v44[1] + 2LL));
        v37 = (int)v34;
        v34 += v31;
        v38 = v37 - (_DWORD)v6;
      }
      else
      {
        v38 = 0;
      }
      v39 = (unsigned __int8 *)v48;
      v6[4] = v38;
      memmove(v34, v39, 4LL * v39[1] + 8);
      v40 = (unsigned __int8 *)v46;
      v6[1] = (_DWORD)v34 - (_DWORD)v6;
      v41 = &v34[v28];
      if ( v40 )
      {
        memmove(v41, v40, 4LL * v40[1] + 8);
        v6[2] = (_DWORD)v41 - (_DWORD)v6;
      }
      v32 = HeapHandle;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    if ( v49 )
      RtlFreeHeap(v32, 0, *(PVOID *)&v44[1]);
    goto LABEL_107;
  }
  if ( v21 >= 0 )
  {
    v23 = *(_QWORD *)(a2 + 16);
    v24 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) )
      v23 = a2 + *(unsigned int *)(a2 + 8);
    else
      v23 = 0LL;
    if ( *(_DWORD *)(a2 + 4) )
      v24 = a2 + *(unsigned int *)(a2 + 4);
    else
      v24 = 0LL;
  }
  if ( v21 >= 0 )
  {
    v25 = *(ACL **)(a2 + 32);
  }
  else if ( *(_DWORD *)(a2 + 16) )
  {
    v25 = (ACL *)(a2 + *(unsigned int *)(a2 + 16));
  }
  else
  {
    v25 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_75;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v26 = *(ACL **)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_75:
      v26 = 0LL;
      goto LABEL_80;
    }
    v26 = (ACL *)(a1 + *(unsigned int *)(a1 + 16));
  }
LABEL_80:
  v10 = RtlpConvertAclToAutoInherit(v26, v25, a4, a5, v24, v23, a6, (PVOID *)&v44[1], v44);
  if ( v10 >= 0 )
  {
    v49 = 1;
    v27 = v44[0] & 0x1408 | 4;
LABEL_84:
    v22 = *(_QWORD *)&v44[1];
    goto LABEL_85;
  }
LABEL_107:
  if ( v43 )
    RtlFreeHeap(HeapHandle, 0, Src);
LABEL_109:
  *a3 = v6;
  return (unsigned int)v10;
}
