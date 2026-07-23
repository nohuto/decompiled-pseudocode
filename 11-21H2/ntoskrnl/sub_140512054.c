/*
 * XREFs of sub_140512054 @ 0x140512054
 * Callers:
 *     sub_14023A860 @ 0x14023A860 (sub_14023A860.c)
 *     sub_1405114B0 @ 0x1405114B0 (sub_1405114B0.c)
 *     sub_140511570 @ 0x140511570 (sub_140511570.c)
 *     sub_1405119B0 @ 0x1405119B0 (sub_1405119B0.c)
 * Callees:
 *     sub_140200750 @ 0x140200750 (sub_140200750.c)
 *     sub_140511B00 @ 0x140511B00 (sub_140511B00.c)
 *     sub_140517630 @ 0x140517630 (sub_140517630.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140512054(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        unsigned int a12,
        __int64 a13,
        __int64 a14,
        _QWORD *a15)
{
  __int64 v15; // rdi
  unsigned __int64 v19; // rax
  __int64 result; // rax
  int v21; // r8d
  int v22; // r14d
  __int64 v23; // rbx
  __int64 Pool2; // rdx
  int v25; // eax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  int v28; // edi
  __int64 v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+30h] [rbp-48h] BYREF
  __int128 v31; // [rsp+34h] [rbp-44h]

  v15 = a4;
  v31 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  if ( a15 )
    *a15 = 0LL;
  while ( 1 )
  {
    v19 = *(unsigned int *)(v15 + 40);
    if ( a5 < v19 )
      break;
    v15 = *(_QWORD *)v15;
    a5 -= v19;
    if ( !v15 )
      return 3221225485LL;
  }
  v30 = 2;
  result = sub_140200750(a1, (__int64 *)v15, a5, a6, v29, &v30);
  if ( (int)result >= 0 )
  {
    v21 = a7;
    v22 = v31;
    if ( (a7 & 4) != 0 && (_DWORD)v31 )
      return 3221225760LL;
    if ( a11 )
    {
      if ( a12 < DWORD2(v31) )
        return 3221225507LL;
      v23 = a11 + 40 + 24LL * DWORD1(v31);
      *(_DWORD *)v23 |= 1u;
      *(_QWORD *)(v23 + 160) = a11;
      *(_DWORD *)(v23 + 156) = a12;
    }
    else
    {
      Pool2 = ExAllocatePool2(66LL, DWORD2(v31), 1147953480LL);
      if ( !Pool2 )
        return 3221225626LL;
      v21 = a7;
      v25 = DWORD2(v31);
      v23 = Pool2 + 8 * (DWORD1(v31) + 2LL * DWORD1(v31) + 5);
      *(_DWORD *)v23 = 0;
      *(_QWORD *)(v23 + 160) = Pool2;
      *(_DWORD *)(v23 + 156) = v25;
    }
    if ( a15 )
      *a15 = *(_QWORD *)(v23 + 160);
    *(_DWORD *)(v23 + 156) -= 168;
    *(_QWORD *)(v23 + 8) = v15;
    *(_QWORD *)(v23 + 16) = 0LL;
    v26 = a5 + *(_QWORD *)(v15 + 32) + *(unsigned int *)(v15 + 44);
    *(_QWORD *)(v23 + 120) = a8;
    *(_QWORD *)(v23 + 32) = v26;
    *(_DWORD *)(v23 + 40) = a6;
    *(_QWORD *)(v23 + 128) = a9;
    *(_QWORD *)(v23 + 144) = a1;
    *(_BYTE *)(v23 + 152) = a10;
    *(_DWORD *)(v23 + 44) = v22;
    *(_QWORD *)(v23 + 24) = 0LL;
    if ( a3 )
    {
      v27 = (_QWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 88) = v23;
      *(_DWORD *)(a3 + 36) |= 2u;
    }
    else
    {
      v27 = (_QWORD *)(v23 + 48);
      *(_DWORD *)(v23 + 68) &= ~2u;
    }
    v27[4] = v23;
    v27[6] = a2;
    v27[7] = *(_QWORD *)(a2 + 32);
    if ( *(_BYTE *)(a1 + 432) || *(_DWORD *)(a1 + 512) == 3 || !*(_BYTE *)(a1 + 437) && !a10 )
    {
      if ( !v22 )
        v22 = 1;
      *(_DWORD *)(v23 + 44) = v22;
      if ( a8 )
      {
        v28 = sub_140517630((PDMA_ADAPTER)a1, v21, (__int64)sub_140511B00);
      }
      else
      {
        v28 = sub_140517630((PDMA_ADAPTER)a1, v21, 0LL);
        if ( !v28 )
          sub_140511B00(a2, *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 232), v23);
      }
      if ( v28 < 0 && !a11 )
        ExFreePoolWithTag(*(PVOID *)(v23 + 160), 0);
      return (unsigned int)v28;
    }
    else
    {
      sub_140511B00(a2, *(_QWORD *)(a2 + 32), 0LL, v23);
      return 0LL;
    }
  }
  return result;
}
