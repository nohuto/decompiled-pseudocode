/*
 * XREFs of sub_1406605B8 @ 0x1406605B8
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406605B8(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v6; // r13d
  unsigned int *v7; // rax
  void **v8; // rax
  void *v9; // rcx
  void *v10; // r15
  __int64 v11; // r14
  NTSTATUS v12; // eax
  struct _FILE_OBJECT *v13; // rbx
  int v14; // esi
  __int64 Pool2; // rax
  __int64 v16; // rax
  int KernelEaFile; // eax
  __int64 v18; // rdx
  _QWORD *v19; // r8
  __int64 *v20; // r12
  int v21; // ebx
  __int64 v22; // r12
  unsigned int v23; // ebx
  unsigned int *v24; // rcx
  unsigned int *v25; // rax
  unsigned int i; // r8d
  __int64 v27; // r10
  unsigned int *v28; // r9
  unsigned int v29; // r9d
  unsigned int *v30; // r8
  unsigned int j; // edx
  __int64 v33; // rax
  unsigned int *v34; // r8
  unsigned int v35; // r8d
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // r9
  unsigned int v39; // eax
  _DWORD *v40; // rdx
  unsigned int k; // r8d
  unsigned int v42; // eax
  __int64 v43; // [rsp+50h] [rbp-30h]
  __int64 Source2; // [rsp+58h] [rbp-28h] BYREF
  __int64 v45; // [rsp+60h] [rbp-20h]
  _QWORD *v46; // [rsp+68h] [rbp-18h]
  __int64 v47; // [rsp+70h] [rbp-10h]
  __int64 v48; // [rsp+C0h] [rbp+40h]
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v50; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v50) = a3;
  Object = a2;
  v6 = 0;
  if ( a1 )
  {
    if ( a4 )
    {
      v24 = *(unsigned int **)(a1 + 8);
      if ( v24 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
          v25 = v24;
          for ( i = 0; i < 3; ++i )
          {
            v27 = *v25;
            v28 = v25 + 1;
            if ( v25 + 1 < v25 )
              return (unsigned int)-1073741675;
            v25 = (unsigned int *)((char *)v28 + v27);
            if ( (unsigned int *)((char *)v28 + v27) < v28 )
              return (unsigned int)-1073741675;
          }
          v29 = *v25;
          v30 = v25 + 1;
          if ( v25 + 1 < v25 )
            return (unsigned int)-1073741675;
          v7 = 0LL;
          if ( v29 )
            v7 = v30;
          if ( v29 != 8 )
            return (unsigned int)-1073741789;
          v22 = *(_QWORD *)v7;
          v47 = *(_QWORD *)v7;
          if ( *(_DWORD *)a1 > 4u )
          {
            for ( j = 0; j < 4; ++j )
            {
              v33 = *v24;
              v34 = v24 + 1;
              if ( v24 + 1 < v24 )
                return (unsigned int)-1073741675;
              v24 = (unsigned int *)((char *)v34 + v33);
              if ( (unsigned int *)((char *)v34 + v33) < v34 )
                return (unsigned int)-1073741675;
            }
            v35 = *v24;
            if ( v24 + 1 < v24 )
              return (unsigned int)-1073741675;
            v8 = 0LL;
            if ( v35 )
              v8 = (void **)(v24 + 1);
            if ( v35 != 8 )
              return (unsigned int)-1073741762;
            v9 = *v8;
            LODWORD(v50) = 0;
            v10 = 0LL;
            v48 = 0LL;
            v11 = 0LL;
            v43 = 0LL;
            Source2 = 0LL;
            if ( !v9 )
              return (unsigned int)-1073741811;
            Object = 0LL;
            v12 = ObReferenceObjectByHandle(v9, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
            v13 = (struct _FILE_OBJECT *)Object;
            v14 = v12;
            if ( v12 >= 0 )
            {
              Pool2 = ExAllocatePool2(256LL, 31LL, 542329939LL);
              v10 = (void *)Pool2;
              if ( !Pool2 )
                goto LABEL_60;
              *(_QWORD *)(Pool2 + 5) = 0LL;
              *(_QWORD *)(Pool2 + 13) = 0LL;
              *(_QWORD *)(Pool2 + 21) = 0LL;
              *(_BYTE *)(Pool2 + 30) = 0;
              *(_BYTE *)(Pool2 + 4) = 25;
              *(_DWORD *)Pool2 = 0;
              strcpy((char *)(Pool2 + 5), "$Kernel.Purge.AppxFICach");
              v16 = ExAllocatePool2(256LL, 58LL, 542329939LL);
              v11 = v16;
              if ( !v16 )
              {
LABEL_60:
                v14 = -1073741801;
                goto LABEL_32;
              }
              *(_OWORD *)v16 = 0LL;
              *(_OWORD *)(v16 + 16) = 0LL;
              *(_OWORD *)(v16 + 32) = 0LL;
              *(_QWORD *)(v16 + 48) = 0LL;
              *(_WORD *)(v16 + 56) = 0;
              KernelEaFile = FsRtlQueryKernelEaFile(v13, (__int64)v10, 31, 0LL, 1, (__int64)&v50);
              v14 = KernelEaFile;
              if ( KernelEaFile == -1073741275 )
                goto LABEL_40;
              if ( KernelEaFile >= 0 )
              {
                v18 = *(unsigned __int16 *)(v11 + 6);
                v19 = (_QWORD *)(v11 + *(unsigned __int8 *)(v11 + 5) + 9LL);
                v46 = v19;
                if ( (unsigned __int64)v19 + v18 > v11 + (unsigned __int64)(unsigned int)v50 )
                  goto LABEL_62;
                if ( (_WORD)v18 )
                {
                  if ( (_DWORD)v18 == 24 && RtlCompareMemory(v19 + 2, &Source2, 8uLL) == 8 )
                  {
                    LODWORD(v50) = 0;
                    v6 = 2;
                    v20 = (__int64 *)ExAllocatePool2(256LL, 584LL, 542329939LL);
                    if ( !v20 )
                    {
LABEL_31:
                      v22 = v47;
                      goto LABEL_32;
                    }
                    v21 = FsRtlKernelFsControlFile(v13, v20, 0x248u, (__int64)&v50);
                    if ( v21 >= 0 )
                    {
                      if ( (unsigned int)v50 < 0x40 )
                        goto LABEL_63;
                      v45 = *v20;
                      v21 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, v20, 0x248u, (__int64)&v50);
                      if ( v21 >= 0 )
                      {
                        if ( (unsigned int)v50 >= 0x40 )
                        {
                          v43 = v20[3];
                          v48 = v45;
                          goto LABEL_27;
                        }
LABEL_63:
                        v21 = -1073741762;
                      }
                    }
LABEL_27:
                    ExFreePoolWithTag(v20, 0);
                    if ( v21 >= 0 && v48 == *v46 && v43 == v46[1] )
                      v6 = 3;
                    goto LABEL_31;
                  }
LABEL_62:
                  v14 = -1073741762;
                  goto LABEL_32;
                }
LABEL_40:
                v14 = 0;
              }
            }
LABEL_32:
            if ( Object )
              ObfDereferenceObject(Object);
            if ( v10 )
              ExFreePoolWithTag(v10, 0);
            if ( v11 )
              ExFreePoolWithTag((PVOID)v11, 0);
            v23 = v14;
            if ( v14 < 0 )
              return v23;
            *(_DWORD *)(a4 + 4) = 20;
            v36 = ExAllocatePool2(256LL, 20LL, 542329939LL);
            if ( !v36 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(a4 + 8) = v36;
            *(_DWORD *)a4 = 0;
            if ( v36 + 4 < v36 )
              return (unsigned int)-1073741675;
            if ( v36 + 12 > v36 + *(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *(_DWORD *)v36 = 8;
            *(_QWORD *)(v36 + 4) = v22;
            v37 = ++*(_DWORD *)a4;
            v38 = *(_QWORD *)(a4 + 8);
            if ( !v38 )
            {
              v39 = *(_DWORD *)(a4 + 4);
              if ( v39 + 8 >= v39 )
              {
                *(_DWORD *)(a4 + 4) = v39 + 8;
                *(_DWORD *)a4 = v37 + 1;
                return 0;
              }
              *(_DWORD *)(a4 + 4) = -1;
              return (unsigned int)-1073741675;
            }
            v40 = *(_DWORD **)(a4 + 8);
            for ( k = 0; k < v37; v40 = (_DWORD *)((char *)v40 + v42) )
            {
              v42 = *v40 + 4;
              if ( *v40 >= 0xFFFFFFFC || (_DWORD *)((char *)v40 + v42) < v40 )
                return (unsigned int)-1073741675;
              ++k;
            }
            if ( v40 + 1 < v40 )
              return (unsigned int)-1073741675;
            v23 = 0;
            if ( (unsigned __int64)(v40 + 2) <= v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v40 = 4;
              v40[1] = v6;
              ++*(_DWORD *)a4;
              return v23;
            }
            return (unsigned int)-1073741789;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
