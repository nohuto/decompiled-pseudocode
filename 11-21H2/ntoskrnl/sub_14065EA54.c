/*
 * XREFs of sub_14065EA54 @ 0x14065EA54
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

__int64 __fastcall sub_14065EA54(__int64 a1, __int64 a2, int a3, __int64 a4)
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
  __int64 *v19; // r14
  __int64 v20; // rax
  void **v21; // rax
  unsigned int *v22; // rax
  unsigned int v24; // eax
  _DWORD *Pool2; // rax
  unsigned int v26; // ecx
  _DWORD *n; // rdx
  __int64 v28; // r10
  unsigned int *v29; // r9
  unsigned int *v30; // rax
  unsigned int i; // r8d
  __int64 v32; // r10
  unsigned int *v33; // r9
  unsigned int *v34; // rax
  unsigned int j; // r8d
  __int64 v36; // r10
  unsigned int *v37; // r9
  unsigned int *v38; // rax
  unsigned int k; // r8d
  unsigned int v40; // r9d
  void **v41; // r8
  void *v42; // r11
  unsigned int v43; // r9d
  unsigned int *v44; // r8
  unsigned int v45; // r9d
  unsigned int *v46; // r8
  __int64 v47; // r13
  __int64 v48; // r15
  __int64 v49; // r8
  unsigned int v50; // eax
  unsigned int v51; // eax
  HANDLE TargetFile; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  __int128 v54; // [rsp+58h] [rbp-18h]
  unsigned int v55; // [rsp+B0h] [rbp+40h]
  unsigned int v56; // [rsp+B8h] [rbp+48h]
  __int64 v57; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v57) = a3;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned int **)(a1 + 8);
  if ( !v11 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v30 = v11;
  for ( i = 0; i < 3; ++i )
  {
    v28 = *v30;
    v29 = v30 + 1;
    if ( v30 + 1 < v30 )
      return (unsigned int)-1073741675;
    v30 = (unsigned int *)((char *)v29 + v28);
    if ( (unsigned int *)((char *)v29 + v28) < v29 )
      return (unsigned int)-1073741675;
  }
  v40 = *v30;
  v41 = (void **)(v30 + 1);
  if ( v30 + 1 < v30 )
    return (unsigned int)-1073741675;
  v21 = 0LL;
  if ( v40 )
    v21 = v41;
  if ( v40 != 8 )
    return (unsigned int)-1073741762;
  v42 = *v21;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v34 = v11;
  for ( j = 0; j < 4; ++j )
  {
    v32 = *v34;
    v33 = v34 + 1;
    if ( v34 + 1 < v34 )
      return (unsigned int)-1073741675;
    v34 = (unsigned int *)((char *)v33 + v32);
    if ( (unsigned int *)((char *)v33 + v32) < v33 )
      return (unsigned int)-1073741675;
  }
  v43 = *v34;
  v44 = v34 + 1;
  if ( v34 + 1 < v34 )
    return (unsigned int)-1073741675;
  v22 = 0LL;
  if ( v43 )
    v22 = v44;
  if ( v43 != 4 )
    return (unsigned int)-1073741789;
  v55 = *v22;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v38 = v11;
  for ( k = 0; k < 5; ++k )
  {
    v36 = *v38;
    v37 = v38 + 1;
    if ( v38 + 1 < v38 )
      return (unsigned int)-1073741675;
    v38 = (unsigned int *)((char *)v37 + v36);
    if ( (unsigned int *)((char *)v37 + v36) < v37 )
      return (unsigned int)-1073741675;
  }
  v45 = *v38;
  v46 = v38 + 1;
  if ( v38 + 1 >= v38 )
  {
    v6 = 0LL;
    if ( v45 )
      v6 = v46;
    if ( v45 == 4 )
    {
      v7 = *v6;
      v56 = *v6;
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
        TargetFile = 0LL;
        v14 = 0LL;
        v54 = 0LL;
        if ( !v42 || !v13 )
          return (unsigned int)-1073741811;
        Object = 0LL;
        v15 = ObReferenceObjectByHandle(v42, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
        v16 = (struct _FILE_OBJECT *)Object;
        v17 = v15;
        if ( v15 < 0 )
        {
LABEL_31:
          if ( TargetFile )
            ZwClose(TargetFile);
          if ( v16 )
            ObfDereferenceObject(v16);
          if ( v14 )
            ExFreePoolWithTag(v14, 0);
          if ( v17 < 0 )
            return (unsigned int)v17;
          v49 = *(_QWORD *)(a4 + 8);
          if ( v49 )
          {
            v26 = 0;
            for ( n = *(_DWORD **)(a4 + 8); v26 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v51) )
            {
              v51 = *n + 4;
              if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v51) < n )
                return (unsigned int)-1073741675;
              ++v26;
            }
            if ( n + 1 < n )
              return (unsigned int)-1073741675;
            if ( (unsigned __int64)(n + 2) > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *n = 4;
            n[1] = 0;
          }
          else
          {
            v50 = *(_DWORD *)(a4 + 4);
            if ( v50 + 8 < v50 )
            {
              *(_DWORD *)(a4 + 4) = -1;
              return (unsigned int)-1073741675;
            }
            *(_DWORD *)(a4 + 4) = v50 + 8;
          }
          ++*(_DWORD *)a4;
          v24 = *(_DWORD *)(a4 + 4);
          if ( !v24 )
            return (unsigned int)-1073741762;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, v24, 542329939LL);
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
        LODWORD(v57) = 0;
        v18 = (__int64 *)ExAllocatePool2(256LL, 584LL, 542329939LL);
        if ( !v18 )
          goto LABEL_84;
        v17 = FsRtlKernelFsControlFile(v16, v18, 0x248u, (__int64)&v57);
        if ( v17 >= 0 )
        {
          if ( (unsigned int)v57 >= 0x40 )
          {
            v47 = *v18;
            v17 = FsRtlKernelFsControlFile(v16, v18, 0x248u, (__int64)&v57);
            if ( v17 >= 0 )
            {
              if ( (unsigned int)v57 >= 0x40 )
              {
                *((_QWORD *)&v54 + 1) = v18[3];
                *(_QWORD *)&v54 = v47;
              }
              else
              {
                v17 = -1073741762;
              }
            }
            v7 = v56;
          }
          else
          {
            v17 = -1073741762;
          }
        }
        ExFreePoolWithTag(v18, 0);
        if ( v17 < 0 )
          goto LABEL_85;
        if ( v54 != *v13 )
        {
          v17 = -1073741762;
          goto LABEL_85;
        }
        if ( v55 )
        {
          *(_QWORD *)&v54 = -1LL;
          *((_QWORD *)&v54 + 1) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_29:
          v20 = ExAllocatePool2(256LL, 58LL, 542329939LL);
          if ( v20 )
          {
            *(_OWORD *)v20 = 0LL;
            *(_OWORD *)(v20 + 16) = 0LL;
            *(_OWORD *)(v20 + 32) = 0LL;
            *(_QWORD *)(v20 + 48) = 0LL;
            *(_WORD *)(v20 + 56) = 0;
            *(_WORD *)(v20 + 6) = 24;
            *(_BYTE *)(v20 + 5) = 25;
            qmemcpy((void *)(v20 + 8), "$Kernel.Purge.AppxFICache", 25);
            *(_OWORD *)(v20 + 34) = v54;
            *(_QWORD *)(v20 + 50) = 0LL;
            v14 = (void *)v20;
            v17 = FsRtlSetKernelEaFile(v16);
            goto LABEL_31;
          }
          goto LABEL_84;
        }
        if ( ObOpenObjectByPointer(v16, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
          ZwSetCachedSigningLevel(2u, v7 - 2 > 1 ? 0 : 6, &TargetFile, 1u, TargetFile);
        LODWORD(v57) = 0;
        v19 = (__int64 *)ExAllocatePool2(256LL, 584LL, 542329939LL);
        if ( !v19 )
        {
LABEL_84:
          v17 = -1073741801;
          goto LABEL_85;
        }
        v17 = FsRtlKernelFsControlFile(v16, v19, 0x248u, (__int64)&v57);
        if ( v17 >= 0 )
        {
          if ( (unsigned int)v57 < 0x40 )
            goto LABEL_98;
          v48 = *v19;
          v17 = FsRtlKernelFsControlFile(v16, v19, 0x248u, (__int64)&v57);
          if ( v17 < 0 )
            goto LABEL_28;
          if ( (unsigned int)v57 < 0x40 )
          {
LABEL_98:
            v17 = -1073741762;
          }
          else
          {
            *((_QWORD *)&v54 + 1) = v19[3];
            *(_QWORD *)&v54 = v48;
          }
        }
LABEL_28:
        ExFreePoolWithTag(v19, 0);
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
