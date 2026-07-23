/*
 * XREFs of RtlpHpParametersVerify @ 0x180118254
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x1800A8BB0 (RtlCompareMemoryUlong.c)
 */

_BOOL8 __fastcall RtlpHpParametersVerify(__int64 a1)
{
  int v2; // edi
  unsigned int v5; // eax

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_WORD *)a1 != 3
    || *(_WORD *)(a1 + 2) != 80
    || (*(_DWORD *)(a1 + 4) & 0xFFFFFFFE) != 0
    || RtlCompareMemoryUlong((PVOID)(a1 + 48), 0x20uLL, 0) != 32 )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    return RtlCompareMemoryUlong((PVOID)(a1 + 8), 0x28uLL, 0) == 40;
  if ( *(_DWORD *)(a1 + 4)
    || *(_DWORD *)(a1 + 8)
    || (unsigned int)(v2 - 1) > 0x1E
    || (v2 & 2) != 0
    || *(_DWORD *)(a1 + 16) != -1
    || RtlCompareMemoryUlong((PVOID)(a1 + 32), 0x10uLL, 0) != 16 )
  {
    return 0LL;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v5 = v2 & 0xFFFFFFE3;
    if ( (v2 & 0xFFFFFFE3) != 0 )
      return 0LL;
  }
  else
  {
    v5 = v2 & 0xFFFFFFE3;
  }
  if ( (v2 & 0x18) == 0x10 || (v2 & 4) != 0 && (v2 & 0x18) != 0 )
    return 0LL;
  return (v2 & 0x1C) == 0 || v5 == 0;
}
