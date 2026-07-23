/*
 * XREFs of sub_140962930 @ 0x140962930
 * Callers:
 *     sub_140962A18 @ 0x140962A18 (sub_140962A18.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void *sub_140962930()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx
  void *(__cdecl *v2)(void *, const void *, size_t); // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  PRUNTIME_FUNCTION v5; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70727446u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 4) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 6) = 0;
    v2 = memmove;
    LODWORD(v3) = 0;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    while ( 1 )
    {
      ImageBase = 0LL;
      v4 = (unsigned __int64)v2;
      v5 = RtlLookupFunctionEntry((DWORD64)v2, &ImageBase, 0LL);
      if ( v5 )
        v4 = ImageBase + v5->EndAddress;
      if ( (int)RtlAddRange((__int64)v1, (unsigned __int64)v2, v4, 0, 1u, 0LL, 0LL) < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      v2 = (void *(__cdecl *)(void *, const void *, size_t))*(&ControlPc + v3);
      if ( !v2 )
        return v1;
    }
    RtlFreeRangeList((__int64)v1);
    ExFreePoolWithTag(v1, 0x70727446u);
  }
  return 0LL;
}
