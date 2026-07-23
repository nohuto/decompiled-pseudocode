/*
 * XREFs of sub_14065EE94 @ 0x14065EE94
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14065EE94(__int64 a1, void *a2, int a3, __int64 a4)
{
  __int128 v4; // xmm6
  unsigned int *v7; // rax
  void **v8; // rax
  _DWORD *v9; // rax
  NTSTATUS v10; // eax
  struct _FILE_OBJECT *v11; // r14
  int v12; // ebx
  __int64 *v13; // rsi
  unsigned __int64 Pool2; // rax
  unsigned int v15; // r8d
  __int64 v16; // r9
  unsigned int v17; // ecx
  unsigned __int64 m; // rdx
  unsigned int v19; // eax
  __int64 v21; // r10
  unsigned int *v22; // r9
  unsigned int *v23; // rax
  unsigned int i; // r8d
  __int64 v25; // r10
  unsigned int *v26; // r9
  unsigned int *v27; // rax
  unsigned int j; // r8d
  __int64 v29; // rax
  unsigned int *v30; // r8
  unsigned int *v31; // rcx
  unsigned int k; // edx
  unsigned int v33; // r9d
  unsigned int *v34; // r8
  __int64 v35; // r12
  unsigned int v36; // r9d
  void **v37; // r8
  void *v38; // r10
  unsigned int v39; // r8d
  __int64 v40; // r15
  __int64 v41; // rax
  unsigned int v42; // eax
  __int128 v43; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+38h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+40h] BYREF

  LODWORD(v45) = a3;
  Object = a2;
  v4 = 0LL;
  if ( !a1 || !a4 || (v31 = *(unsigned int **)(a1 + 8)) == 0LL || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v23 = v31;
  for ( i = 0; i < 3; ++i )
  {
    v21 = *v23;
    v22 = v23 + 1;
    if ( v23 + 1 < v23 )
      return (unsigned int)-1073741675;
    v23 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  v33 = *v23;
  v34 = v23 + 1;
  if ( v23 + 1 >= v23 )
  {
    v7 = 0LL;
    if ( v33 )
      v7 = v34;
    if ( v33 != 8 )
      return (unsigned int)-1073741789;
    v35 = *(_QWORD *)v7;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v27 = v31;
    for ( j = 0; j < 4; ++j )
    {
      v25 = *v27;
      v26 = v27 + 1;
      if ( v27 + 1 < v27 )
        return (unsigned int)-1073741675;
      v27 = (unsigned int *)((char *)v26 + v25);
      if ( (unsigned int *)((char *)v26 + v25) < v26 )
        return (unsigned int)-1073741675;
    }
    v36 = *v27;
    v37 = (void **)(v27 + 1);
    if ( v27 + 1 >= v27 )
    {
      v8 = 0LL;
      if ( v36 )
        v8 = v37;
      if ( v36 != 8 )
        return (unsigned int)-1073741762;
      v38 = *v8;
      if ( *(_DWORD *)a1 > 5u )
      {
        for ( k = 0; k < 5; ++k )
        {
          v29 = *v31;
          v30 = v31 + 1;
          if ( v31 + 1 < v31 )
            return (unsigned int)-1073741675;
          v31 = (unsigned int *)((char *)v30 + v29);
          if ( (unsigned int *)((char *)v30 + v29) < v30 )
            return (unsigned int)-1073741675;
        }
        v39 = *v31;
        if ( v31 + 1 < v31 )
          return (unsigned int)-1073741675;
        v9 = 0LL;
        if ( v39 )
          v9 = v31 + 1;
        if ( v39 != 4 )
          return (unsigned int)-1073741789;
        if ( *v9 != 16 )
          return (unsigned int)-1073741762;
        if ( !v38 )
          return (unsigned int)-1073741811;
        Object = 0LL;
        v10 = ObReferenceObjectByHandle(v38, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
        v11 = (struct _FILE_OBJECT *)Object;
        v12 = v10;
        if ( v10 < 0 )
        {
LABEL_21:
          if ( v11 )
            ObfDereferenceObject(v11);
          if ( v12 < 0 )
            return (unsigned int)v12;
          *(_DWORD *)(a4 + 4) = 32;
          Pool2 = ExAllocatePool2(256LL, 32LL, 542329939LL);
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = Pool2;
          *(_DWORD *)a4 = 0;
          if ( Pool2 + 4 < Pool2 )
            return (unsigned int)-1073741675;
          if ( Pool2 + 12 > Pool2 + *(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *(_DWORD *)Pool2 = 8;
          *(_QWORD *)(Pool2 + 4) = v35;
          v15 = ++*(_DWORD *)a4;
          v16 = *(_QWORD *)(a4 + 8);
          if ( !v16 )
          {
            v42 = *(_DWORD *)(a4 + 4);
            if ( v42 + 20 >= v42 )
            {
              *(_DWORD *)(a4 + 4) = v42 + 20;
              *(_DWORD *)a4 = v15 + 1;
              return 0;
            }
            *(_DWORD *)(a4 + 4) = -1;
            return (unsigned int)-1073741675;
          }
          v17 = 0;
          for ( m = *(_QWORD *)(a4 + 8); v17 < v15; m += v19 )
          {
            v19 = *(_DWORD *)m + 4;
            if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v19 < m )
              return (unsigned int)-1073741675;
            ++v17;
          }
          if ( m + 4 < m )
            return (unsigned int)-1073741675;
          v12 = 0;
          if ( m + 20 <= v16 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)m = 16;
            *(_OWORD *)(m + 4) = v4;
            ++*(_DWORD *)a4;
            return (unsigned int)v12;
          }
          return (unsigned int)-1073741789;
        }
        LODWORD(v45) = 0;
        v13 = (__int64 *)ExAllocatePool2(256LL, 584LL, 542329939LL);
        if ( !v13 )
        {
          v12 = -1073741801;
          goto LABEL_21;
        }
        v12 = FsRtlKernelFsControlFile(v11, v13, 0x248u, (__int64)&v45);
        if ( v12 >= 0 )
        {
          if ( (unsigned int)v45 < 0x40 )
          {
LABEL_71:
            v12 = -1073741762;
            goto LABEL_20;
          }
          v40 = *v13;
          if ( !v11->WriteAccess )
          {
            v12 = FsRtlKernelFsControlFile(v11, v13, 0x248u, (__int64)&v45);
            if ( v12 < 0 )
              goto LABEL_20;
            if ( (unsigned int)v45 >= 0x40 )
            {
              v41 = v13[3];
              goto LABEL_75;
            }
            goto LABEL_71;
          }
          v12 = FsRtlKernelFsControlFile(v11, v13, 0x248u, (__int64)&v45);
          if ( v12 >= 0 )
          {
            if ( (unsigned int)v45 >= 8 )
            {
              v41 = *v13;
LABEL_75:
              *(_QWORD *)&v43 = v40;
              *((_QWORD *)&v43 + 1) = v41;
              v4 = v43;
              goto LABEL_20;
            }
            goto LABEL_71;
          }
        }
LABEL_20:
        ExFreePoolWithTag(v13, 0);
        goto LABEL_21;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)-1073741675;
}
