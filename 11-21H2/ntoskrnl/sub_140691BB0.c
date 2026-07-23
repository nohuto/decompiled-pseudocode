/*
 * XREFs of sub_140691BB0 @ 0x140691BB0
 * Callers:
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140691898 @ 0x140691898 (sub_140691898.c)
 *     sub_1409262FC @ 0x1409262FC (sub_1409262FC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406924F0 @ 0x1406924F0 (sub_1406924F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140691BB0(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rax
  void *v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  size_t v22; // r15
  void *v23; // r12
  PVOID v24; // rax
  void *v25; // rbp
  size_t v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // r14
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r14
  size_t v31; // rbp
  void *v32; // r12
  PVOID PoolWithTag; // rax
  void *v34; // rsi
  size_t v35; // rax
  size_t v36; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v36 = 0LL;
  if ( sub_1406924F0(a1, a2, &v36) )
    return (unsigned int)-1073741771;
  v5 = a1[6];
  v6 = v36;
  v7 = a1[7];
  if ( v36 < v5 )
  {
    if ( v5 < v7 )
    {
LABEL_4:
      v8 = a1[5];
      v9 = v8 * v6;
      if ( is_mul_ok(v8, v6) )
      {
        v11 = a1[9];
        v12 = (_QWORD *)(v11 + v9);
        if ( v11 + v9 >= v11 )
        {
          v13 = v8 * (v6 + 1);
          if ( is_mul_ok(v8, v6 + 1) )
          {
            v14 = (void *)(v11 + v13);
            if ( v11 + v13 >= v11 )
            {
              v15 = a1[6] - v6;
              if ( is_mul_ok(v15, v8) )
              {
                memmove(v14, v12, v15 * v8);
                *v12 = a2;
LABEL_12:
                ++a1[6];
                return v2;
              }
            }
          }
        }
      }
      return (unsigned int)-2147483637;
    }
    v27 = v5 + 1;
    if ( v27 > v7 )
    {
      v28 = a1[8] - 1;
      if ( v28 + v27 < v27 )
        return (unsigned int)-2147483637;
      v29 = a1[5];
      v30 = (v28 + v27) & ~v28;
      v36 = v7 * v29;
      if ( !is_mul_ok(v7, v29) )
        return (unsigned int)-2147483637;
      v31 = v30 * v29;
      if ( !is_mul_ok(v30, v29) )
        return (unsigned int)-2147483637;
      v32 = (void *)a1[9];
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30 * v29, 0x72615452u);
      v34 = PoolWithTag;
      if ( !v32 )
      {
        if ( PoolWithTag )
          memset(PoolWithTag, 0, v31);
        if ( !v34 )
          return (unsigned int)-2147024882;
LABEL_47:
        a1[9] = (unsigned __int64)v34;
        a1[7] = v30;
        goto LABEL_4;
      }
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v31);
        v35 = v36;
        if ( v36 >= v31 )
          v35 = v31;
        memmove(v34, v32, v35);
        ExFreePoolWithTag(v32, 0x72615452u);
        goto LABEL_47;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024809;
  }
  if ( v5 >= v7 )
  {
    v18 = v5 + 1;
    if ( v5 + 1 <= v7 )
      return (unsigned int)-2147024809;
    v19 = a1[8] - 1;
    if ( v19 + v18 < v18 )
      return (unsigned int)-2147483637;
    v20 = a1[5];
    v21 = (v19 + v18) & ~v19;
    v36 = v7 * v20;
    if ( !is_mul_ok(v7, v20) )
      return (unsigned int)-2147483637;
    v22 = v21 * v20;
    if ( !is_mul_ok(v21, v20) )
      return (unsigned int)-2147483637;
    v23 = (void *)a1[9];
    v24 = ExAllocatePoolWithTag(PagedPool, v21 * v20, 0x72615452u);
    v25 = v24;
    if ( v23 )
    {
      if ( !v24 )
        return (unsigned int)-2147024882;
      memset(v24, 0, v22);
      v26 = v36;
      if ( v36 >= v22 )
        v26 = v22;
      memmove(v25, v23, v26);
      ExFreePoolWithTag(v23, 0x72615452u);
    }
    else
    {
      if ( v24 )
        memset(v24, 0, v22);
      if ( !v25 )
        return (unsigned int)-2147024882;
    }
    a1[9] = (unsigned __int64)v25;
    a1[7] = v21;
  }
  if ( is_mul_ok(a1[5], v5) )
  {
    v16 = a1[9];
    v17 = (_QWORD *)(v16 + a1[5] * v5);
    if ( (unsigned __int64)v17 >= v16 )
    {
      *v17 = a2;
      goto LABEL_12;
    }
  }
  return (unsigned int)-2147483637;
}
