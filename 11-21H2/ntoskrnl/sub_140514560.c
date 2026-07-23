/*
 * XREFs of sub_140514560 @ 0x140514560
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403B27B8 @ 0x1403B27B8 (sub_1403B27B8.c)
 *     sub_1403B2A28 @ 0x1403B2A28 (sub_1403B2A28.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140512334 @ 0x140512334 (sub_140512334.c)
 *     sub_140514E28 @ 0x140514E28 (sub_140514E28.c)
 *     MmGetCacheAttributeEx @ 0x140585C20 (MmGetCacheAttributeEx.c)
 */

__int64 __fastcall sub_140514560(__int64 a1, struct _MDL *a2, __int64 a3, unsigned int a4, unsigned __int64 *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // r12d
  ULONG_PTR v7; // r14
  int v8; // eax
  int CacheAttribute; // ebx
  PMDL v10; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  unsigned __int64 v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // r10
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rdx
  bool v23; // cc
  char v24; // si
  char v25; // al
  char *MappedSystemVa; // rax
  char v28; // [rsp+40h] [rbp-81h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-79h] BYREF
  ULONG v30[2]; // [rsp+50h] [rbp-71h]
  int v31; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-61h]
  ULONG v33[2]; // [rsp+68h] [rbp-59h]
  __int64 v34; // [rsp+70h] [rbp-51h]
  _QWORD *v35; // [rsp+78h] [rbp-49h]
  __int128 v36; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-31h]
  __int64 v38; // [rsp+98h] [rbp-29h]
  unsigned __int64 *v39; // [rsp+A0h] [rbp-21h]
  __int128 v40; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-9h]
  __int64 v42; // [rsp+C8h] [rbp+7h]

  v5 = a1;
  v34 = a1;
  v6 = 0;
  v39 = a5;
  MemoryDescriptorList = a2;
  v7 = *(_QWORD *)(a1 + 504);
  v42 = 0LL;
  LODWORD(v37) = 0;
  v31 = 0;
  *(_QWORD *)v30 = 0LL;
  *(_QWORD *)v33 = 0LL;
  v40 = 0LL;
  v32 = 0LL;
  v41 = 0LL;
  v28 = 0;
  v36 = 0LL;
  v8 = sub_140512334((__int64 *)&MemoryDescriptorList, a3, a4, (__int64)&v40);
  CacheAttribute = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)(v8 + 1073741585) <= 1 )
      return (unsigned int)-1073741811;
    return (unsigned int)CacheAttribute;
  }
  v10 = MemoryDescriptorList;
  v38 = *((_QWORD *)&v41 + 1);
  v11 = v41;
  v35 = &MemoryDescriptorList[1].Next
      + ((*((_QWORD *)&v41 + 1) + (unsigned __int64)MemoryDescriptorList->ByteOffset) >> 12);
  if ( (_DWORD)v42 )
  {
    if ( (_DWORD)v42 == 1 )
      LODWORD(MemoryDescriptorList) = 2;
    else
      LODWORD(MemoryDescriptorList) = 3;
  }
  else
  {
    LODWORD(MemoryDescriptorList) = 1;
  }
  CacheAttribute = sub_1403B2A28(v7);
  if ( CacheAttribute >= 0 )
  {
    v12 = *(_QWORD *)(v7 + 56);
    if ( v12 )
      *(_BYTE *)(v12 + 516) = 1;
    if ( BYTE4(v42) )
    {
      *(_QWORD *)v30 = &v40;
      *(_QWORD *)v33 = (char *)&v40 + 8;
    }
    if ( !*(_BYTE *)(v5 + 437) )
    {
      if ( v11 >> 12 )
      {
        v13 = 0LL;
        do
        {
          CacheAttribute = MmGetCacheAttributeEx(v35[v13] << 12, 0LL, &v31);
          if ( CacheAttribute < 0 )
            goto LABEL_59;
          if ( v31 )
          {
            CacheAttribute = -1073741811;
            goto LABEL_59;
          }
          v13 = ++v6;
        }
        while ( v6 < v11 >> 12 );
      }
      v5 = v34;
    }
    v14 = v11 >> 12;
    v37 = v11 >> 12;
    LODWORD(v36) = 2;
    *((_QWORD *)&v36 + 1) = v35;
    if ( *(int *)(v7 + 48) > 2 )
    {
LABEL_47:
      v24 = 0;
      CacheAttribute = sub_14042A5E0(*(_QWORD *)(v7 + 40), (unsigned int)MemoryDescriptorList);
      if ( CacheAttribute < 0 )
      {
LABEL_54:
        v16 = v32;
        v25 = v28;
LABEL_55:
        if ( v24 )
        {
          sub_14042A5E0(*(_QWORD *)(v7 + 40), &v36);
        }
        else if ( v25 )
        {
          sub_14042A5E0(*(_QWORD *)(v7 + 40), v16);
        }
        goto LABEL_59;
      }
      v28 = 1;
      v15 = (__int64)v10;
LABEL_49:
      if ( (v10->MdlFlags & 5) != 0 )
        MappedSystemVa = (char *)v10->MappedSystemVa;
      else
        MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0);
      CacheAttribute = sub_1403B27B8(v15, (_RTL_BALANCED_NODE *)&MappedSystemVa[v38], v7, 0);
      if ( CacheAttribute >= 0 )
      {
        *v39 = v32;
        return (unsigned int)CacheAttribute;
      }
      goto LABEL_54;
    }
    v15 = 0LL;
    v16 = *v35 << 12;
    v17 = 1;
    v32 = v16;
    if ( v14 > 1 )
    {
      v18 = 1LL;
      while ( v35[v18] - 1LL == v35[v17 - 1] )
      {
        v18 = ++v17;
        if ( v17 >= v14 )
          goto LABEL_26;
      }
      CacheAttribute = -1073741811;
LABEL_45:
      if ( *(_DWORD *)(v7 + 48) != 2 )
      {
        v24 = 0;
        v25 = 0;
        goto LABEL_55;
      }
      goto LABEL_47;
    }
LABEL_26:
    v19 = *(_DWORD *)(v5 + 440);
    if ( v19 < 0x40 )
      v20 = (1LL << v19) - 1;
    else
      v20 = -1LL;
    if ( *(_QWORD *)v33 )
    {
      v21 = **(_QWORD **)v33;
      if ( **(_QWORD **)v33 >= v20 )
        v21 = v20;
      v22 = *(unsigned __int64 **)v30;
      **(_QWORD **)v33 = v21;
      if ( v16 < *v22 )
      {
LABEL_37:
        CacheAttribute = -1073741811;
        goto LABEL_45;
      }
      v23 = v16 + v11 - 1 <= v21;
    }
    else
    {
      v23 = v16 + v11 - 1 <= v20;
    }
    if ( v23 )
    {
      if ( *(_DWORD *)(v7 + 48) == 1 )
      {
        CacheAttribute = sub_14042A5E0(*(_QWORD *)(v7 + 40), (unsigned int)MemoryDescriptorList);
        if ( CacheAttribute < 0 )
        {
LABEL_59:
          sub_140514E28(v7);
          return (unsigned int)CacheAttribute;
        }
        v24 = 1;
        goto LABEL_49;
      }
      if ( (_DWORD)v42 == 2 )
      {
        v24 = 0;
        goto LABEL_49;
      }
      CacheAttribute = -1073741637;
      goto LABEL_45;
    }
    goto LABEL_37;
  }
  return (unsigned int)CacheAttribute;
}
