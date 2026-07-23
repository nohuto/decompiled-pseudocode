/*
 * XREFs of sub_1405158A0 @ 0x1405158A0
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
 */

__int64 __fastcall sub_1405158A0(__int64 a1, struct _MDL *a2, __int64 a3, unsigned int a4, unsigned __int64 *a5)
{
  __int64 v5; // r14
  char v6; // r12
  unsigned __int64 *v7; // r13
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  PMDL v11; // r15
  __int64 v12; // rbx
  int v13; // r8d
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r11
  _QWORD *v16; // r11
  unsigned int v17; // r9d
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  char *MappedSystemVa; // rax
  unsigned __int64 *v26; // [rsp+40h] [rbp-61h]
  unsigned __int64 v27; // [rsp+48h] [rbp-59h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-49h] BYREF
  __int64 v30; // [rsp+60h] [rbp-41h]
  unsigned __int64 *v31; // [rsp+68h] [rbp-39h]
  __int128 v32; // [rsp+70h] [rbp-31h]
  unsigned __int64 v33; // [rsp+80h] [rbp-21h]
  __int128 v34; // [rsp+88h] [rbp-19h] BYREF
  __int128 v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+A8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 504);
  MemoryDescriptorList = a2;
  v31 = a5;
  v27 = 0LL;
  v26 = 0LL;
  v36 = 0LL;
  v6 = 0;
  LODWORD(v33) = 0;
  v7 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v8 = sub_140512334((__int64 *)&MemoryDescriptorList, a3, a4, (__int64)&v34);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = sub_1403B2A28(v5);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      *(_BYTE *)(v10 + 516) = 1;
    if ( BYTE4(v36) )
    {
      v26 = (unsigned __int64 *)&v34;
      v7 = (unsigned __int64 *)&v34 + 1;
    }
    v11 = MemoryDescriptorList;
    v12 = 0LL;
    v13 = v36;
    v14 = v35;
    v15 = *((_QWORD *)&v35 + 1) + MemoryDescriptorList->ByteOffset;
    v30 = *((_QWORD *)&v35 + 1);
    v16 = &MemoryDescriptorList[1].Next + (v15 >> 12);
    if ( (_DWORD)v36 != 2 )
    {
      v9 = -1073741637;
      goto LABEL_26;
    }
    v17 = 1;
    if ( (unsigned __int64)v35 >> 12 <= 1 )
    {
LABEL_15:
      v19 = *v16 << 12;
      v27 = v19;
      v20 = *(_DWORD *)(a1 + 440);
      if ( v20 < 0x40 )
        v21 = (1LL << v20) - 1;
      else
        v21 = -1LL;
      if ( v7 )
      {
        v22 = *v7;
        if ( *v7 >= v21 )
          v22 = v21;
        *v7 = v22;
        if ( v19 >= *v26 && v14 + v19 - 1 <= v22 )
          goto LABEL_34;
        v13 = v36;
        v9 = -1073741811;
LABEL_26:
        if ( *(_DWORD *)(v5 + 48) != 2 )
        {
LABEL_36:
          if ( v6 )
            sub_14042A5E0(*(_QWORD *)(v5 + 40), v27);
          goto LABEL_38;
        }
        if ( v13 )
        {
          if ( v13 == 1 )
            v23 = 2LL;
          else
            v23 = 3LL;
        }
        else
        {
          v23 = 1LL;
        }
        LODWORD(v32) = 2;
        *((_QWORD *)&v32 + 1) = v16;
        v33 = v14 >> 12;
        v9 = sub_14042A5E0(*(_QWORD *)(v5 + 40), v23);
        if ( v9 < 0 )
        {
LABEL_38:
          sub_140514E28((__int64 *)v5);
          return (unsigned int)v9;
        }
        v6 = 1;
        v12 = (__int64)v11;
LABEL_34:
        if ( (v11->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v11->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0);
        v9 = sub_1403B27B8(v12, (_RTL_BALANCED_NODE *)&MappedSystemVa[v30], v5, 0);
        if ( v9 >= 0 )
        {
          *v31 = v27;
          return (unsigned int)v9;
        }
        goto LABEL_36;
      }
      if ( (unsigned __int64)v35 + v19 - 1 <= v21 )
        goto LABEL_34;
    }
    else
    {
      v18 = 1LL;
      while ( v16[v18] - 1LL == v16[v17 - 1] )
      {
        v18 = ++v17;
        if ( v17 >= (unsigned __int64)v35 >> 12 )
          goto LABEL_15;
      }
    }
    v9 = -1073741811;
    goto LABEL_26;
  }
  if ( (unsigned int)(v8 + 1073741585) <= 1 )
    return (unsigned int)-1073741811;
  return (unsigned int)v9;
}
