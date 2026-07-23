/*
 * XREFs of sub_1409DD6BC @ 0x1409DD6BC
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 *     IoWMIQueryAllDataMultiple @ 0x1409DBA30 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409DD6BC(
        int a1,
        PVOID *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        int *a8)
{
  __int64 v8; // rdi
  _DWORD *v9; // r15
  PVOID *v10; // rdx
  int v11; // r13d
  __int64 v12; // rbp
  char *PoolWithTag; // rax
  char *v14; // rsi
  _QWORD *v15; // rcx
  int v16; // ebp
  char v17; // r12
  char *v18; // r14
  char *v19; // rcx
  char *v20; // rbx
  PVOID *v22; // r13
  char *v23; // rsi
  unsigned int v24; // edi
  bool v26; // zf
  PVOID v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v34; // [rsp+34h] [rbp-F4h] BYREF
  char *v35; // [rsp+40h] [rbp-E8h]
  int v36; // [rsp+48h] [rbp-E0h]
  PVOID *v37; // [rsp+50h] [rbp-D8h]
  PVOID Object; // [rsp+58h] [rbp-D0h]
  __int64 v39; // [rsp+60h] [rbp-C8h]
  char *v40; // [rsp+68h] [rbp-C0h]
  char *v41; // [rsp+70h] [rbp-B8h]
  IRP *v42; // [rsp+78h] [rbp-B0h]
  _DWORD *v43; // [rsp+80h] [rbp-A8h]
  int *v44; // [rsp+88h] [rbp-A0h]
  _BYTE v45[80]; // [rsp+90h] [rbp-98h] BYREF

  LODWORD(v8) = a1;
  v9 = a5;
  v37 = a2;
  v42 = a3;
  v44 = a8;
  v43 = a5;
  memset(v45, 0, 0x48uLL);
  v10 = v37;
  v11 = 0;
  v34 = 0LL;
  v36 = 0;
  Object = 0LL;
  if ( v37 )
  {
    v14 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v8 = *(unsigned int *)a7;
    v12 = v8;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v8, 0x70696D57u);
    v40 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( (_DWORD)v8 )
    {
      v15 = PoolWithTag;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + a7 - PoolWithTag + 8);
        ++v15;
        --v12;
      }
      while ( v12 );
    }
    v10 = v37;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = (char *)a5;
  v35 = (char *)a5;
  v20 = (char *)a5;
  if ( !(_DWORD)v8 )
    goto LABEL_26;
  v22 = v10;
  v41 = (char *)(v14 - (char *)v10);
  v23 = (char *)(v14 - (char *)v10);
  v39 = (unsigned int)v8;
  do
  {
    if ( v20 == v45 || a6 < 0x48 )
    {
      v20 = v45;
      v24 = 72;
      v18 = 0LL;
    }
    else
    {
      v20 = v19;
      v24 = a6;
    }
    memset(v20, 0, 0x48uLL);
    v26 = v37 == 0LL;
    *((_DWORD *)v20 + 11) = 1;
    *(_DWORD *)v20 = 48;
    if ( v26 )
    {
      *((_QWORD *)v20 + 2) = *(PVOID *)((char *)v22 + (_QWORD)v23);
      v27 = Object;
    }
    else
    {
      v27 = *v22;
      Object = *v22;
    }
    if ( (int)sub_14078CD70(v27, v42, a4, (__int64)v20, v24, &v34) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v20 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++HIDWORD(v34);
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v20 + 12);
      v20 = v45;
LABEL_22:
      v17 = 1;
      v16 += (v29 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v35;
      goto LABEL_24;
    }
    if ( v20 == v45 )
    {
      v29 = v34;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v36;
    v30 = *((unsigned int *)v20 + 3);
    v18 = v20;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v30 = *((unsigned int *)v18 + 3);
    }
    v31 = ((_DWORD)v34 + 7) & 0xFFFFFFF8;
    v19 = &v35[v31];
    v16 += v31;
    a6 -= v31;
    v35 = v19;
    v36 = (_DWORD)v19 - (_DWORD)v18;
LABEL_24:
    ++v22;
    --v39;
  }
  while ( v39 );
  v14 = v40;
  v9 = v43;
  v11 = HIDWORD(v34);
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v11 )
    return 3221226133LL;
  if ( v17 )
  {
    v32 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v16;
  }
  else
  {
    v32 = v16;
  }
  *v44 = v32;
  return 0LL;
}
