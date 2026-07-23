/*
 * XREFs of sub_14092B8A0 @ 0x14092B8A0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092B8A0(__int64 a1, __int128 *a2, const void *a3, unsigned int a4)
{
  size_t v4; // rsi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbp
  int v11; // ecx
  __int64 result; // rax
  _OWORD *PoolWithTag; // rdi
  PVOID v14; // rax
  __int128 v15; // xmm0

  v4 = a4;
  if ( !a1 || !a3 || !a2 || !a4 )
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerAddSecondaryData: Invalid parameter.\n\n");
    return 3221225485LL;
  }
  v8 = *(_DWORD *)(a1 + 100);
  if ( v8 != 1 )
  {
    if ( v8 != 2 )
      return 3221225659LL;
    v10 = *(_QWORD *)(a1 + 128);
    if ( v10 )
    {
      v9 = v10 + 32;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  v9 = a1 + 160;
LABEL_10:
  v11 = *(_DWORD *)(a1 + 92);
  if ( a4 > v11 - *(_DWORD *)(a1 + 96) )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkWerAddSecondaryData: Secondary data exceeds buffer. Size 0x%x Maxsize 0x%x Datasize 0x%x.\n\n",
      a4,
      v11,
      *(_DWORD *)(a1 + 96));
    return 3221225626LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57676244u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  v14 = ExAllocatePoolWithTag(PagedPool, (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x57676244u);
  *((_QWORD *)PoolWithTag + 2) = v14;
  if ( !v14 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x57676244u);
    return 3221225495LL;
  }
  memmove(v14, a3, v4);
  v15 = *a2;
  *((_DWORD *)PoolWithTag + 6) = v4;
  *PoolWithTag = v15;
  *(_DWORD *)(a1 + 96) += v4;
  if ( *(_DWORD *)(a1 + 100) == 1 )
    ++*(_DWORD *)(a1 + 176);
  *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(v9 + 8);
  result = 0LL;
  *(_QWORD *)(v9 + 8) = PoolWithTag;
  return result;
}
