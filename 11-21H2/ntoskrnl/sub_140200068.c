/*
 * XREFs of sub_140200068 @ 0x140200068
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_140921F64 @ 0x140921F64 (sub_140921F64.c)
 * Callees:
 *     sub_1402264A8 @ 0x1402264A8 (sub_1402264A8.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F434 @ 0x14069F434 (sub_14069F434.c)
 *     sub_14069F45C @ 0x14069F45C (sub_14069F45C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140200068(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  __int16 v8; // di
  __int64 v9; // r15
  ULONG_PTR *v10; // rax
  ULONG_PTR *v11; // rsi
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rdx
  __int64 v16; // rax

  v2 = 0;
  if ( *a2 >= 2 )
  {
    LOWORD(v5) = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (__int16)v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v7 = 0LL;
    v5 = (unsigned __int16)v5;
    do
    {
      sub_1402264A8(v7 + *(_QWORD *)(a1 + 80));
      v7 += 32LL;
      --v5;
    }
    while ( v5 );
  }
  v8 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v8 >= 0; --v8 )
  {
    v9 = sub_14069F434(a1, (unsigned __int16)v8);
    v10 = (ULONG_PTR *)sub_14069F1CC(a2);
    v11 = v10;
    if ( v10[2] )
    {
      if ( (unsigned int)sub_14069F45C(*v10) == 1 )
        break;
      v14 = v13;
      if ( (*(_BYTE *)(v12 + 2) & 0x40) == 0 && *(_DWORD *)(v12 + 36) )
      {
        *(_QWORD *)v9 = v13;
        *(_DWORD *)(v9 + 24) = *(_DWORD *)(v12 + 36);
        v15 = *(unsigned int *)(v12 + 40);
        if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
          v16 = sub_1406BF400(v13, v15);
        else
          v16 = sub_1407C9820(v13);
        *(_QWORD *)(v9 + 8) = v16;
        v14 = *v11;
      }
      if ( (unsigned int)sub_14069F45C(v14) )
        break;
    }
  }
  return v2;
}
