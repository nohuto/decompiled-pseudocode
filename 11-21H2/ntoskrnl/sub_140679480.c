/*
 * XREFs of sub_140679480 @ 0x140679480
 * Callers:
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_140678B4C @ 0x140678B4C (sub_140678B4C.c)
 *     sub_140678B98 @ 0x140678B98 (sub_140678B98.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140679480(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  PVOID *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a2;
    v6 = P[0];
    if ( *(_QWORD **)(P[0] + 8LL) != P )
LABEL_32:
      __fastfail(3u);
    *v3 = P[0];
    v3[1] = P;
    *(_QWORD *)(v6 + 8) = v3;
    P[0] = v3;
  }
  if ( !a1 )
    goto LABEL_6;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 1512) & 0x20) != 0 )
      goto LABEL_6;
    v14 = sub_140678B98(2LL);
    *(_QWORD *)(a1 + 1200) = v14;
    if ( !v14 )
      break;
    *((_DWORD *)v14 + 33) |= 3u;
    *((_DWORD *)v14 + 32) = 655370000;
    *(_DWORD *)(*(_QWORD *)(a1 + 1200) + 44LL) = *((_DWORD *)v14 + 32);
    *(_DWORD *)(*(_QWORD *)(a1 + 1200) + 40LL) |= 0x40u;
    v15 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
    v3 = v15;
    if ( !v15 )
    {
      sub_140678B4C(*(PVOID **)(a1 + 1200), 2u);
      *(_QWORD *)(a1 + 1200) = 0LL;
      break;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x20u);
    v15[2] = a1;
    v16 = P[0];
    if ( *(_QWORD **)(P[0] + 8LL) != P )
      goto LABEL_32;
    *v3 = P[0];
    v3[1] = P;
    *(_QWORD *)(v16 + 8) = v3;
    P[0] = v3;
    a1 = *(_QWORD *)(a1 + 1264);
    if ( !a1 )
    {
LABEL_6:
      while ( v3 != P )
      {
        v7 = v3[2];
        v8 = *(_QWORD *)(v7 + 1264);
        v9 = *(_QWORD *)(v7 + 1200);
        if ( v8 )
        {
          v10 = *(_QWORD *)(v8 + 1200) + 128LL;
        }
        else
        {
          v10 = *(_QWORD *)(v7 + 1208);
          if ( byte_140D068E0 && v10 )
            ObfReferenceObjectWithTag(*(PVOID *)(v7 + 1304), 0x624A7350u);
        }
        sub_140208434(v9 + 128, *(_QWORD *)(v9 + 128), v10);
        if ( *(_QWORD *)(v7 + 1208) )
          sub_1406FF880((PVOID)v7, 0LL, 8);
        sub_1406FF880((PVOID)v7, *(_QWORD *)(v7 + 1200), 8);
        v11 = *v3;
        if ( *(_QWORD **)(*v3 + 8LL) != v3 )
          goto LABEL_32;
        v12 = (_QWORD *)v3[1];
        if ( (_QWORD *)*v12 != v3 )
          goto LABEL_32;
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        ExFreePoolWithTag(v3, 0x624A7350u);
        v3 = (_QWORD *)P[0];
      }
      return 0LL;
    }
  }
  while ( 1 )
  {
    v17 = (_QWORD *)P[0];
    if ( (_QWORD *)P[0] == P )
      return 3221225626LL;
    v18 = *(_QWORD *)(P[0] + 16LL);
    v19 = *(PVOID **)(v18 + 1200);
    if ( v19 )
    {
      sub_140678B4C(v19, 2u);
      *(_QWORD *)(v18 + 1200) = 0LL;
      _InterlockedAnd((volatile signed __int32 *)(v18 + 1512), 0xFFFFFFDF);
    }
    v20 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) != v17 )
      goto LABEL_32;
    v21 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v21 != v17 )
      goto LABEL_32;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    ExFreePoolWithTag(v17, 0x624A7350u);
  }
}
