/*
 * XREFs of SPCallServerHandleFileIntegrityUpdate @ 0x14065EA54
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x14041E9C0 (ZwSetCachedSigningLevel.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleFileIntegrityUpdate(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v6; // rax
  unsigned int v7; // r13d
  unsigned int m; // edx
  __int64 v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // rcx
  unsigned int v12; // edx
  _OWORD *v13; // r14
  void *v14; // r15
  NTSTATUS v15; // eax
  struct _FILE_OBJECT *v16; // r12
  int v17; // ebx
  __int64 *v18; // r15
  __int64 v19; // rdx
  __int64 *v20; // r14
  __int64 v21; // rax
  void **v22; // rax
  unsigned int *v23; // rax
  unsigned int v25; // eax
  _DWORD *Pool2; // rax
  unsigned int v27; // ecx
  _DWORD *n; // rdx
  __int64 v29; // r10
  unsigned int *v30; // r9
  unsigned int *v31; // rax
  unsigned int i; // r8d
  __int64 v33; // r10
  unsigned int *v34; // r9
  unsigned int *v35; // rax
  unsigned int j; // r8d
  __int64 v37; // r10
  unsigned int *v38; // r9
  unsigned int *v39; // rax
  unsigned int k; // r8d
  unsigned int v41; // r9d
  void **v42; // r8
  void *v43; // r11
  unsigned int v44; // r9d
  unsigned int *v45; // r8
  unsigned int v46; // r9d
  unsigned int *v47; // r8
  __int64 v48; // r13
  __int64 v49; // r15
  __int64 v50; // r8
  unsigned int v51; // eax
  unsigned int v52; // eax
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  __int128 v55; // [rsp+58h] [rbp-18h]
  unsigned int v56; // [rsp+B0h] [rbp+40h]
  unsigned int v57; // [rsp+B8h] [rbp+48h]
  __int64 v58; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v58) = a3;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned int **)(a1 + 8);
  if ( !v11 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v31 = v11;
  for ( i = 0; i < 3; ++i )
  {
    v29 = *v31;
    v30 = v31 + 1;
    if ( v31 + 1 < v31 )
      return (unsigned int)-1073741675;
    v31 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      return (unsigned int)-1073741675;
  }
  v41 = *v31;
  v42 = (void **)(v31 + 1);
  if ( v31 + 1 < v31 )
    return (unsigned int)-1073741675;
  v22 = 0LL;
  if ( v41 )
    v22 = v42;
  if ( v41 != 8 )
    return (unsigned int)-1073741762;
  v43 = *v22;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v35 = v11;
  for ( j = 0; j < 4; ++j )
  {
    v33 = *v35;
    v34 = v35 + 1;
    if ( v35 + 1 < v35 )
      return (unsigned int)-1073741675;
    v35 = (unsigned int *)((char *)v34 + v33);
    if ( (unsigned int *)((char *)v34 + v33) < v34 )
      return (unsigned int)-1073741675;
  }
  v44 = *v35;
  v45 = v35 + 1;
  if ( v35 + 1 < v35 )
    return (unsigned int)-1073741675;
  v23 = 0LL;
  if ( v44 )
    v23 = v45;
  if ( v44 != 4 )
    return (unsigned int)-1073741789;
  v56 = *v23;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v39 = v11;
  for ( k = 0; k < 5; ++k )
  {
    v37 = *v39;
    v38 = v39 + 1;
    if ( v39 + 1 < v39 )
      return (unsigned int)-1073741675;
    v39 = (unsigned int *)((char *)v38 + v37);
    if ( (unsigned int *)((char *)v38 + v37) < v38 )
      return (unsigned int)-1073741675;
  }
  v46 = *v39;
  v47 = v39 + 1;
  if ( v39 + 1 >= v39 )
  {
    v6 = 0LL;
    if ( v46 )
      v6 = v47;
    if ( v46 == 4 )
    {
      v7 = *v6;
      v57 = *v6;
      if ( *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v9 = *v11;
          v10 = v11 + 1;
          if ( v11 + 1 < v11 )
            return (unsigned int)-1073741675;
          v11 = (unsigned int *)((char *)v10 + v9);
          if ( (unsigned int *)((char *)v10 + v9) < v10 )
            return (unsigned int)-1073741675;
        }
        v12 = *v11;
        if ( v11 + 1 < v11 )
          return (unsigned int)-1073741675;
        v13 = 0LL;
        if ( v12 )
          v13 = v11 + 1;
        if ( v12 != 16 )
          return (unsigned int)-1073741811;
        Handle = 0LL;
        v14 = 0LL;
        v55 = 0LL;
        if ( !v43 || !v13 )
          return (unsigned int)-1073741811;
        Object = 0LL;
        v15 = ObReferenceObjectByHandle(v43, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
        v16 = (struct _FILE_OBJECT *)Object;
        v17 = v15;
        if ( v15 < 0 )
        {
LABEL_31:
          if ( Handle )
            ZwClose(Handle);
          if ( v16 )
            ObfDereferenceObject(v16);
          if ( v14 )
            ExFreePoolWithTag(v14, 0);
          if ( v17 < 0 )
            return (unsigned int)v17;
          v50 = *(_QWORD *)(a4 + 8);
          if ( v50 )
          {
            v27 = 0;
            for ( n = *(_DWORD **)(a4 + 8); v27 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v52) )
            {
              v52 = *n + 4;
              if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v52) < n )
                return (unsigned int)-1073741675;
              ++v27;
            }
            if ( n + 1 < n )
              return (unsigned int)-1073741675;
            if ( (unsigned __int64)(n + 2) > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *n = 4;
            n[1] = 0;
          }
          else
          {
            v51 = *(_DWORD *)(a4 + 4);
            if ( v51 + 8 < v51 )
            {
              *(_DWORD *)(a4 + 4) = -1;
              return (unsigned int)-1073741675;
            }
            *(_DWORD *)(a4 + 4) = v51 + 8;
          }
          ++*(_DWORD *)a4;
          v25 = *(_DWORD *)(a4 + 4);
          if ( !v25 )
            return (unsigned int)-1073741762;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, v25, 542329939LL);
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = Pool2;
          *(_DWORD *)a4 = 0;
          if ( Pool2 + 1 < Pool2 )
            return (unsigned int)-1073741675;
          v17 = 0;
          if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
            return (unsigned int)-1073741789;
          *Pool2 = 4;
          Pool2[1] = 0;
          ++*(_DWORD *)a4;
          return (unsigned int)v17;
        }
        LODWORD(v58) = 0;
        v18 = (__int64 *)ExAllocatePool2(256LL, 584LL, 542329939LL);
        if ( !v18 )
          goto LABEL_84;
        v17 = FsRtlKernelFsControlFile(v16, v18, 0x248u, (__int64)&v58);
        if ( v17 >= 0 )
        {
          if ( (unsigned int)v58 >= 0x40 )
          {
            v48 = *v18;
            v17 = FsRtlKernelFsControlFile(v16, v18, 0x248u, (__int64)&v58);
            if ( v17 >= 0 )
            {
              if ( (unsigned int)v58 >= 0x40 )
              {
                *((_QWORD *)&v55 + 1) = v18[3];
                *(_QWORD *)&v55 = v48;
              }
              else
              {
                v17 = -1073741762;
              }
            }
            v7 = v57;
          }
          else
          {
            v17 = -1073741762;
          }
        }
        ExFreePoolWithTag(v18, 0);
        if ( v17 < 0 )
          goto LABEL_85;
        if ( v55 != *v13 )
        {
          v17 = -1073741762;
          goto LABEL_85;
        }
        if ( v56 )
        {
          *(_QWORD *)&v55 = -1LL;
          *((_QWORD *)&v55 + 1) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_29:
          v21 = ExAllocatePool2(256LL, 58LL, 542329939LL);
          if ( v21 )
          {
            *(_OWORD *)v21 = 0LL;
            *(_OWORD *)(v21 + 16) = 0LL;
            *(_OWORD *)(v21 + 32) = 0LL;
            *(_QWORD *)(v21 + 48) = 0LL;
            *(_WORD *)(v21 + 56) = 0;
            *(_WORD *)(v21 + 6) = 24;
            *(_BYTE *)(v21 + 5) = 25;
            qmemcpy((void *)(v21 + 8), "$Kernel.Purge.AppxFICache", 25);
            *(_OWORD *)(v21 + 34) = v55;
            *(_QWORD *)(v21 + 50) = 0LL;
            v14 = (void *)v21;
            v17 = FsRtlSetKernelEaFile(v16);
            goto LABEL_31;
          }
          goto LABEL_84;
        }
        if ( ObOpenObjectByPointer(v16, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &Handle) >= 0 )
        {
          LOBYTE(v19) = v7 - 2 > 1 ? 0 : 6;
          ZwSetCachedSigningLevel(2LL, v19);
        }
        LODWORD(v58) = 0;
        v20 = (__int64 *)ExAllocatePool2(256LL, 584LL, 542329939LL);
        if ( !v20 )
        {
LABEL_84:
          v17 = -1073741801;
          goto LABEL_85;
        }
        v17 = FsRtlKernelFsControlFile(v16, v20, 0x248u, (__int64)&v58);
        if ( v17 >= 0 )
        {
          if ( (unsigned int)v58 < 0x40 )
            goto LABEL_98;
          v49 = *v20;
          v17 = FsRtlKernelFsControlFile(v16, v20, 0x248u, (__int64)&v58);
          if ( v17 < 0 )
            goto LABEL_28;
          if ( (unsigned int)v58 < 0x40 )
          {
LABEL_98:
            v17 = -1073741762;
          }
          else
          {
            *((_QWORD *)&v55 + 1) = v20[3];
            *(_QWORD *)&v55 = v49;
          }
        }
LABEL_28:
        ExFreePoolWithTag(v20, 0);
        if ( v17 < 0 )
        {
LABEL_85:
          v14 = 0LL;
          goto LABEL_31;
        }
        goto LABEL_29;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)-1073741675;
}
