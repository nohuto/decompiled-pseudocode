/*
 * XREFs of SPCallServerHandleFileIntegrityUpdate @ 0x1407FEA04
 * Callers:
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x14041E3B0 (ZwSetCachedSigningLevel.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     FsRtlKernelFsControlFile @ 0x140772AB0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5C30 (FsRtlSetKernelEaFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleFileIntegrityUpdate(__int64 a1, void *a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  int v7; // ebx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r10
  unsigned int *v12; // r9
  unsigned int *v13; // rax
  unsigned int v14; // esi
  unsigned int m; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int v18; // edx
  _OWORD *v19; // r15
  void *v20; // r12
  __int64 Pool2; // r12
  __int64 v22; // r8
  __int64 v23; // rsi
  char *v24; // rax
  void **v25; // r10
  void *v26; // r10
  unsigned int *v27; // rax
  unsigned int j; // r9d
  __int64 v29; // r11
  unsigned int *v30; // r8
  unsigned int *v31; // rax
  unsigned int v32; // r13d
  unsigned int *v33; // rax
  unsigned int k; // r9d
  __int64 v35; // r11
  unsigned int *v36; // r8
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned int v39; // ecx
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  _DWORD *v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // r9d
  unsigned int v46; // r9d
  unsigned int *v47; // r8
  unsigned int v48; // r9d
  unsigned int *v49; // r8
  __int64 v50; // rax
  unsigned int v51; // esi
  SE_SIGNING_LEVEL v52; // cl
  __int64 v53; // r15
  unsigned int v54; // eax
  unsigned int v55; // eax
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v57; // [rsp+48h] [rbp-18h]
  __int128 v58; // [rsp+50h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v60; // [rsp+B0h] [rbp+50h] BYREF

  LODWORD(v60) = a3;
  Object = a2;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v6;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v45 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v25 = 0LL;
  if ( v45 )
    v25 = (void **)(v9 + 1);
  if ( v45 != 8 )
    return (unsigned int)-1073741762;
  v26 = *v25;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v27 = v6;
  for ( j = 0; j < 4; ++j )
  {
    v29 = *v27;
    v30 = v27 + 1;
    if ( v27 + 1 < v27 )
      return (unsigned int)-1073741675;
    v27 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      return (unsigned int)-1073741675;
  }
  v46 = *v27;
  v47 = v27 + 1;
  if ( v27 + 1 < v27 )
    return (unsigned int)-1073741675;
  v31 = 0LL;
  if ( v46 )
    v31 = v47;
  if ( v46 != 4 )
    return (unsigned int)-1073741789;
  v32 = *v31;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v33 = v6;
  for ( k = 0; k < 5; ++k )
  {
    v35 = *v33;
    v36 = v33 + 1;
    if ( v33 + 1 < v33 )
      return (unsigned int)-1073741675;
    v33 = (unsigned int *)((char *)v36 + v35);
    if ( (unsigned int *)((char *)v36 + v35) < v36 )
      return (unsigned int)-1073741675;
  }
  v48 = *v33;
  v49 = v33 + 1;
  if ( v33 + 1 < v33 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( v48 )
    v13 = v49;
  if ( v48 != 4 )
    return (unsigned int)-1073741789;
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v16 = *v6;
    v17 = v6 + 1;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v6;
  if ( v6 + 1 < v6 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( v18 )
    v19 = v6 + 1;
  if ( v18 != 16 )
    return (unsigned int)-1073741811;
  Handle = 0LL;
  v20 = 0LL;
  v58 = 0LL;
  if ( !v26 || !v19 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(v26, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  if ( v7 < 0 )
    goto LABEL_31;
  LODWORD(v60) = 0;
  Pool2 = ExAllocatePool2(256LL, 584LL, 542329939LL);
  if ( !Pool2 )
    goto LABEL_29;
  v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590068, 0LL, 0, (_SLIST_ENTRY *)Pool2, 0x248u, (ULONG *)&v60);
  if ( v7 >= 0 )
  {
    if ( (unsigned int)v60 >= 0x40 )
    {
      v57 = *(_QWORD *)Pool2;
      v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590059, 0LL, 0, (_SLIST_ENTRY *)Pool2, 0x248u, (ULONG *)&v60);
      if ( v7 < 0 )
        goto LABEL_41;
      if ( (unsigned int)v60 >= 0x40 )
      {
        v50 = *(_QWORD *)(Pool2 + 24);
        *(_QWORD *)&v58 = v57;
        *((_QWORD *)&v58 + 1) = v50;
        goto LABEL_41;
      }
    }
    v7 = -1073741762;
  }
LABEL_41:
  ExFreePoolWithTag((PVOID)Pool2, 0);
  if ( v7 < 0 )
    goto LABEL_30;
  if ( v58 != *v19 )
  {
    v7 = -1073741762;
    goto LABEL_30;
  }
  if ( v32 )
  {
    *(_QWORD *)&v58 = -1LL;
    *((_QWORD *)&v58 + 1) = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &Handle) >= 0 )
    {
      if ( v14 && (v51 = v14 - 1) != 0 && v51 - 1 <= 1 )
        v52 = 6;
      else
        v52 = 0;
      ZwSetCachedSigningLevel(2u, v52, &Handle, 1u, Handle);
    }
    LODWORD(v60) = 0;
    v23 = ExAllocatePool2(256LL, 584LL, 542329939LL);
    if ( !v23 )
      goto LABEL_29;
    v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590068, 0LL, 0, (_SLIST_ENTRY *)v23, 0x248u, (ULONG *)&v60);
    if ( v7 >= 0 )
    {
      if ( (unsigned int)v60 >= 0x40 )
      {
        v53 = *(_QWORD *)v23;
        v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590059, 0LL, 0, (_SLIST_ENTRY *)v23, 0x248u, (ULONG *)&v60);
        if ( v7 >= 0 )
        {
          if ( (unsigned int)v60 >= 0x40 )
          {
            *((_QWORD *)&v58 + 1) = *(_QWORD *)(v23 + 24);
            *(_QWORD *)&v58 = v53;
          }
          else
          {
            v7 = -1073741762;
          }
        }
      }
      else
      {
        v7 = -1073741762;
      }
    }
    ExFreePoolWithTag((PVOID)v23, 0);
    if ( v7 < 0 )
      goto LABEL_30;
  }
  v24 = (char *)ExAllocatePool2(256LL, 58LL, 542329939LL);
  if ( !v24 )
  {
LABEL_29:
    v7 = -1073741801;
LABEL_30:
    v20 = 0LL;
    goto LABEL_31;
  }
  *(_OWORD *)v24 = 0LL;
  *((_OWORD *)v24 + 1) = 0LL;
  *((_OWORD *)v24 + 2) = 0LL;
  *((_QWORD *)v24 + 6) = 0LL;
  *((_WORD *)v24 + 28) = 0;
  *((_WORD *)v24 + 3) = 24;
  v24[5] = 25;
  qmemcpy(v24 + 8, "$Kernel.Purge.AppxFICache", 25);
  *(_OWORD *)(v24 + 34) = v58;
  *(_QWORD *)(v24 + 50) = 0LL;
  v20 = v24;
  v7 = FsRtlSetKernelEaFile((PFILE_OBJECT)Object, v24, 58);
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v7 >= 0 )
  {
    v22 = *(_QWORD *)(a4 + 8);
    if ( !v22 )
    {
      v54 = *(_DWORD *)(a4 + 4);
      if ( v54 + 8 < v54 )
        goto LABEL_113;
      *(_DWORD *)(a4 + 4) = v54 + 8;
LABEL_72:
      ++*(_DWORD *)a4;
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      v38 = ExAllocatePool2(256LL, *(unsigned int *)(a4 + 4), 542329939LL);
      if ( !v38 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v38;
      *(_DWORD *)a4 = 0;
      v37 = *(_QWORD *)(a4 + 8);
      if ( v37 )
      {
        v42 = 0;
        v43 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v44 = *v43 + 4;
            if ( *v43 >= 0xFFFFFFFC || (_DWORD *)((char *)v43 + v44) < v43 )
              break;
            ++v42;
            v43 = (_DWORD *)((char *)v43 + v44);
            if ( v42 >= *(_DWORD *)a4 )
              goto LABEL_121;
          }
        }
        else
        {
LABEL_121:
          if ( v43 + 1 >= v43 )
          {
            v7 = 0;
            if ( (unsigned __int64)(v43 + 2) <= v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v43 = 4;
              v43[1] = 0;
              ++*(_DWORD *)a4;
              return (unsigned int)v7;
            }
            return (unsigned int)-1073741789;
          }
        }
        return (unsigned int)-1073741675;
      }
      v55 = *(_DWORD *)(a4 + 4);
      if ( v55 + 8 >= v55 )
      {
        *(_DWORD *)(a4 + 4) = v55 + 8;
        ++*(_DWORD *)a4;
        return 0;
      }
LABEL_113:
      *(_DWORD *)(a4 + 4) = -1;
      return (unsigned int)-1073741675;
    }
    v39 = 0;
    v40 = *(_DWORD **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v41 = *v40 + 4;
        if ( *v40 >= 0xFFFFFFFC || (_DWORD *)((char *)v40 + v41) < v40 )
          break;
        ++v39;
        v40 = (_DWORD *)((char *)v40 + v41);
        if ( v39 >= *(_DWORD *)a4 )
          goto LABEL_115;
      }
    }
    else
    {
LABEL_115:
      if ( v40 + 1 >= v40 )
      {
        if ( (unsigned __int64)(v40 + 2) <= v22 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v40 = 4;
          v40[1] = 0;
          goto LABEL_72;
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v7;
}
