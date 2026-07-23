/*
 * XREFs of sub_140909214 @ 0x140909214
 * Callers:
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 *     sub_140846BEC @ 0x140846BEC (sub_140846BEC.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1404568E6 @ 0x1404568E6 (sub_1404568E6.c)
 *     sub_140457720 @ 0x140457720 (sub_140457720.c)
 *     sub_140505560 @ 0x140505560 (sub_140505560.c)
 *     sub_14051314C @ 0x14051314C (sub_14051314C.c)
 *     sub_14090943C @ 0x14090943C (sub_14090943C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140909214(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _MDL *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  PVOID v11; // r14
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r9d
  __int64 result; // rax
  PVOID BaseAddress; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+78h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  v27 = 0;
  v2 = a2;
  v4 = 0LL;
  v5 = sub_14090943C(a1, a2, &BaseAddress);
  v7 = (struct _MDL *)v5;
  if ( !v5 )
  {
LABEL_10:
    LODWORD(v8) = 0;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(v5 + 40) >> 12;
  v9 = sub_1403B1F04(v6, 24LL);
  v11 = BaseAddress;
  v12 = v9;
  if ( !v9 )
  {
LABEL_7:
    if ( v11 )
      MmUnmapLockedPages(v11, v7);
    MmFreePagesFromMdl(v7);
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    goto LABEL_10;
  }
  v13 = (void *)sub_1403B1F04(v10, 72LL * (unsigned int)v8);
  v4 = (__int64)v13;
  if ( !v13 )
  {
LABEL_6:
    sub_1403B1B5C(v14, v12);
    goto LABEL_7;
  }
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 12) = 0;
  memset(v13, 0, 72 * v8);
  *(_DWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v4;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 48) = v12;
  *(_QWORD *)(a1 + 72) = v12;
  v4 = sub_14051314C(a1, (__int64)v11, 0LL, 0, v7);
  if ( !v4 )
  {
    sub_1403B1B5C(v6, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 320) = v7;
  *(_QWORD *)(a1 + 328) = v11;
LABEL_11:
  if ( (_DWORD)v8 != v2 )
  {
    v15 = sub_1404568E6(v6, *(_QWORD *)(a1 + 152), (unsigned int)(v2 - v8), 0LL, 1, (__int64)&v27);
    if ( !v15 )
      goto LABEL_17;
    v17 = v27;
    v18 = v15;
    if ( v27 )
    {
      v19 = (unsigned int)v27;
      do
      {
        *(_QWORD *)(v18 + 48) = *(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
        v18 = *(_QWORD *)(v18 + 8);
        --v19;
      }
      while ( v19 );
    }
    LODWORD(v8) = v17 + v8;
    v4 = sub_140457720(v15, v17, v4);
    if ( (_DWORD)v8 != v2 )
    {
LABEL_17:
      v20 = sub_140505560(v16, *(_QWORD *)(a1 + 152), (unsigned int)(v2 - v8), 0LL, 1, (ULONG *)&v27);
      if ( v20 )
      {
        v21 = v27;
        v22 = v20;
        if ( v27 )
        {
          v23 = (unsigned int)v27;
          do
          {
            *(_QWORD *)(v22 + 48) = *(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
            v22 = *(_QWORD *)(v22 + 8);
            --v23;
          }
          while ( v23 );
        }
        v4 = sub_140457720(v20, v21, v4);
        LODWORD(v8) = v24 + v8;
      }
      if ( !(_DWORD)v8 )
        return 3221225626LL;
    }
  }
  *(_DWORD *)(a1 + 224) = v2;
  result = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_DWORD *)(a1 + 32) = v8;
  return result;
}
