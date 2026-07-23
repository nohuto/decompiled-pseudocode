/*
 * XREFs of sub_14065A848 @ 0x14065A848
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     sub_1406E10CC @ 0x1406E10CC (sub_1406E10CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14065A848(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  unsigned int v3; // r14d
  int v4; // r11d
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v26; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  v26 = 0;
  sub_140AB4534(&v26);
  if ( !*(_QWORD *)(BugCheckParameter2 + 1560) )
    return 3221225485LL;
  v3 = *(_DWORD *)(BugCheckParameter2 + 280);
  v4 = sub_14068EC28(BugCheckParameter2, 2LL, v3 + 4096, 0LL);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = sub_140AB44C0(BugCheckParameter2, v5);
      if ( !v6 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0xCE4uLL);
      v10 = *(unsigned int *)(sub_140AB451C(v7, v6, &v26) + 8);
      if ( (unsigned int)(v10 + v11) > *(_DWORD *)(BugCheckParameter2 + 280) || (v10 & 0xFFF) != 0 )
        break;
      sub_140AB44A4(v10, v9, &v26);
      if ( v5 >= v3 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741492;
  }
LABEL_8:
  if ( v5 < *(_DWORD *)(BugCheckParameter2 + 280) )
    return (unsigned int)v4;
  v12 = 4096;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
  v14[10] = v3;
  v14[11] = 1;
  v14[127] = sub_140AB41B0(v14, v15, v16);
  v17 = sub_14042A5E0(BugCheckParameter2, 2LL);
  ExFreePoolWithTag(v14, 0);
  if ( v17 >= 0 )
  {
    v18 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v19 = sub_140AB44C0(BugCheckParameter2, v18);
        if ( !v19 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v18, 0xD39uLL);
        v21 = *(_DWORD *)(sub_140AB451C(v20, v19, &v26) + 8);
        if ( (int)sub_14042A5E0(BugCheckParameter2, 2LL) < 0 )
          break;
        sub_140AB44A4(v23, v22, &v26);
        v12 += v21;
        v18 += v21;
        if ( v18 >= v3 )
          goto LABEL_15;
      }
      return (unsigned int)-1073741491;
    }
    else
    {
LABEL_15:
      if ( (int)sub_1406E10CC(BugCheckParameter2, 2LL) < 0 )
        return (unsigned int)-1073741491;
      return v2;
    }
  }
  return 3221225805LL;
}
